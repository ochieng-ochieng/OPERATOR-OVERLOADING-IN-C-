
#include<iostream>
using namespace std;

#define SIZE 100

class Stack{
        int stck[SIZE];
        int tos;

    public:
        void init();
        void push(int i);
        int pop();

        //hence [ ] can be used on both left and right side
        //of an assignment statement.
        int &operator[](int i)
        {
            if(i < 0 || i > 99)
            {
                cout << "Boundary error\n";
                //exit(1);
            }
            return stck[i];
        }

};

void  Stack::init()
{
    tos = 0;
}

void Stack::push(int i)
{
    if(tos == SIZE){
        cout << "Stack is full.\n";
        return;
    }
    stck[tos] = i;
    tos++;
}

int Stack::pop()
{
    if(tos == 0){
        cout << "Stack underflow.\n";
        return 0;
    }
    tos--;
    return stck[tos];
}

int main(){

    Stack stack1, stack2;  //create two stack objects

    stack1.init();
    stack2.init();

    stack1.push(1);
    stack2.push(2);

    stack1.push(3);
    stack2.push(4);

    stack1[2] = 8;
    stack2[2] = 11;

    stack2[100] = 11;//will generate a runtime error

    cout << stack1.pop() << " ";
    cout << stack1.pop() << " ";
    cout << stack2.pop() << " ";
    cout << stack2.pop() << "\n\n";

    cout << "stack1_object : " << stack1[0] << "  " << stack1[1] << " " << stack1[2] <<endl;
    cout << "stack2_object : " << stack2[0] << "  " << stack2[1] << " " << stack2[2] <<endl;



return 0;
}



