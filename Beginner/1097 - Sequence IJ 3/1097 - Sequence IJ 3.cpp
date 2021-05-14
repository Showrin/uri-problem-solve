#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int i,j=2,c;

    for (i=1;i<=9;i+=2)
    {
        j+=5;
        for (c=1;c<=3;c++,j--)
        {
            cout << "I=" << i << " J=" << j << endl;
        }
    }

    return 0;
}
