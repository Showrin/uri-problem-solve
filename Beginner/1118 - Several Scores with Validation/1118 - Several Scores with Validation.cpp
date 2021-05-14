#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int c=0,i=0;
    double x,y,n;

    do
    {
        i=0;
        c=0;
        while (c!=2)
        {
            cin >> n;

            if (n>=0 && n<=10)
            {
                if (c==0)
                {
                    x=n;
                    c++;
                }
                else
                {
                    y=n;
                    c++;
                }
            }
            else
                cout << "nota invalida" << endl;
        }

        if (c==2)
        {
            printf("media = %0.2lf\n",(x+y)/2);
        }

        while (i!=1 && i!=2)
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> i;
        }

    }while(i!=2);

    return 0;
}
