#include <iostream>
#include<conio.h>

using namespace std;

int add();
int sub();
int multiply();
int div();

int main()
{
    int choice;
    cout<<"CALCULATOR";
    cout<<"\n1.ADD 2.SUBTRACT 3.MULTIPLY 4.DIVIDE\n";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<"ans:"<<add(); break;
        case 2:cout<<"ans:"<<sub(); break;
        case 3:cout<<"ans:"<<multiply(); break;
        case 4:cout<<"ans:"<<div(); break;
        default:{cout<<"invalid choice\n"; getch();}
    }
    return 0;
}
