#include <iostream>
using namespace std;
int main()
{
    char n1 = '1', n2 = '2', n3 = '3', n4 = '4', n5 = '5', n6 = '6', n7 = '7', n8 = '8', n9 = '9';
    char choice, player;
    int filled = 1, turn = 0;
    bool over = 0;

    while (filled <= 9 && over == 0)
    {
        system("clear");

        cout << "     +=================+ " << endl;
        cout << "     |  THREE CONNECT  | " << endl;
        cout << "     +=================+ " << endl
             << endl;
        cout << "  +=======+=======+=======+\n";
        cout << "  |   " << n1 << "   |" << "   " << n2 << "   |" << "   " << n3 << "   |\n";
        cout << "  +=======+=======+=======+\n";
        cout << "  |   " << n4 << "   |" << "   " << n5 << "   |" << "   " << n6 << "   |\n";
        cout << "  +=======+=======+=======+\n";
        cout << "  |   " << n7 << "   |" << "   " << n8 << "   |" << "   " << n9 << "   |\n";
        cout << "  +=======+=======+=======+\n";
        cout << endl
             << endl;

        if (turn % 2 == 0)
        {
            player = 'A';
        }
        else
        {
            player = 'B';
        }
        cout << "Turn " << turn + 1 << ": Player " << player;
        cout << endl;
        cout << "Choose a column : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case '1':
        {
            if (n7 != 'A' && n7 != 'B')
                n7 = player;
            else if (n4 != 'A' && n4 != 'B')
                n4 = player;
            else if (n1 != 'A' && n1 != 'B')
                n1 = player;
            else
            {
                cout << "All cells are filled choose another number\n";
                cin.ignore();
                cin.get();
                continue;
            }
            break;
        }
        case '2':
        {
            if (n8 != 'A' && n8 != 'B')
                n8 = player;
            else if (n5 != 'A' && n5 != 'B')
                n5 = player;
            else if (n2 != 'A' && n2 != 'B')
                n2 = player;
            else
            {
                cout << "All cells are filled choose another number\n";
                cin.ignore();
                cin.get();
                continue;
            }
            break;
        }
        case '3':
        {
            if (n9 != 'A' && n9 != 'B')
                n9 = player;
            else if (n6 != 'A' && n6 != 'B')
                n6 = player;
            else if (n3 != 'A' && n3 != 'B')
                n3 = player;
            else
            {
                cout << "All cells are filled choose another number\n";
                cin.ignore();
                cin.get();
                continue;
            }
            break;
        }
        default:
        {
            cout << "Invalid Input, Choose between (1-3)\n";
            cin.ignore();
            cin.get();
            continue;

            break;
        }
        }
        if ((n1 == player && n2 == player && n3 == player) || (n4 == player && n5 == player && n6 == player) || (n7 == player && n8 == player && n9 == player) ||
            (n1 == player && n4 == player && n7 == player) || (n2 == player && n5 == player && n8 == player) || (n3 == player && n6 == player && n9 == player) ||
            (n1 == player && n5 == player && n9 == player) || (n3 == player && n5 == player && n7 == player))
        {
            over = 1;
        }

        turn++;
        filled++;
    }
    system("clear");
    cout << "     +=================+ " << endl;
    cout << "     |  THREE CONNECT  | " << endl;
    cout << "     +=================+ " << endl
         << endl;
    cout << "  +=======+=======+=======+\n";
    cout << "  |   " << n1 << "   |" << "   " << n2 << "   |" << "   " << n3 << "   |\n";
    cout << "  +=======+=======+=======+\n";
    cout << "  |   " << n4 << "   |" << "   " << n5 << "   |" << "   " << n6 << "   |\n";
    cout << "  +=======+=======+=======+\n";
    cout << "  |   " << n7 << "   |" << "   " << n8 << "   |" << "   " << n9 << "   |\n";
    cout << "  +=======+=======+=======+\n";
    cout << endl;
    if (over == 1)
    {
        cout << "+===========================+ " << endl;
        cout << "|      CONGRATULATIONS      | " << endl;
        cout << "| " << "  PLAYER " << player << " WON THE GAME   | " << endl;
        cout << "+===========================+   " << endl
             << endl;
    }
    else
    {
        cout << "     +=================+ " << endl;
        cout << "     |    GAME DRAW    | " << endl;
        cout << "     +=================+ " << endl
             << endl;
    }

    return 0;
}
