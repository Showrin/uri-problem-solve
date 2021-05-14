#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int c=0;
    float x,y,n;

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

        if (c==2)
            printf("media = %0.2f\n",(x+y)/2);
    }

    return 0;
}
