#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,i;

    cin >> n;

    for (i=2;i<=n;i++)
    {
        if (i%2==0)
            cout << i << "^2 = " << i*i << endl;
    }

    return 0;
}
