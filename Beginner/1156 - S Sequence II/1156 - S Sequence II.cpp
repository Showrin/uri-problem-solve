#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    float s=0,i,c;

    for (i=1,c=1;i<=39;i+=2,c*=2)
    {
        s = s+(i/c);
    }

    printf("%0.2f\n",s);

    return 0;
}
