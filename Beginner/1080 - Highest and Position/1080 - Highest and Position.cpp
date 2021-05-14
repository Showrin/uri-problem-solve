#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,i,position=0,maxm=0;

    for (i=1;i<=100;i++)
    {
        cin >> n;

        if (n>maxm)
        {
            maxm = n;
            position = i;
        }
    }

    cout << maxm << endl;
    cout << position << endl;

    return 0;
}
