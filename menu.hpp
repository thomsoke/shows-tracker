/********************************************************************
** program name: shows mgmt system / menu.hpp
** author: kelly thomson
** date: 12-22-2019
** description: menu header
********************************************************************/
#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>

#include "management.hpp"

using namespace std;

class Menu
{
  public:
    Menu();
    ~Menu();
    void display_menu();

  protected:
    bool quit;

};

#endif
