#include <bits/stdc++.h>
using namespace std;
#define PI acos(-1.0)


double erfen(double x) {
    cout<<-x<<' '<<-(sin(PI/3)/sin(27.5/180*PI))*(110 + x*tan(1.5/180*PI))*cos(1.5/180*PI)<<endl;
    return -x -(sin(PI/3)/sin(27.5/180*PI))*(110 + x*tan(1.5/180*PI))*cos(1.5/180*PI);
}

int main() {
    double l = -8000000.0;   // 设定一个合理的左边界
    double r = 10000000.0;  // 初始位置为1000
    double target;
    target = -2.0 * 1852.0;
    while (r - l > 1e-6) {
        double mid = (l + r) / 2;
        double ans = erfen(mid);

        if (ans < target) r = mid;
        else l = mid;
    }

    cout  << fixed << setprecision(6) << l<<' '<<r  << endl;
}
