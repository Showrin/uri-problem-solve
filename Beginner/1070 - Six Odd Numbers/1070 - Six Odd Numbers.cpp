#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,i,c;

    cin >> n;

    for (i=n,c=0;c<6;i++)
    {
        if (i%2!=0)
        {
            cout << i << endl;
            c++;
        }
    }

    return 0;
}
