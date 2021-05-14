#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,i;

    cin >> n;

    for (i=1;i<=10;i++)
    {
        cout << i << " x " << n << " = " << i*n << endl;
    }

    return 0;
}
