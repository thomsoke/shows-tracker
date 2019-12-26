#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;


int main(){
    //load the text file and put it into a single string:
    ifstream in("output_shows.txt");
    stringstream buffer;
    buffer << in.rdbuf();
    string test = buffer.str();
    cout << test << endl << endl;

    //create variables that will act as "cursors". we'll take everything between them.
    size_t pos1 = 0;
    size_t pos2;

    //create the array to store the strings.
    string str[10];

    for (int x=0; x<=10; x++)
    {
        pos2 = test.find("*", pos1); //search for the bar "|". pos2 will be where the bar was found.
        str[x] = test.substr(pos1, (pos2-pos1)); //make a substring, wich is nothing more
                                              //than a copy of a fragment of the big string.
        cout << str[x] << endl;
        cout << "pos1:" << pos1 << ", pos2:" << pos2 << endl;
        pos1 = pos2+1; // sets pos1 to the next character after pos2.
                         //so, it can start searching the next bar |.
    }

return 0;
}
