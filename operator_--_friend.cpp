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

        friend Loc operator++(Loc &op); //noow  a  friend
        friend Loc operator--(Loc &op); //noow  a  friend
};

Loc operator++(Loc &op)
{
    op.longitude++;
    op.latitude++;

    return op;
}

Loc operator--(Loc &op)
{
    op.longitude--;
    op.latitude--;

    return op;
}



int main(){
    Loc ob1(10, 20), ob2;

    ob1.show();
    ++ob1;
    ob1.show();//displays  11 21

    ob2 = ++ob1;
    ob2.show();//displays 12 22

    --ob2;
    ob2.show();//displays  11 21


return 0;
}


