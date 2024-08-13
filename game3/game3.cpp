#include "game3.h"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;

Chess::Chess() {
    for (int i = 0; i < 3; i++)
    {
        for (int j=0;j<3;j++)
            board[i][j]= false;
    }
    column=row=0;
}

void Chess::print_board() const {
    cout<<"   1     2     3  \n"
        <<"1  O  |  O  |  O  \n"
        <<" —————+—————+—————\n"
        <<"2  O  |  O  |  O  \n"
        <<" —————+—————+—————\n"
        <<"3  O  |  O  |  O  \n";
}




