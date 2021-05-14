#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    float base_salary, final_salary;

    cin >> base_salary;

    if (base_salary>=0 && base_salary<=400.00)
    {
        final_salary = base_salary+(base_salary*0.15);
        printf("Novo salario: %0.2f\n",final_salary);
        printf("Reajuste ganho: %0.2f\n",(final_salary-base_salary));
        cout << "Em percentual: 15 %" << endl;
    }

    else if (base_salary>=400.01 && base_salary<=800.00)
    {
        final_salary = base_salary+(base_salary*0.12);
        printf("Novo salario: %0.2f\n",final_salary);
        printf("Reajuste ganho: %0.2f\n",(final_salary-base_salary));
        cout << "Em percentual: 12 %" << endl;
    }

    else if (base_salary>=800.01 && base_salary<=1200.00)
    {
        final_salary = base_salary+(base_salary*0.10);
        printf("Novo salario: %0.2f\n",final_salary);
        printf("Reajuste ganho: %0.2f\n",(final_salary-base_salary));
        cout << "Em percentual: 10 %" << endl;
    }

    else if (base_salary>=1200.01 && base_salary<=2000.00)
    {
        final_salary = base_salary+(base_salary*0.07);
        printf("Novo salario: %0.2f\n",final_salary);
        printf("Reajuste ganho: %0.2f\n",(final_salary-base_salary));
        cout << "Em percentual: 7 %" << endl;
    }

    else
    {
        final_salary = base_salary+(base_salary*0.04);
        printf("Novo salario: %0.2f\n",final_salary);
        printf("Reajuste ganho: %0.2f\n",(final_salary-base_salary));
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
