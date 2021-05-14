#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int x,y,i,c;

    cin >> x >> y;

    for (i=1;i<=y;)
    {
        for (c=1;c<=x && i<=y;c++)
        {
            cout << i ;
            i++;
            if (i<=y && c!=x)
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
