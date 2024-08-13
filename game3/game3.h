
#ifndef MYPROJECT_GAME3_H
#define MYPROJECT_GAME3_H
class Chess
{
private:
    bool board[3][3];
    int column;
    int row;
public:
    Chess();
    void tip()const;
    void print_board()const;
    void input();
    void check_win()const;
};
#endif //MYPROJECT_GAME3_H
