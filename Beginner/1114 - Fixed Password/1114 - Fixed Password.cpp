#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n;

    while (scanf("%d",&n))
    {
        if (n==2002)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
            cout << "Senha Invalida" << endl;
    }

    return 0;
}
