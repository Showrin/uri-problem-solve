#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    float s=0,i;

    for (i=1;i<=100;i++)
    {
        s = s+(1/i);
    }

    printf("%0.2f\n",s);

    return 0;
}
