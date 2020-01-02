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
#include <nlohmann/json.hpp>    // source: https://github.com/nlohmann/json

#include "show.hpp"

using json = nlohmann::json;
using namespace std;

class Management
{
  public:
    Management();
    ~Management();
    void mgmt_menu();
    void add_new_show();
    int get_available_slot();
    void append_file();
    void erase_file();
    void clear_array();

  private:
    bool quit;
    Show* shows[10];
    int show_counter;

};

#endif
