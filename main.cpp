#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
    if(argc > 1) {
        string retstring = "6a4c";
        ostringstream hexdata;
        string userinput = argv[1];
        if(userinput.size() > 255) {
            cout << "Size of return too large for op 4c." << endl;
            return 0;
        }
        hexdata << hex << setfill('0') << setw(2) << nouppercase << userinput.size();
        for (string::size_type i = 0; i < userinput.length(); ++i)
                hexdata << hex << setfill('0') << setw(2) << nouppercase << (unsigned)userinput[i];
        retstring += hexdata.str();
        cout << "Script: " << retstring << endl;
    } else {
        cout << "You didn't enter the script data." << endl;
    }
    return 0;
}
