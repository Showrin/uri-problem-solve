#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    string temp;
    int d1,d2,h1,h2,m1,m2,s1,s2,i,j,temp_t,t1,t2,time,d,h,m,s;

    cin >> temp >> d1;
    cin >> h1 >> temp >> m1 >> temp >> s1;
    cin >> temp >> d2;
    cin >> h2 >> temp >> m2 >> temp >> s2;

    t1 = (h1*3600)+(m1*60)+s1;
    t2 = (h2*3600)+(m2*60)+s2;

    if (d2==d1)
    {
        if (t2>=t1)
            time = t2-t1;
        else
            {
                time = ((t2+(24*3600)-t1));

                d=-1;
                temp_t = time%(24*3600);
                h = temp_t/3600;
                temp_t = temp_t%3600;
                m = temp_t/60;
                s = temp_t%60;

                cout << d << " dia(s)" << endl;
                cout << h << " hora(s)" << endl;
                cout << m << " minuto(s)" << endl;
                cout << s << " segundo(s)" << endl;

                return 0;
            }

    }
    else
    {
        time = (d2-d1-1)*24*3600;
        time = time+((24*3600)-t1)+t2;
    }

    d = time/(24*3600);
    temp_t = time%(24*3600);
    h = temp_t/3600;
    temp_t = temp_t%3600;
    m = temp_t/60;
    s = temp_t%60;

    cout << d << " dia(s)" << endl;
    cout << h << " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s << " segundo(s)" << endl;

    return 0;
}
