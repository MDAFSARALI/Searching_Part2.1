#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements : " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements in the array : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element :" << endl;
    cin >> target;

    // Applying BinarySearch :
    int low = 0;
    int high = n - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] > target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (ans == -1)
        cout << "The target element is not present in the array : " << endl;
    else
        cout << "The target element is present in the array  at : " << (ans+1) << endl;
    return 0;
}