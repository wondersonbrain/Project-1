#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);
string toFixed (double, int);

int main() {
    double a, b, hasil;
    
    cin >> a;
    cin >> b;
    hasil = a * b / 2;
    cout << toFixed(hasil, 2) << endl;
    return 0;
}

string toFixed (double value, int digits) {
    stringstream temp;
    temp << setprecision(digits) << fixed << value;
    return temp.str();
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
