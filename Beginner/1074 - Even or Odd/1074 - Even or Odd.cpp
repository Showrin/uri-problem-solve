#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,x,i;

    cin >> n;

    for (i=1;i<=n;i++)
    {
        cin >> x;

        if (x==0)
            cout << "NULL" << endl;
        else if (x%2==0)
            cout << "EVEN ";
        else
            cout << "ODD ";

        if (x<0)
            cout << "NEGATIVE" << endl;
        else if (x>0)
            cout << "POSITIVE" << endl;
    }

    return 0;
}
