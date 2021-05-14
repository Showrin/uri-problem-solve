#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int x,alc=0,gsln=0,dsl=0;

    do
    {
        cin >> x;
        if (x==1)
            alc++;
        else if (x==2)
            gsln++;
        else if (x==3)
            dsl++;

    }while (x!=4);

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gsln << endl;
    cout << "Diesel: " << dsl << endl;

    return 0;
}
