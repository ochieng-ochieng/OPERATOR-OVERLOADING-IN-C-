#include<iostream>
using namespace std;

class CoupleAge{
    int year_husband, year_wife;
public:
    CoupleAge()
    {
        year_husband = 0;
        year_wife = 0;
    }
    CoupleAge(int, int);
    CoupleAge operator-(CoupleAge);
    void display();
};

CoupleAge::CoupleAge(int yh, int yw)
{
    year_husband = yh;
    year_wife = yw;
}

CoupleAge  CoupleAge::operator-(CoupleAge yr)
{
    CoupleAge temp;

    temp.year_husband = year_husband - yr.year_husband;
    temp.year_wife = year_wife - yr.year_wife;

    return temp;
}

void CoupleAge::display()
{
    cout << "The husband is " << year_husband << " years old and the wife is " << year_wife << " years old.\n\n";
}

int main()
{
    CoupleAge couple1_BornYear, couple1_CurrentYear, couple1_Age;
    CoupleAge couple2_BornYear, couple2_CurrentYear, couple2_Age;

    couple1_BornYear  = CoupleAge(1990, 1996);
    couple1_CurrentYear = CoupleAge(2016, 2016);
    couple1_Age = couple1_CurrentYear - couple1_BornYear;

    couple2_BornYear  = CoupleAge(1975, 1978);
    couple2_CurrentYear = CoupleAge(2019, 2019);
    couple2_Age = couple2_CurrentYear - couple2_BornYear;

    couple1_Age.display();
    couple2_Age.display();


    return 0;
}
