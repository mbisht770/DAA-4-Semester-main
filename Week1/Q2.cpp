#include<iostream>
using namespace std;
void binary(int arr[],int n,int key)
{
    int lo=0;
    int hi=n-1;
    int c=0;
    while(lo<=hi)
    {
        c++;
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==key)
        {
            cout<<"Found : "<<c;
            return;
        }
        else if(arr[mid]<key) lo=mid+1;
        else hi=mid-1;
 
    }
    cout<<"Not Found : "<<c;

}

int main()
{
    int n,key;
    cin>>n>>key;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    binary(arr,n,key);

        
    
}