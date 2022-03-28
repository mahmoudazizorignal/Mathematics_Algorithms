/*
    Author: Mahmoud Mamdouh
    Purpose: The Program Calculates the Average of Three Integers Numbers
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    cout << "ENTER 3 INTEGERS TO PRINT THE AVERAGE: ";
    for(int i = 0; i < 3; i++)
        cin >> arr[i];
    cout << (arr[0] + arr[1] + arr[2]) / 3 << endl;
    return 0;
}
