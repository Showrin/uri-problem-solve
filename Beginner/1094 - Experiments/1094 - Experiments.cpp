#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,no,i,c_no=0,r_no=0,s_no=0,total=0;
    char type;

    cin >> n;

    for (i=1;i<=n;i++)
    {
        cin >> no >> type;

        total = total+no;

        if (type == 'C')
        {
            c_no = c_no+no;
        }
        else if (type == 'R')
        {
            r_no = r_no+no;
        }
        else
        {
            s_no = s_no+no;
        }
    }

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c_no);
    printf("Total de ratos: %d\n",r_no);
    printf("Total de sapos: %d\n",s_no);
    printf("Percentual de coelhos: %0.2f ",(((float)c_no/(float)total)*100));
    cout << "%" << endl;
    printf("Percentual de ratos: %0.2f ",(((float)r_no/(float)total)*100));
    cout << "%" << endl;
    printf("Percentual de sapos: %0.2f ",(((float)s_no/(float)total)*100));
    cout << "%" << endl;

    return 0;
}
