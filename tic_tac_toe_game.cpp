#include<iostream>
using namespace std;



void printMatrix(char a[3][3])
{
    cout << "\n\t\t     |     |     ";
    cout << "\n\t\t  "<< a[0][0] << "  |  " << a[0][1] << "  |  " << a[0][2] << "  ";
    cout << "\n\t\t_____|_____|_____";
    cout << "\n\t\t     |     |     ";
    cout << "\n\t\t  "<< a[1][0] << "  |  " << a[1][1] << "  |  " << a[1][2] << "  ";
    cout << "\n\t\t_____|_____|_____";
    cout << "\n\t\t     |     |     ";
    cout << "\n\t\t  "<< a[2][0] << "  |  " << a[2][1] << "  |  " << a[2][2] << "  ";
    cout << "\n\t\t     |     |     ";

}


int check_win(char a[3][3])
{
    if(((a[0][0] == a[0][1]) && (a[0][0] == a[0][2]))||((a[1][0] == a[1][1]) && (a[1][0] == a[1][2]))||((a[2][0] == a[2][1]) && (a[2][0] == a[2][2])))
    {
        return 1;
    }
    else if(((a[0][0] == a[1][0]) && (a[0][0] == a[2][0]))||((a[0][1] == a[1][1]) && (a[0][1] == a[2][1]))||((a[0][2] == a[1][2]) && (a[0][2] == a[2][2])))
    {
        return 1;
    }
    else if(((a[0][0] == a[1][1]) && (a[0][0] == a[2][2]))||((a[0][2] == a[1][1]) && (a[0][2] == a[2][0])))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Player_1(char a[3][3])
{
    int choice;
    cout << "\n\tPlayer 1[X] Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        a[0][0] = 'X';
        break;

    case 2:
        a[0][1] = 'X';
        break;

    case 3:
        a[0][2] = 'X';
        break;

    case 4:
        a[1][0] = 'X';
        break;

    case 5:
        a[1][1] = 'X';
        break;

    case 6:
        a[1][2] = 'X';
        break;

    case 7:
        a[2][0] = 'X';
        break;

    case 8:
        a[2][1] = 'X';
        break;

    case 9:
        a[2][2] = 'X';
        break;

    default: cout << "Invalid input please plz try again!";// code to be executed if n doesn't match any cases
    }

    ///check_win(a);
    printMatrix(a);

}

void Player_2(char a[3][3])
{
    int choice;
    cout << "\n\tPlayer 2[O] Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        a[0][0] = 'O';
        break;

    case 2:
        a[0][1] = 'O';
        break;

    case 3:
        a[0][2] = 'O';
        break;

    case 4:
        a[1][0] = 'O';
        break;

    case 5:
        a[1][1] = 'O';
        break;

    case 6:
        a[1][2] = 'O';
        break;

    case 7:
        a[2][0] = 'O';
        break;

    case 8:
        a[2][1] = 'O';
        break;

    case 9:
        a[2][2] = 'O';
        break;

    default: cout << "Invalid input please plz try again!";// code to be executed if n doesn't match any cases
    }
    ///check_win(a);
    printMatrix(a);
}

void Play(char a[3][3])
{
    int n;
    while(1)
    {
        Player_1(a);
        if(check_win(a))
        {
            cout << "\nPlayer 1 wins";
            cout << "\nPress any key to exit the game :  ";
            cin >> n;
            return;
        }
        Player_2(a);
        if(check_win(a))
        {
            cout << "\nPlayer 2 wins";
            cout << "\nPress any key to exit the game :  ";
            cin >> n;
            return;
        }
    }


}

int main()
{
    cout << "****************************************************************\n";
    int choice;
    cout << "\tT i c   T a c   T o e   G a m e";
    cout << "\n\t   Player 1 => X";
    cout << "\n\t   Player 2 => O";

    char a[3][3] = {{'1', '2', '3',}, {'4', '5', '6',}, {'7', '8', '9',}};

    printMatrix(a);

    Play(a);

    cout << "\n\n****************************************************************\n";
    return 0;
}
