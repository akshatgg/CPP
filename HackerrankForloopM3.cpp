#include <iostream>
using namespace std;
int main()
{
    int a , b  ;
    cin>>a>>b;
    string A[] = {"zero ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            cout << A[i] << endl;
        }
        else if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else if (i % 2 != 0)
            {
                cout << "odd" << endl;
            }
        }
    }

    return 0;
}