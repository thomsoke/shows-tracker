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

    json get_j_venue();
    json get_j_time();
    json get_j_day();
    json get_j_month();
    json get_j_year();
    json get_j_headliner();
    json get_j_opener();
    json get_j_cost();
    json get_j_purchased();


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


    json j_venue;
    json j_time;
    json j_day;
    json j_month;
    json j_year;
    json j_headliner;
    json j_opener;
    json j_cost;
    json j_purchased;

  private:

};

#endif
