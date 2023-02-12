#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key)
{
    int left=1;
    int right=n-1;
    int mid;
    while(left<=right)
    {
        mid=left+(right-left)/2;
        if(arr[mid]==key)
          return mid;
        else if(arr[mid]<key)
           left=mid+1;
        else 
          right=mid-1; 
         mid=left+(right-left)/2;    
    }
    // if(left>right)
       return -1;
}
int main()
{
    int n,arr[20],i,x,key;
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter elements in sorted form:";
    for(i=0;i<n;i++)
      cin>>arr[i];
    cout<<"array:";
    for(i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<endl<<"enter the element you want to search:";
    cin>>key;  
    x=binary_search(arr,n,key);
     if(x>=0)
      cout<<"element found at index:"<<x;
     else 
      cout<<"element not found"; 
    return 0;

}