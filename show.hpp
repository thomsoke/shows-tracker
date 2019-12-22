/********************************************************************
** program name: shows mgmt system / shows.hpp
** author: kelly thomson
** date: 12-22-2019
** description: show class header
********************************************************************/
#ifndef SHOW_HPP
#define SHOW_HPP

#include <iostream>

using namespace std;

class Show
{
  public:
    string get_venue();
    void set_venue(string v);
    float get_time();
    void set_time(int t);
    int get_day();
    void set_day(int d);
    int get_month();
    void set_month(int m);
    int get_year();
    void set_year(int y);
    string get_headliner();
    void set_headliner(string h);
    string get_opener();
    void set_opener(string o);
    float get_price();
    void set_price(float p);
    bool get_purchased();
    void set_purchased(bool p);

  protected:
    string venue;
    float time;
    int day;
    int month;
    int year;
    string headliner;
    string opener;
    float price;
    bool purchased;

  private:

};

#endif
