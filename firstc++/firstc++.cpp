#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main()
{
    const double tv_price = 1400.00;
    const double dvd_price = 220.00;
    const double remote_price = 35.20;
    const double sales_rate = 0.0825;

    int amounttv, amountdvd, amountremotes;
    cout << "Enter the amount of tvs: ";
    cin >> amounttv;
    cout << "Enter the amount of dvds: ";
    cin >> amountdvd;
    cout << "Enter the amount of remotes: ";
    cin >> amountremotes;

    double costtv = amounttv * tv_price;
    double costdvd = amountdvd * dvd_price;
    double costremote = amountremotes * remote_price;

    double subtotal = costtv + costdvd + costremote;
    double salestax = subtotal * sales_rate;
    double totalcost = subtotal + salestax;

    return 0;
}

