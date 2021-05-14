#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float n1,n2,n3,n4,pre_avg,avg;

    cin >> n1 >> n2 >> n3 >> n4;
    avg = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    pre_avg = avg;

    printf("Media: %0.1f\n",avg);

    if (avg>=7.0)
        cout << "Aluno aprovado." << endl;
    else if (avg<5.0)
        cout << "Aluno reprovado." << endl;
    else
    {
        cout << "Aluno em exame." << endl;

        cin >> avg;
        printf("Nota do exame: %0.1f\n",avg);

        if (avg>=5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;

        avg = (pre_avg+avg)/2;

        printf("Media final: %0.1f\n",avg);
    }


    return 0;
}
