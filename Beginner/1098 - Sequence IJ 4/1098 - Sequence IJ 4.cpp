#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    float i,j;

    for (i=0;i<2.1f;i+=0.2)
    {
        for (j=1;j<=3;j++)
        {
            cout << "I=" << i << " J=" << (j+i) << endl;
        }
    }

    return 0;
}
