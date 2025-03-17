//Linear Search With Comparision
#include<iostream>
using namespace std;
void linear(int arr[],int n,int key)
{
    int c=0;
   
    
        for(int i=0;i<n;i++)
        {
            c++;
            if(arr[i]==key)
            {
                cout<<"Element Found at idx :"<<i<<" Total comparision : "<<c;
                return;
            }
        }
        

    cout<<"Elemnt Not Found Total comparsin : " <<c;
}
int main()
{
    int n,key;
    cin>>n>>key;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    linear(arr,n,key);
        
    
}