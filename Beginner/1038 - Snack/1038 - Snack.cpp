#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float prdct[5][2]={1,4.00,2,4.50,3,5.00,4,2.00,5,1.50},value;
    int i,j,id,qnt;

    cin >> id >> qnt;

    for (i=0;i<5;i++)
    {
        if (id==prdct[i][0])
            value = qnt*prdct[i][1];
    }

    printf("Total: R$ %0.2f\n",value);

    return 0;
}
