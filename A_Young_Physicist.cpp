#include <iostream>
using namespace std;

int main()
{
    int t,x,y,z,fx(0),fy(0),fz(0);
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        fx+=x; fy+=y; fz+=z;
    }
    if ((fx==0) && (fy==0) && (fz==0)) cout << "YES";
    else cout << "NO";
    return 0;
}