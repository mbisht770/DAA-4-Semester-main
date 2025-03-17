//Linear Search With Comparision
#include<iostream>
using namespace std;
void jump(int arr[],int n,int key)
{
    int prev=0;
    int step=0;
    while(step<n && arr[step]<key)
    {
        prev=step;
        step+=2;
    }
    for(int i=prev;i<min(step,n);i++)
    {
        if(arr[i]==key)
        {
            cout<<"Found";
            return;
        }

    }
    cout<<"Not Found";
    return;
         

}


int main()
{
    int n,key;
    cin>>n>>key;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    jump(arr,n,key);
        
    
}