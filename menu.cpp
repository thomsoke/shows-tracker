/********************************************************************
** program name: shows mgmt system / menu.hpp
** author: kelly thomson
** date: 12-22-2019
** description: menu source
********************************************************************/
#include <iostream>
#include <string>
#include <stdlib.h>

#include "menu.hpp"

using namespace std;

/*********************************************************************
** function: default constructor
*********************************************************************/
Menu::Menu()
{
}

/*********************************************************************
** function: destructor
*********************************************************************/
Menu::~Menu()
{
}

/*********************************************************************
*********************************************************************/
void Menu::display_menu()
{
  Management mgmt;
  string get_input;
  int temp;

  quit = false;

  do
  {
    cout << endl;
    cout << "-------------------- MENU --------------------" << endl;
    cout << "   1 --- manage shows" << endl;
    cout << "   2 --- quit" << endl;
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
        cout << "entering management system" << endl;
        mgmt.mgmt_menu();
        break;

      case 2:
        quit = true;
        cout << "quitting" << endl;
        break;

      default:
        cout << "invalid" << endl;
        break;
    }
  } while (!quit);

}
