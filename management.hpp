/********************************************************************
** program name: shows mgmt system / management.hpp
** author: kelly thomson
** date: 12-22-2019
** description: management class header
********************************************************************/
#ifndef MANAGEMENT_HPP
#define MANAGEMENT_HPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Management
{
  public:
    Management();
    ~Management();
    void mgmt_menu();
    void add_new_show();
    void append_file();

  protected:

  private:
   Show* shows[10];
   int show_counter;

};

#endif
