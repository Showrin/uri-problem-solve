#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    char s1[20],s2[20],s3[20];
    char c1[20]="vertebrado";
    char c2[20]="ave";
    char c3[20]="onivoro";
    char c4[20]="inseto";
    char c5[20]="hematofago";

    cin >> s1 >> s2 >> s3;

    if (strcmp(c1,s1)==0)
    {
        if (strcmp(c2,s2)==0)
        {
            if (strcmp(c3,s3)==0)
                cout << "pomba" << endl;
            else
                cout << "aguia" << endl;
        }
        else
        {
            if (strcmp(c3,s3)==0)
                cout << "homem" << endl;
            else
                cout << "vaca" << endl;
        }
    }

    else
    {
        if (strcmp(c4,s2)==0)
        {
            if (strcmp(c5,s3)==0)
                cout << "pulga" << endl;
            else
                cout << "lagarta" << endl;
        }
        else
        {
            if (strcmp(c5,s3)==0)
                cout << "sanguessuga" << endl;
            else
                cout << "minhoca" << endl;
        }
    }

    return 0;
}
