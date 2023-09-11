#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    string tab = "ABCDEFGHIJKLMNOPRSTUWXYZabcdefghijklmnoprstuwxyz0123456789";
    int x;


    srand(time(NULL));


    for(int i=0; i<8; i++)
        {
            x = rand()%62;
            cout << tab[x];
        }


    return 0;
}
