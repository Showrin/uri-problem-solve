#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    float a,b,c,det,root1,root2;

    cin >> a >> b >> c;
    det = pow(b,2)-(4*a*c);

    if (a == 0)
        cout << "Impossivel calcular" << endl;
    else
    {
        if (det < 0)
        {
            cout << "Impossivel calcular" << endl;
            return 0;
        }
        else if (det == 0)
        {
            root1 = root2 = (-b)/(2*a);
        }
        else
        {
            root1 = ((-b)+sqrt(det))/(2*a);
            root2 = ((-b)-sqrt(det))/(2*a);
        }

        printf("R1 = %0.5f\n",root1);
        printf("R2 = %0.5f\n",root2);
    }

    return 0;
}
