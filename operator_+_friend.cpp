#include<iostream>
using namespace std;

class Loc{
       int longitude, latitude;

    public:
        Loc(){}//needed  to  construct  temporaries
        Loc(int lg, int lt){
            longitude = lg;
            latitude = lt;
        }
        void show(){
            cout << longitude << "  ";
            cout << latitude  << "\n";
        }

        friend Loc operator+(Loc op1, Loc op2); //noow  a  friend
        friend Loc operator-(Loc op1, Loc op2); //noow  a  friend
};

Loc operator+(Loc op1, Loc op2)
{
    Loc temp ;

    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude  = op1.latitude  + op2.latitude;

    return temp;
}

Loc operator-(Loc op1, Loc op2)
{
    Loc temp ;

    temp.longitude = op1.longitude - op2.longitude;
    temp.latitude  = op1.latitude  - op2.latitude;

    return temp;
}

int main(){
    Loc ob1(10, 20), ob2(5, 30);
    Loc ob4(100, 30), ob5(70, 5);

    ob1 = ob1 + ob2;
    ob1.show();

    ob4 = ob4 - ob5;
    ob4.show();


return 0;
}

