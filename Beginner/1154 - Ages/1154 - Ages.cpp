#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int n=0,sum=0,i;

    for (i=0;n>=0;)
    {
        cin >> n;
        if (n>=0)
        {
            i++;
            sum = sum+n;
        }
    }

    printf("%0.2f\n",((float)sum/(float)i));

    return 0;
}
