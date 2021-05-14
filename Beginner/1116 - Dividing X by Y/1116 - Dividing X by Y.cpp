#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int x,y,n,i=1;

    cin >> n;

    while (i<=n)
    {
        cin >> x >> y;

        if (y==0)
            cout << "divisao impossivel" << endl;
        else
            printf("%0.1f\n",(float)x/(float)y);

        i++;
    }

    return 0;
}
