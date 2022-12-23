#include <iostream>
using namespace std;
int main()
{
    int A[10] = {5, 8, 3, 6, 84, 6}, i = 0, key;
    cout << "enter key";
    cin >> key;
    while (i < 6)
    {
        if (key == A[i])
        {
            cout << "found at " << i;
            break;
        }
        i++;
    }
    if(key!=A[i])
    {
        cout<<"not found";
    }

    return 0;
}