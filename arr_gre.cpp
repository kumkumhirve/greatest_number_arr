#include <iostream>
using namespace std;
int main()
{
    int nums[] = {4, 6, 78, 88, 59, 55};
    int size = 6;
    int largest = INT16_MIN;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    cout << largest << endl;
    return 0;
}