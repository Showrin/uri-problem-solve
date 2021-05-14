#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int o[5],e[5],c=0,i=0,x[15],j;

    for (j=0;j<15;j++)
        cin >> x[j];

    for (j=0;j<15;j++)
    {
        if (x[j]%2==0)
        {
            e[i]=x[j];
            i++;
        }
        else
        {
            o[c]=x[j];
            c++;
        }

        if (c==5)
        {
            for (c=0;c<5;c++)
                printf("impar[%d] = %d\n",c,o[c]);

            c=0;
        }
        else if (i==5)
        {
            for (i=0;i<5;i++)
                printf("par[%d] = %d\n",i,e[i]);

            i=0;
        }
    }

    for (j=0;j<c;j++)
        printf("impar[%d] = %d\n",j,o[j]);

    for (j=0;j<i;j++)
        printf("par[%d] = %d\n",j,e[j]);

    return 0;
}
