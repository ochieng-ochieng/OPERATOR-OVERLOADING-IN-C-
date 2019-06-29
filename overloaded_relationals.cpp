#include<iostream>
using namespace std;

class Distance{
    int feet, inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    bool operator==(Distance);
    bool operator>(Distance);
    bool operator<(Distance);
    Distance operator=(Distance);
    Distance operator-(Distance);
    void display();
};

Distance Distance::operator=(Distance param2)
{
    this->feet = param2.feet;
    this->inches = param2.inches;

    return *this;
}

void Distance::display()
{
    cout << "Feet: " << feet << " Inches :  " << inches << "\n";
}

Distance Distance::operator-(Distance param2)
{
    this->feet = -feet;
    this->inches = -inches;

    return Distance(feet, inches); //Is similar to *this
}

bool Distance::operator > (Distance param2)
{
    if((feet  > param2.feet)&&(inches > param2.inches))
        return true;

    return false;
}

bool Distance::operator < (Distance param2)
{
    if((feet  < param2.feet)&&(inches < param2.inches))
        return true;

    return false;
}

bool Distance::operator == (Distance param2)
{
    if((feet  == param2.feet)&&(inches == param2.inches))
        return true;

    return false;
}

int main()
{
    Distance D1(11, 10), D2(5, 11);

    cout << "First distance: ";
    D1.display();

    cout << "Second distance: ";
    D2.display();

    //Applying assignment
    D1 = D2;
    cout << "First distance : ";
    D1.display();

    //Applying relation <
    D1 = Distance(15, 20);
    D2 = Distance(5, 10);
    if(D1 < D2)
        cout << "D1 is less than D2.\n";
    else
        cout <<  "D2 is less than D1.\n" << endl;

    //Applying relation >
    D1 = Distance(15, 20);
    D2 = Distance(5, 10);
    if(D1 > D2)
        cout << "D1 is greater than D2.\n";
    else
        cout << "D2 is greater than D1.\n" << endl;

    //Applying relation >
    D1 = Distance(8, 8);
    D2 = Distance(8, 8);
    if(D1 == D2)
        cout << "D1 is equal to D2.\n";
    else
        cout << "D2 is not equal to D1.\n" << endl;




    return 0;
}
