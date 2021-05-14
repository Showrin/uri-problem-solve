#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int x,y;

    while (scanf("%d",&x) && scanf("%d",&y) && x!=0 && y!=0)
    {
        if (x>0 && y>0)
            cout << "primeiro" << endl;
        else if (x>0 && y<0)
            cout << "quarto" << endl;
        else if (x<0 && y<0)
            cout << "terceiro" << endl;
        else
            cout << "segundo" << endl;
    }

    return 0;
}
