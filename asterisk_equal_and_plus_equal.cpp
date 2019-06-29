#include<iostream>
using namespace std;

class ShortHand{
    int number;
public:
    void set_v(int num)
    {
        number = num;
    }
    ShortHand operator*=(ShortHand);
    ShortHand operator+=(ShortHand);
    void display();
};

//Format : return type , classname::funcname(){}

ShortHand ShortHand::operator*=(ShortHand param2)
{
    this->number = this->number * param2.number;

    return *this; //return object that generated the call
}

ShortHand ShortHand::operator+=(ShortHand param2)
{
    this->number = this->number + param2.number;

    return *this; //return object that generated the call
}

void ShortHand::display()
{
    cout << "The number is : " << this->number << endl;
}

int main()
{
    ShortHand ob1, ob2;

    ob1.set_v(26);
    ob1.display();

    ob2.set_v(2);
    ob2.display();

    ob1 += ob2;
    ob1.display(); //28

    ob1 *= ob2;
    ob1.display();//56

    return 0;
}
