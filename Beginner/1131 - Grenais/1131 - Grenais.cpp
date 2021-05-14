#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    int c=0,i,intr=0,grem=0,draw=0;
    int x,y,n;

    do
    {
        i=1;

        cin >> x >> y;
        c++;

        if (x>y)
            intr++;
        else if (x<y)
            grem++;
        else
            draw++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> i;

    }while(i==1);

    cout << c << " grenais" << endl;
    cout << "Inter:" << intr << endl;
    cout << "Gremio:" << grem << endl;
    cout << "Empates:" << draw << endl;

    if (intr > grem)
        cout << "Inter venceu mais" << endl;
    else if (intr < grem)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;

    return 0;
}
