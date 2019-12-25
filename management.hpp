/********************************************************************
** program name: shows mgmt system / management.hpp
** author: kelly thomson
** date: 12-22-2019
** description: management class header
********************************************************************/
#ifndef MANAGEMENT_HPP
#define MANAGEMENT_HPP

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

#include "show.hpp"

using namespace std;

class Management
{
  public:
    Management();
    ~Management();
    void mgmt_menu();
    void add_new_show();
    void append_file(Show* shows);

//    void append_file(ofstream &outFile, Show* shows);

    int get_available_slot();

  protected:

  private:
    bool quit;
    Show* shows[10];
    int show_counter;

};

#endif
