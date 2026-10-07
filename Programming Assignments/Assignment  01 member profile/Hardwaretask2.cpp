//lines 3 and 4 allow us to use cin,cout and the string data type

#include <iostream>
#include <string>
using namespace std;  

int main() {
//we're declaring variables where by float is used for decimal values and string is for text
    string name;
    float voltage;
    float resistance;
    float current;
    float power;


//cout is used to display values on the computer cin is used to take in values from the user
    cout << "Enter your name here: ";
    cin >> name;

    cout << "Enter a value for voltage : ";
    cin >> voltage;

    cout << "Enter a value for resistance : ";
    cin >> resistance;

//equations for current and power
    current = voltage / resistance;

    power = voltage * current;

    cout << "\nWelcomeeee " << name << endl;
    cout << "Current: " << current << " A" << endl;
    cout << "Power: " << power << " W" << endl;

    return 0;
}

