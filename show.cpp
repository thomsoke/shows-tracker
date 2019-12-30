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
** trying to figure out way to serialize object data members
** write to json file
** this may not be it...
*********************************************************************/
void Show::enter_show_info()
{
  string get_input;
  string temp_input;
  int temp;


  cout << "enter venue: " << endl;
  getline(cin, venue);
  temp_input = venue;
//  json j_venue = temp_input;
j_venue = temp_input;
  auto temp_input_venue = j_venue.get<string>();


  cout << "enter time: " << endl;
  cin >> time;
  temp_input = time;
//  json j_time = temp_input;
j_time = temp_input;
  auto temp_input_time = j_time.get<string>();


  cout << "enter day: " << endl;
  cin >> day;
  temp_input = day;
//  json j_day = temp_input;
j_day = temp_input;
  auto temp_input_day = j_day.get<string>();


  cout << "enter month (number): " << endl;
  cin >> month;
  temp_input = month;
//  json j_month = temp_input;
j_month = temp_input;
  auto temp_input_month = j_month.get<string>();


  cout << "enter year: " << endl;
  cin >> year;
  temp_input = year;
//  json j_year = temp_input;
j_year = temp_input;
  auto temp_input_year = j_year.get<string>();

  cin.ignore();



  cout << "enter headliner: " << endl;
  getline(cin, headliner);
  temp_input = headliner;
//  json j_headliner = temp_input;
j_headliner = temp_input;
  auto temp_input_headliner = j_headliner.get<string>();


  cout << "enter opener: " << endl;
  getline(cin, opener);
  temp_input = opener;
//  json j_opener = temp_input;
j_opener = temp_input;
  auto temp_input_opener = j_opener.get<string>();


  cout << "enter cost: " << endl;
  cin >> cost;
  temp_input = cost;
//  json j_cost = temp_input;
j_cost = temp_input;
  auto temp_input_cost = j_cost.get<string>();


  cout << "enter 1 if purchased, 0 if not: " << endl;
  cin >> purchased;
  temp_input = purchased;
//  json j_purchased = temp_input;
j_purchased = temp_input;
  auto temp_input_purchased = j_purchased.get<string>();


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



/*********************************************************************
*********************************************************************/
json Show::get_j_venue()
{
  return j_venue;
}

/*********************************************************************
*********************************************************************/
json Show::get_j_time()
{
  return j_time;
}

/*********************************************************************
*********************************************************************/
json Show::get_j_day()
{
  return j_day;
}

/*********************************************************************
*********************************************************************/
json Show::get_j_month()
{
  return j_month;
}

/*********************************************************************
*********************************************************************/
json Show::get_j_year()
{
  return j_year;
}

/*********************************************************************
*********************************************************************/
json Show::get_j_headliner()
{
  return j_headliner;
}

/*********************************************************************
*********************************************************************/
json Show::get_j_opener()
{
  return j_opener;
}

/*********************************************************************
*********************************************************************/
json Show::get_j_cost()
{
  return j_cost;
}

/*********************************************************************
*********************************************************************/
json Show::get_j_purchased()
{
  return j_purchased;
}
