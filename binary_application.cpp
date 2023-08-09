#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int laste_occurance(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;
    int ans = -1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int first_occurance(int arr[], int size, int key)
{

    int s = 0;
    int e = size - 1;
    int ans = -1;

    while (s <= e)
    {

        int mid = s + (e - s) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 7, 9, 9, 20, 20, 20, 20, 20, 21, 22};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    int key = 9;

    int index = binarysearch(arr, size, key);
    cout << "index :" << index << endl;
    cout << endl;
    int first_index = first_occurance(arr, size, key);
    cout << " first index :" << first_index << endl;
    cout << endl;
    int laste_index = laste_occurance(arr, size, key);
    cout << " laste index :" << laste_index << endl;

    int occurance = (laste_index - first_index) + 1;

    cout << endl
         << "number of key :" << key << " : " << occurance << endl;
    return 0;
}