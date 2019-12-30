/********************************************************************
** program name: shows mgmt system / shows.hpp
** author: kelly thomson
** date: 12-22-2019
** description: show class header
********************************************************************/
#ifndef SHOW_HPP
#define SHOW_HPP

#include <iostream>
#include <string>

#include <nlohmann/json.hpp>
// for convenience
using json = nlohmann::json;

using namespace std;

class Show
{
  public:
    Show();
    ~Show();
    void enter_show_info();
    string get_venue();
    float get_time();
    int get_day();
    int get_month();
    int get_year();
    string get_headliner();
    string get_opener();
    float get_cost();
    bool get_purchased();

  protected:
    string venue;
    float time;
    int day;
    int month;
    int year;
    string headliner;
    string opener;
    float cost;
    bool purchased;

  private:

};

#endif
