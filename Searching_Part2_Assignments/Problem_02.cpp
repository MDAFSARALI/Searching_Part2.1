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
    cout << "Enter the target :" << endl;
    cin >> target;

    int low = 0;
    int high = 1;
    while (arr[high] < target)
    {
        low = high;
        high *= 2;
    }
    cout<<"The current low:  "<<low<<"The current high:  "<<high<<endl;;
    bool  ans=false;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (arr[mid]==target)
        {
            ans=true;
            break;
        }
        else if (arr[mid]>target)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }  
    }
    if (ans==true)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    
    
    return 0;
}