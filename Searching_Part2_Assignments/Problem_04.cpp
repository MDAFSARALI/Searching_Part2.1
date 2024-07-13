#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Please enter the target: " << endl;
    cin >> target;

    // Now find out the pivot element

    int low = 0;
    int high = n - 1;
    int pivot;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            pivot = mid + 1;
            break;
        }
        else if (arr[mid] < arr[mid - 1] && arr[mid] <= arr[mid + 1])
        {
            pivot = mid + 1;
            break;
        }
        else if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // Searching the value
    bool ans = false;
    if (target == arr[pivot])
    {
        ans = true;
    }
    else if (arr[high] < target)
    {
        low = 0;
        high = pivot - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target)
            {
                ans = true;
                break;
            }
            else if (target > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    else
    {
        low = pivot;
        high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target)
            {
                ans = true;
                break;
            }
            else if (target > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    // Printing on terminal
    if (ans == true)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}