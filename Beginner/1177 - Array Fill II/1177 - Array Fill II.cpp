#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n[1000],t,i,j,c;

    cin >> t;

    for (i=0;i<1000;)
    {
        for (j=0,c=0;c<t && i<1000;c++,j++)
        {
            cout << "N[" << i << "] = " << j << endl;
            i++;
        }
    }

    return 0;
}
