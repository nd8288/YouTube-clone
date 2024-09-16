#include <iostream>
using namespace std;

int main() {
    const double compensationRate = 0.115;
    double previousAnnualSalary, newAnnualSalary, oldMonthlySalary, newMonthlySalary, compensationPay;

    cout << "Enter employee's previous annual salary: ";
    cin >> previousAnnualSalary;

    compensationPay = previousAnnualSalary * compensationRate;
    newAnnualSalary = previousAnnualSalary + compensationPay;
    oldMonthlySalary = previousAnnualSalary / 12.0;
    newMonthlySalary = newAnnualSalary / 12.0;

    cout << "\nNew annual salary: " << newAnnualSalary;
    cout << "\nNew monthly salary: " << newMonthlySalary;
    cout << "\nOld monthly salary: " << oldMonthlySalary;
    cout << "\nCompensation pay received: " << compensationPay;

    return 0;
}