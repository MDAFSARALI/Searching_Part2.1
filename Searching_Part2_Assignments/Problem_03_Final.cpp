#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the no of rows : "<<endl;
    cin>>row;
    cout<<"Enter the no of cols : "<<endl;
    cin>>col;
    int mat[row][col];
    cout<<"Enter the elements in the matrix : "<<endl;
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            cin>>mat[i][j];
       }
       
    }
    
    int target;
    cout<<"Enter the target element :"<<endl;
    cin>>target;
    int low=0;
    int high=row*col-1;
    bool ans=false;
    while (low<=high)
    {
        int mid=low+(high-low)/2;
        if (mat[mid/col][mid%col]==target)
        {
            ans=true;
            break;
        }
        else if (mat[mid/col][mid%col]>target)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }  
    }
    if (ans==true) cout<<"True";
    else cout<<"False";
    return 0;
}