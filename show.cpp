/********************************************************************
** program name: shows mgmt system / shows.cpp
** author: kelly thomson
** date: 12-22-2019
** description: show class source
********************************************************************/
#include "show.hpp"

/*********************************************************************
** function: constructor
*********************************************************************/
Show::Show()
{
}

/*********************************************************************
** function: destructor
*********************************************************************/
Show::~Show()
{
}


/*********************************************************************
*********************************************************************/
void Show::enter_show_info()
{
  cout << "enter venue: " << endl;
  getline(cin, venue);

  cout << "enter time: " << endl;
  cin >> time;

  cout << "enter day: " << endl;
  cin >> day;

  cout << "enter month (number): " << endl;
  cin >> month;

  cout << "enter year: " << endl;
  cin >> year;

  cout << "enter headliner: " << endl;
  getline(cin, headliner);

  cout << "enter opener: " << endl;
  getline(cin, opener);

  cout << "enter cost: " << endl;
  cin >> cost;

  cout << "enter 1 if purchased, 0 if not: " << endl;
  cin >> purchased;

}


/*********************************************************************
*********************************************************************/
string Show::get_venue()
{
  return venue;
}

/*********************************************************************
*********************************************************************/
float Show::get_time()
{
  return time;
}

/*********************************************************************
*********************************************************************/
int Show::get_day()
{
  return day;
}

/*********************************************************************
*********************************************************************/
int Show::get_month()
{
  return month;
}

/*********************************************************************
*********************************************************************/
int Show::get_year()
{
  return year;
}

/*********************************************************************
*********************************************************************/
string Show::get_headliner()
{
  return headliner;
}

/*********************************************************************
*********************************************************************/
string Show::get_opener()
{
  return opener;
}

/*********************************************************************
*********************************************************************/
float Show::get_cost()
{
  return cost;
}

/*********************************************************************
*********************************************************************/
bool Show::get_purchased()
{
  return purchased;
}
