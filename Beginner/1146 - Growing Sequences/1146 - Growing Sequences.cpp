#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int x,i;

    while (scanf("%d",&x) && x!=0)
    {
        for (i=1;i<=x;i++)
        {
            cout << i;
            if (i!=x)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
