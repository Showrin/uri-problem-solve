#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int m,n;

    while (scanf("%d",&m) && scanf("%d",&n) && m!=n)
    {
        if (m>n)
            cout << "Decrescente" << endl;
        else
            cout << "Crescente" << endl;
    }

    return 0;
}
