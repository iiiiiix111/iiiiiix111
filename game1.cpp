#include<iostream>
#include <cstdlib>
using std::cin;
using std::cout;
int main()
{

    int s=1,h=2,b=3;//1代表剪刀，2代表石头，3代表布
    int user,win;
    int flag=1;
    while (flag==1)
    {
        cout<<"Please enter number 1(jiandao),2(shitou),3(bu)\n";
        cin>>user;
        srand(time(0));
        win=rand()%3+1;
        switch (win-user) {
            case 1:cout<<"At this point, user wins.\n";break;
            case -1:cout<<"At this point, PC wins.\n";break;
            case 2:cout<<"At this point, user wins.\n";break;
            case -2:cout<<"At this point, PC wins.\n";break;
            case 0:cout<<"The game ends in a tie.\n";
        }
        cout<<"Please enter the number on the left of option\n\n"
            <<"      1.continue      2.Pause\n";
        cin>>flag;
    }
    cout<<"Bye.\n";
    return 0;

}