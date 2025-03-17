// Given a sorted array of positive integers containing few duplicate
// elements, design an algorithm and implement it using a program to find
// whether the given key element is present in the array or not. If present,
// then also find the number of copies of given key. (Time Complexity =
// O(log n))
#include<iostream>
using namespace std;
void binary(int arr[],int n,int key)
{
        int lo=0;
        int hi=n-1;
        int lb=n;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(arr[mid]>=key)
            {
                lb=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }

        lo=0;
        hi=n-1;
         int  ub=n;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(arr[mid]>key)
            {
                ub=mid;
                hi=mid-1;
            }
            else lo=mid+1;
            
        }
        if(lb==ub) cout<<"not found";
        else{
            cout<<"Found with dublicates : "<<ub-lb;
        } 

}
    



int main()
{
    int n,key;
    cin>>n>>key;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    binary(arr,n,key);

        
    
}