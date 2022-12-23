#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int sum = 0, A[100], average, total;
    cout << "enter the number of element ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". ener number ";
        cin >> A[i];
        sum += A[i];
    }
    total = sum;
    average = sum / n;
    cout << "total sum is = " << total<<endl;
    cout << "average is = " << average;

    return 0;
}