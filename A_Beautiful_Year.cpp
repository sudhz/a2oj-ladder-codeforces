//try this problem with stringtoint()
#include <iostream>
using namespace std;
int main()
{
    int year,dig1,dig2,dig3,dig4;
    cin>>year;
    for (int i = year+1; i <= 9999; i++)
    {
        dig4 = (i)%10;
        dig3 = (i/10)%10;
        dig2 = (i/100)%10;
        dig1 = (i/1000)%10;

        if (dig1!=dig2 && dig1!=dig3 && dig1!=dig4 && dig2!=dig3 && dig2!=dig4 && dig3!=dig4)
        {
            cout << i;
            break;
        }
    }
    return 0;
}