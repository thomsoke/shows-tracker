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
}

/*********************************************************************
** function: destructor
*********************************************************************/
Management::~Management()
{
  delete [] shows;
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
    cout << "   2 --- soemthing" << endl;
    cout << "   3 --- something" << endl;
    cout << "   4 --- quit" << endl;
    cout << "----------------------------------------------" << endl;

    do
    {
      cout << "make selection: " << endl;
      getline(cin, get_input);
    } while(get_input != "1" && get_input != "2");
    temp = atoi(get_input.c_str());

    switch (temp)
    {
      case 1:
        cout << "add new show" << endl;
      // add new show
        break;

      case 2:
        cout << "case 2" << endl;
      // some stuff
        break;

      case 3:
        cout << "case 3" << endl;
      // some stuff
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

}


void Management::append_file()
{
  // will write new show to file
  // maybe take shows in, organise in a way, then write organised contents to file???

}
