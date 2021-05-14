#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int amount,note;

    cin >> amount;

    cout << amount << endl;

    note = amount/100;
    amount = amount%100;
    cout << note << " nota(s) de R$ 100,00" << endl;

    note = amount/50;
    amount = amount%50;
    cout << note << " nota(s) de R$ 50,00" << endl;

    note = amount/20;
    amount = amount%20;
    cout << note << " nota(s) de R$ 20,00" << endl;

    note = amount/10;
    amount = amount%10;
    cout << note << " nota(s) de R$ 10,00" << endl;

    note = amount/5;
    amount = amount%5;
    cout << note << " nota(s) de R$ 5,00" << endl;

    note = amount/2;
    amount = amount%2;
    cout << note << " nota(s) de R$ 2,00" << endl;

    note = amount/1;
    amount = amount%1;
    cout << note << " nota(s) de R$ 1,00" << endl;

    return 0;
}
