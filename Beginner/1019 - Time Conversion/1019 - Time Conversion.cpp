#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int amount,temp,h,m,s;

    cin >> amount;
    h = amount/3600;
    temp = amount%3600;
    m = temp/60;
    s = temp%60;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}
