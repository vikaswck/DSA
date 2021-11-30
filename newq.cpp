#include <iostream>
using namespace std;
int main()
{
    float h, m, s;
    cin >> h;
    cin >> m;
     cin>>s;
    int tt = m / 5;
    if (h == 12)
        h = 0;
    if (m == 60)
    {
        m = 0;
        h += 1;
        if (h > 12)
            h = h - 12;
    }
    float hour_angle = 0.5 * (h * 60 + m);
    float minute_angle = 6 * m;

    float angle = abs(hour_angle - minute_angle);

    angle = min(360 - angle, angle);
    cout<<angle;
}