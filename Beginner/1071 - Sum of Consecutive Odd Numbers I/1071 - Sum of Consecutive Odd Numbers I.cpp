#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int x,y,i,sum=0;

    cin >> x >> y;

    if (x>y)
        swap(x,y);

    for (i=x+1;i<y;i++)
    {
        if (i%2!=0)
        {
            sum = sum+i;
        }
    }

    cout << sum << endl;

    return 0;
}
