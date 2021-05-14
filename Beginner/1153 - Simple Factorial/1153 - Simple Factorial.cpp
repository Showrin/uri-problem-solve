#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n,f=1,i;

    cin >> n;

    for (i=n;i>0;i--)
    {
        f = f*i;
    }

    cout << f << endl;

    return 0;
}
