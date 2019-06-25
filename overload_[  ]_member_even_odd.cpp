/*Write a c++ program that to print the numbers
between 1 and  10 along with the indication of
whether each is even or odd in this manner :

    1 is odd
    2 is even
    3 is odd

*/
#include<cstdlib>
#include<iostream>

using namespace  std;

const int SIZE = 10;


class NumberArray{
    int numbers[SIZE];
public:
    NumberArray()
    {
        int i;
        for(i = 0; i < SIZE; i++)
        {
            numbers[i] = i + 1;
        }
    }
    int &operator[](int i)
    {
        if(i < 0 || i > (SIZE - 1))
        {
            cout << "Error! Index out of bounds." << endl;
            exit(1);
        }

        return numbers[i];
    }
};

int main()
{
   NumberArray myNumbers;

   int j;

   for(j = 0; j < SIZE; j++)
   {
       if(myNumbers[j] % 2 != 0)
            cout << myNumbers[j] << " is odd." << endl;
       else
            cout << myNumbers[j] << " is even." << endl;
   }
    cout << endl << endl;

    for(j = 0; j < SIZE; j++)
   {
       if(myNumbers.operator[](j) % 2 != 0)
            cout << myNumbers.operator[](j) << " is odd." << endl;
       else
            cout << myNumbers.operator[](j) << " is even." << endl;
   }

    return 0;
}
