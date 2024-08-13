#include<iostream>
#include <cstdlib>
int main()
{
    using std::cout,std::cin;
    int times=0;
    srand(time(0));
    int win=rand()%100+1;
    int user;
    do {
        cout<<"Please guess the number:";
        cin>>user;
        if (user<win)
            cout<<"The number you guessed is smaller than PC.\n";
        else if (user>win)
            cout<<"The number you guessed is bigger than PC.\n";
        times++;
    }while (user!=win);
    cout<<"\nCongratulations! You spend "<<times<<" times in total.\n\n"
                                                "Bye.\n";
    return 0;
}