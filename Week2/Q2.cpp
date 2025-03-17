#include<iostream>
#include<algorithm>
using namespace std;
int binary(int arr[],int n,int key)
{
    int lo=0;
    int hi=n-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}
void sum(int arr[],int n)
{ 
   
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=arr[i]+arr[j];
            int k=binary(arr,n,sum);
            if(k!=-1) 
            {
                cout<<i<<","<<j<<","<<k<<endl;
            
            }
        }

    }
}
int main()
{
    int arr[]={3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sum(arr,n);
}
