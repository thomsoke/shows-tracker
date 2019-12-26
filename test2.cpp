#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>


using namespace std;

int main ()
{
  ifstream file("output_shows.txt");
  string str;
  while (getline(file, str))
  {
    cout << str << "\n";

/*
    for (int i; i < str.length(); i++)
    {
      cout << "for loop" << endl;
      do
      {
        cout << "do loop" << endl;
        for(string::size_type i = 0 ; i < str.size(); i++)
        {
          cout << "for loop 2" << endl;
            string temp = str;
            temp.erase(i, 1);

            cout << temp << endl;

          //  str = temp;
            cout << "string at end of delete loop: " << str << endl;
        }


      } while (str[i] != ' ' );
    }
*/

  }





return 0;
}
