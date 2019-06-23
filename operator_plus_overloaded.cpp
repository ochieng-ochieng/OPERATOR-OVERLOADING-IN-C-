#include<iostream>
using namespace std;

class Loc{
        int longitude, latitude;
    public:
       Loc(){}
       Loc(int lg, int lt){

            longitude = lg;
            latitude = lt;
       }
       void show(){
            cout << longitude << "  ";
            cout << latitude  << "\n";
       }
       Loc operator+(Loc op2);
       Loc operator-(Loc op2);
       Loc operator=(Loc op2);
       Loc operator++();

};

Loc Loc::operator+(Loc op2)
{
   Loc temp;

   temp.longitude = op2.longitude + longitude;
   temp.latitude  = op2.latitude  + latitude;

   return  temp;
}

Loc Loc::operator-(Loc op2)
{
   Loc temp;

   temp.longitude = longitude - op2.longitude;
   temp.latitude  = latitude - op2.latitude;

   return  temp;
}

Loc Loc::operator=(Loc op2)
{
    longitude = op2.longitude;
    latitude  = op2.latitude;

   return  *this; //return object  that generated  the call
}

Loc Loc::operator++()
{
   longitude++;
   latitude++;

   return  *this;
}

int main()
{
    Loc ob1(10, 20), ob2(5, 30), ob3(90, 90);

    ob1.show();//displays 10 20
    ob2.show();//displays 5, 30

    ++ob1;
    ob1.show();//displays  11 21

    ob2 = ++ob1;
    ob1.show();//displays 12 22
    ob2.show();//displays 12 22

    ob1 = ob2 = ob3;
    ob1.show();//displays  90  90
    ob2.show();//displays 90  90



 return 0;
}

