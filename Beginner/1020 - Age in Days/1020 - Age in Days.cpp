#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int amount,age;

    cin >> amount;

    age = amount/365;
    amount = amount%365;
    cout << age << " ano(s)" << endl;

    age = amount/30;
    amount = amount%30;
    cout << age << " mes(es)" << endl;

    cout << amount << " dia(s)" << endl;

    return 0;
}
