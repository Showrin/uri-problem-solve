#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    float salary,tax=0;

    cin >> salary;

    if (salary<=2000.00)
    {
        cout << "Isento" << endl;
        return 0;
    }

    else
    {
        salary = salary-2000;

        if (salary>1000.00)
        {
            tax = tax+(1000*0.08f);
            salary = salary-1000;

            if (salary>1500)
            {
                tax = tax+(1500*0.18f);
                salary = salary-1500;
                tax = tax+(salary*0.28);
            }

            else
                tax = tax+(salary*0.18f);
        }

        else
            tax = tax+(salary*0.08f);
    }

    printf("R$ %0.2f\n",tax);

    return 0;
}
