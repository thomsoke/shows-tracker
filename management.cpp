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
//  delete [] shows;
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
    cout << "   2 --- append file" << endl;
    cout << "   3 --- erase output file" << endl;
    cout << "   4 --- quit" << endl;
    cout << "----------------------------------------------" << endl;

    do
    {
      cout << "make selection: " << endl;
      getline(cin, get_input);
    } while(get_input != "1" && get_input != "2" && get_input != "3" && get_input != "4");
    temp = atoi(get_input.c_str());

    switch (temp)
    {
      case 1:
        cout << "add new show" << endl;
        add_new_show();
        break;

      case 2:
        cout << "append file" << endl;
        append_file();
        break;

      case 3:
        cout << "erase output file contents" << endl;
        erase_file();
        break;

      case 4:
        quit = true;
        cout << "quitting" << endl;
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
** this one writes regular ol variable data to txt file
*********************************************************************/
/*
void Management::append_file()
{
  ofstream outFile("output_shows.txt", ios::app);    // creates output file if doesn't exist

  if (outFile.is_open())
  {
  // will write new show to file
  // maybe take shows in, organise in a way, then write organised contents to file???
    for (int i = 0; i < show_counter; i++)
    {
      outFile << "---------------------------------------------------" << endl;
      outFile << "venue: " << shows[i]->get_venue() << endl;
      outFile << "time: " << shows[i]->get_time() << "pm" << endl;
      outFile << "day: " << shows[i]->get_day() << endl;
      outFile << "month: " << shows[i]->get_month() << endl;
      outFile << "year: " << shows[i]->get_year() << endl;
      outFile << "headliner: " << shows[i]->get_headliner() << endl;
      outFile << "opener: " << shows[i]->get_opener() << endl;
      outFile << "cost: " << shows[i]->get_cost() << endl;
      outFile << "purchased: " << shows[i]->get_purchased() << endl;
      outFile << "---------------------------------------------------" << endl;
      outFile << endl;

    }
  outFile.close();
  cout << "\n == outputting results to text file... ==" << endl;
  }

}
*/


/*********************************************************************
** this one writes json serialized data to json file
** well, it should. appears to not do that but uhhhhhh maybe close???
*********************************************************************/
void Management::append_file()
{
  ofstream outFile("output_shows.json", ios::app);    // creates output file if doesn't exist

  if (outFile.is_open())
  {
    for (int i = 0; i < show_counter; i++)
    {

      outFile << "---------------------------------------------------" << endl;
      outFile << "venue: " << shows[i]->get_j_venue() << endl;
      outFile << "time: " << shows[i]->get_time() << "pm" << endl;
      outFile << "day: " << shows[i]->get_day() << endl;
      outFile << "month: " << shows[i]->get_month() << endl;
      outFile << "year: " << shows[i]->get_year() << endl;
      outFile << "headliner: " << shows[i]->get_headliner() << endl;
      outFile << "opener: " << shows[i]->get_opener() << endl;
      outFile << "cost: " << shows[i]->get_cost() << endl;
      outFile << "purchased: " << shows[i]->get_purchased() << endl;
      outFile << "---------------------------------------------------" << endl;
      outFile << endl;

    }
  outFile.close();
  cout << "\n == outputting results to JSON file... ==" << endl;
  }

}




/*********************************************************************
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
      ofstream outFile("output_shows.txt", ios::trunc);      // creates file "output_count.txt" if it doesn't already exist
      if (outFile.is_open())
      {
        outFile.close();
        cout << "\n == erasing file contents... ==" << endl;
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
