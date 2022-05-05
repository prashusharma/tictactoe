#include<iostream>
using namespace std;

char mat[3][3]= {'1','2','3','4','5','6','7','8','9'};
char player='X';
char Draw()
{
    system("CLS");
    cout << " This is a tic tac toe game " << endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
void input()
{
    int n;
    cout << "Enter the position you want to choose : " ;
    cin >> n;

    if(n==1)
    {
        mat[0][0]= player;
    }
    else if(n==2)
    {
        mat[0][1]= player;
    }
    else if(n==3)
    {
        mat[0][2]= player;
    }
    else if(n==4)
    {
        mat[1][0]= player;
    }
    else if(n==5)
    {
        mat[1][1]= player;
    }
    else if(n==6)
    {
        mat[1][2]= player;
    }
    else if(n==7)
    {
        mat[2][0]= player;
    }
    else if(n==8)
    {
        mat[2][1]= player;
    }
    else if(n==9)
    {
        mat[2][2]= player;
    }

}
void Toggleplayer()
{
    if(player=='X')
        player = '0';
    else
        player ='X';
}

char win()
{
    //player 1
    if(mat[0][0]=='X' && mat[0][1]=='X' && mat[0][2]=='X')
        return 'X';
    if(mat[1][0]=='X' && mat[1][1]=='X' && mat[1][2]=='X')
        return 'X';
    if(mat[2][0]=='X' && mat[2][1]=='X' && mat[2][2]=='X')
        return 'X';

    if(mat[0][0]=='X' && mat[1][0]=='X' && mat[2][0]=='X')
        return 'X';
    if(mat[0][1]=='X' && mat[1][1]=='X' && mat[1][2]=='X')
        return 'X';
    if(mat[2][0]=='X' && mat[2][1]=='X' && mat[2][2]=='X')
        return 'X';

    if(mat[0][0]=='X' && mat[1][1]=='X' && mat[2][2]=='X')
        return 'X';
    if(mat[0][2]=='X' && mat[1][1]=='X' && mat[2][0]=='X')
        return 'X';

    //player 2
    if(mat[0][1]=='O' && mat[0][2]=='O' && mat[0][3]=='O')
        return 'O';
    if(mat[1][1]=='O' && mat[1][2]=='O' && mat[1][3]=='O')
        return 'O';
    if(mat[2][1]=='O' && mat[2][2]=='O' && mat[2][3]=='O')
        return 'O';

    if(mat[0][0]=='O' && mat[1][0]=='O' && mat[2][0]=='O')
        return 'O';
    if(mat[0][1]=='O' && mat[1][1]=='O' && mat[1][2]=='O')
        return 'O';
    if(mat[2][0]=='O' && mat[2][1]=='O' && mat[2][2]=='O')
        return 'O';

    if(mat[0][0]=='O' && mat[1][1]=='O' && mat[2][2]=='O')
        return 'O';
    if(mat[0][2]=='O' && mat[1][1]=='O' && mat[2][0]=='O')
        return 'O';

    return '/';
}

int main()
{
    Draw();
    while(1)
    {
        input();
        Draw();
        if(win()== 'X')
            {
                cout << "Player X won ...."<< endl;
                break;
            }
        else if(win()== 'O')
            {
                cout << "Player O won ...." << endl;
                break;
            }
        Toggleplayer();

    }
    system("pause");
    return 0;
}
