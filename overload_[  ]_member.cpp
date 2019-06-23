#include<iostream>
using namespace std;

class Loc{
        int a[3];

    public:
        Loc(int i, int j, int k)
        {
            a[0] = i;
            a[1] = j;
            a[2] = k;
        }
        int operator[](int i)
        {
            return a[i];
        }

};

int main()
{
    Loc ob(5, 8, 12);

    cout << ob[0] ;
    cout << endl;
    cout << ob[1] ;
    cout << endl;
    cout <<  ob.operator[](2);

 return 0;
}
