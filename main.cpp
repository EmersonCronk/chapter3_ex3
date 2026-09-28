#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double rent, phones, internet, utilities, cable;

    cout << "Enter monthly rent or mortgage payment: ";
    cin >> rent;

    cout << "Enter monthly phone cost: ";
    cin >> phones;

    cout << "Enter monthly Internet cost: ";
    cin >> internet;

    cout << "Enter monthly utilities cost: ";
    cin >> utilities;

    cout << "Enter monthly cable cost: ";
    cin >> cable;

    double monthlyTotal = rent + phones + internet + utilities + cable;
    double annualTotal = monthlyTotal * 12;

    cout << fixed << setprecision(2);
    cout << "Total monthly cost: $" << monthlyTotal << endl;
    cout << "Total annual cost: $" << annualTotal << endl;

    return 0;
}