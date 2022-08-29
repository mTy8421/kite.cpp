#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 4 ; i++)
    {
        for (int j = 1; j <= 2 * (3 - i + 1); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * (i * 3 - (i + 1)) -1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    
    return EXIT_SUCCESS;
}