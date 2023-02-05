#include <iostream>
using namespace std;
int totaldigit(int number);
main()
{
    int number;
    cout << "enter a number:" << endl;
    cin >> number;
    int result = totaldigit(number);
    cout << result;
}
int totaldigit(int number)
{
    int loop = 0;
    while (number != 0)

    {

        number = number / 10;
        loop = loop + 1;
    }
    return loop;
}