#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    cout << "a. Left-justify the number 0.123456 in an output field with a width of 15:" << endl;
    cout << left << setw(15) << setfill(' ') << 0.123456 << endl;

    
    cout << "b. Output the number 23.987 as a fixed point number rounded to two decimal places, right-justifying the output in a field with a width of 12:" << endl;
    cout << right << setw(12) << fixed << setprecision(2) << 23.987 << endl;

     
    cout << "c. Output the number –123.456 as an exponential and with four decimal spaces:" << endl;
    cout << scientific << setprecision(4) << setw(10) << -123.456 << endl;

    return 0;
}