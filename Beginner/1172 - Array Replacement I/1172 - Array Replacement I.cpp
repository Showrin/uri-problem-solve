#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int x[10],i;

    for (i=0;i<=9;i++)
    {
        cin >> x[i];

        if (x[i]<=0)
            cout << "X[" << i << "] = 1" << endl;
        else
            cout << "X[" << i << "] = " << x[i] << endl;
    }

    return 0;
}
