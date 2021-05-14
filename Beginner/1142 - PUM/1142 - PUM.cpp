#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n,i,c,x;

    cin >> n;

    for (i=1,x=1;i<=n;i++)
    {
        for (c=1;c<=4;c++)
        {
            if (c==4)
            {
                cout << "PUM" << endl;
                x++;
            }
            else
            {
                cout << x << " ";
                x++;
            }
        }
    }

    return 0;
}
