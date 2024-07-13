#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the no of rows: "<<endl;
    cin>>row;
    cout<<"Enter the no of col: "<<endl;
    cin>>col;
    int mat[row][col];
    // Taking values in the array :
    cout<<"Enter the elements of the matrix: "<<endl; 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>mat[i][j];
        }    
    }
    int target;
    cout<<"Enter the target element : "<<endl;
    cin>>target;
    int idx;
    bool ans=false;
    for (int i = 0; i < row; i++)
    {
        if (mat[i][0]<=target && mat[i][col])
        {
            idx=i;
            int low=0;
            int high=col-1;
            while (low<=high)
            {
                int mid=low+(high-low)/2;
                if (mat[idx][mid]==target)
                {
                   ans=true;
                   break;
                }
                else if (mat[idx][mid]<target)
                {
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }  
            }
            
        }   
    }
    if (ans==1)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    
    return 0;
}

/*
there is also an another method in which the time complexity will be orderof log(m*n) but the space complexity will increase because we will create an array of size row*col and push the all values in an 1D array 
 */