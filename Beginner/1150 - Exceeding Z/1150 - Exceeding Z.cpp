#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int x,z,sum=0,c,i;

    cin >> x;

    while (scanf("%d",&z) && z<=x)
    {

    }

    for (i=x,c=0;sum<=z;i++,c++)
    {
        sum = sum+i;
    }

    cout << c << endl;

    return 0;
}
