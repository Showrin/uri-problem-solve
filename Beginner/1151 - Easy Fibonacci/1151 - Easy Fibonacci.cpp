#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n,f1=0,f2=1,i,temp;

    cin >> n;

    if (n<=0)
        return 0;
    else if (n==1)
        cout << f1 << endl;
    else
    {
        cout << f1 << " " << f2;

        for (i=2;i<n;i++)
        {
            if (i==2)
                cout << " ";
            temp = f1+f2;
            f1 = f2;
            f2 = temp;
            cout << f2;
            if (i!=n-1)
                cout << " ";
        }
    }

    cout << endl;

    return 0;
}
