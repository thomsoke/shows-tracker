/********************************************************************
** program name: shows mgmt system / management.cpp
** author: kelly thomson
** date: 12-22-2019
** description: management class source
********************************************************************/
#include "management.hpp"

/*********************************************************************
** function: parameterized constructor
*********************************************************************/
Management::Management()
{
  for (int i = 0; i < 10; i++)
  {
    shows[i] = NULL;
  }
  show_counter = 0;
}

/*********************************************************************
** function: destructor
*********************************************************************/
Management::~Management()
{
//  delete [] shows;        // need mem mgmt, but this aint it (no NEW this scope)
}

/*********************************************************************
*********************************************************************/
void Management::mgmt_menu()
{
  string get_input;
  int temp;

  quit = false;

  do
  {
    cout << endl;
    cout << "-------------------- MENU --------------------" << endl;
    cout << "   1 --- add new show" << endl;
    cout << "   2 --- append added shows to file" << endl;
    cout << "   3 --- erase output file" << endl;
  //    cout << "   ? --- sort by..." << endl;  // sorting methods (start with alph by headliner && chron by day/month/yr)
    cout << "   4 --- exit to main menu" << endl;
    cout << "----------------------------------------------" << endl;

    cout << "make selection: " << endl;
    do
    {
      getline(cin, get_input);
    } while(get_input != "1" && get_input != "2" && get_input != "3" && get_input != "4");    // need better error handling
    temp = atoi(get_input.c_str());

    switch (temp)
    {
      case 1:
        cout << "add new show" << endl;
        add_new_show();
        break;

      case 2:
        cout << "append added shows to file" << endl;
        append_file();
        break;

      case 3:
        cout << "erase output file contents" << endl;
        erase_file();
        break;

      case 4:
        quit = true;
        cout << "exiting" << endl;
        break;

      default:
        cout << "invalid" << endl;
        break;
    }
  } while (!quit);

}

/*********************************************************************
*********************************************************************/
void Management::add_new_show()
{
  int slot = get_available_slot();
  if (slot != -1)
  {
    shows[slot] = new Show;
    shows[slot]->enter_show_info();
    show_counter++;
  }
  else
  cout << "no available slots" << endl;

}

/*********************************************************************
*********************************************************************/
int Management::get_available_slot()
{
  for (int i = 0; i < 10; i++)
  {
    if (shows[i] == NULL)
    {
      return i;
    }
  }
  return -1;
}

/*********************************************************************
** this one writes json serialized data to json file
** wow omg i think it actually works
*********************************************************************/
void Management::append_file()
{
  ofstream outFile("output_shows.json", ios::app);    // creates output file if doesn't exist

  if (outFile.is_open())
  {
    for (int i = 0; i < show_counter; i++)
    {
      json j = {
        {"venue", shows[i]->get_venue()},
        {"time", shows[i]->get_time()},
        {"day", shows[i]->get_day()},
        {"month", shows[i]->get_month()},
        {"year", shows[i]->get_year()},
        {"headliner", shows[i]->get_headliner()},
        {"opener", shows[i]->get_opener()},
        {"cost", shows[i]->get_cost()},
        {"purchased", shows[i]->get_purchased()}
      };
      outFile << setw(2) << j << endl;
    }
  outFile.close();
  cout << "\n == outputting results to JSON file... ==" << endl;
  }
  clear_array();    // clears written content from array
}

/*********************************************************************
** erase function for json file
*********************************************************************/
void Management::erase_file()
{
  cout << "are you SURE you want to ERASE CONTENTS?" << endl;
  cout << "this will completely ERASE ALL shows saved in output file" << endl;
  cout << "enter yes to proceed" << endl;

  string input;
  getline(cin, input);

    if (input == "yes")
    {
      ofstream outFile("output_shows.json", ios::trunc);    // creates file "output_shows.json" if it doesn't already exist
      if (outFile.is_open())
      {
        outFile.close();
        cout << "\n == erasing JSON file contents... ==" << endl;
      }
      else
      {
        cout << "error - no file opened" << endl;
      }
    }
    else
    {
      cout << "quitting erase" << endl;
    }
}

/*********************************************************************
** clear array contents to prevent double writing of shows
** called in append_file()
*********************************************************************/
void Management::clear_array()
{
  for (int i = 0; i < show_counter; i++)
  {
    if (shows[i] != NULL)
    {
      shows[i] = NULL;
    }
  }
  show_counter = 0;   // reset
}
