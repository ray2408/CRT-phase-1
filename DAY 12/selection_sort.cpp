#include <iostream>
using namespace std;
void swap_array(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void selection_Sort(int nums[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min_index])
            {
                min_index = j;
            }
        }
        swap_array(nums[i], nums[min_index]);
    }
}           


int main()
{
    int nums[5] = {34,6,18,12,2};
    int size = sizeof(nums) / sizeof(nums[0]);

    selection_Sort(nums, size);
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
