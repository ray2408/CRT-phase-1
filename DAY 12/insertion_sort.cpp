#include<iostream>
using namespace std;        

void swap_array(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}       

void insertion_Sort(int nums[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
}

int main()
{
    int nums[5] = {34,6,18,12,2};
    int size = sizeof(nums) / sizeof(nums[0]);

    insertion_Sort(nums, size);
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
