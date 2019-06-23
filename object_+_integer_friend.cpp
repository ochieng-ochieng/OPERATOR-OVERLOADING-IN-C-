#include<iostream>
using namespace std;

class Loc{
        int longitude, latitude;
    public:
        Loc()
        {
            longitude = 0;
            latitude  = 0;
        }
        Loc(int lg, int lt){
            longitude = lg;
            latitude  = lt;
        }
        void show(){
            cout << longitude << "  ";
            cout << latitude  << "\n";
        }
        friend Loc operator+(Loc op1, int op2);
        friend Loc operator+(int op1, Loc op2);


};

Loc operator+(Loc op1, int op2)
{
    Loc temp;

    temp.longitude = op1.longitude + op2;
    temp.latitude  = op1.latitude  + op2;

    return temp;
}

Loc operator+(int op1, Loc op2)
{
    Loc temp;

    temp.longitude = op1  + op2.longitude;
    temp.latitude  = op1  + op2.latitude;

    return temp;
}

int main(){
    Loc ob1(10, 20), ob2(5, 30), ob3(7, 14);

    ob1.show();

    ob2.show();
    ob3.show();

    ob1 = ob2 + 10; // both of these
    ob3 = 10 + ob2; // are valid

    ob1.show();
    ob3.show();

return 0;
}

