#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    int note,coin,i_amount,f_amount,i,j,k;
    char amount_str[20],int_str[10],float_str[20];

    cin >> amount_str;

    for (i=0,j=0;amount_str[i]!='\0';i++,j++)
    {
        if (amount_str[i] == '.')
        {
            i++;
            for (k=0;amount_str[i]!='\0';i++,k++)
            {
                float_str[k] = amount_str[i];
            }
        }
        else
            int_str[j] = amount_str[i];
    }

    i_amount = atoi(int_str);
    f_amount = atoi(float_str);

    cout << "NOTAS:" << endl;

    note = i_amount/100;
    i_amount = i_amount%100;
    cout << note << " nota(s) de R$ 100.00" << endl;

    note = i_amount/50;
    i_amount = i_amount%50;
    cout << note << " nota(s) de R$ 50.00" << endl;

    note = i_amount/20;
    i_amount = i_amount%20;
    cout << note << " nota(s) de R$ 20.00" << endl;

    note = i_amount/10;
    i_amount = i_amount%10;
    cout << note << " nota(s) de R$ 10.00" << endl;

    note = i_amount/5;
    i_amount = i_amount%5;
    cout << note << " nota(s) de R$ 5.00" << endl;

    note = i_amount/2;
    i_amount = i_amount%2;
    cout << note << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;

    note = i_amount/1;
    i_amount = i_amount%1;
    cout << note << " moeda(s) de R$ 1.00" << endl;

    coin = f_amount/50;
    f_amount = f_amount%50;
    cout << coin << " moeda(s) de R$ 0.50" << endl;

    coin = f_amount/25;
    f_amount = f_amount%25;
    cout << coin << " moeda(s) de R$ 0.25" << endl;

    coin = f_amount/10;
    f_amount = f_amount%10;
    cout << coin << " moeda(s) de R$ 0.10" << endl;

    coin = f_amount/5;
    f_amount = f_amount%5;
    cout << coin << " moeda(s) de R$ 0.05" << endl;

    coin = f_amount/1;
    f_amount = f_amount%1;
    cout << coin << " moeda(s) de R$ 0.01" << endl;

    return 0;
}
