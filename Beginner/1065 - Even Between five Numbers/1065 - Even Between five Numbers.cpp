#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int a[6];
    int i,c;

    for (i=0,c=0;i<5;i++)
    {
        cin >> a[i];

        if (a[i]%2==0)
        {
            c++;
        }
    }

    cout << c << " valores pares" << endl;

    return 0;
}
