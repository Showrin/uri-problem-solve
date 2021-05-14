#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,maxm;

    cin >> a >> b >> c;
    maxm = (a+b+abs(a-b))*0.5f;
    maxm = (maxm+c+abs(maxm-c))*0.5f;

    cout << maxm << " eh o maior" << endl;

    return 0;
}
