#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a sequence of integer (-999 to finish):" << endl;
    const int size = 1000;
    int sequence[size] = {0};
    int initial, count = 0;

    for (int count = 0; count < 1000; count++)
    {
        cin >> initial;
        if (initial != -999)
        {
            sequence[count] = initial;
        }
        else
        {
            break;
        }
    }
    int sum = 0;
    for (int index = 0; index < 1000; index++)
    {
        if (index % 2 == 0)
        {
            sum = sum + sequence[index];
        }
        else
        {
            sum = sum - sequence[index];
        }
    }
    cout << sum << endl;
    return 0;
}
