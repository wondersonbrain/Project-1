#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int n, a;
    
    cin >> n;
    a = 0;
    if (n > a) {
        cout << "positif" << endl;
    } else {
        if (n == 0) {
            cout << "Nol" << endl;
        } else {
            if (n < 0) {
                cout << "negatif" << endl;
            }
        }
    }
    return 0;
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
