#include<iostream>
using namespace std;
 void insertion_sort(int arr[],int n)
 {
    int compare=0;
    int shift=0;
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=arr[i];
        while(j>=0 && arr[j]>key)
        {
            compare++;
            arr[j+1]=arr[j];
            shift++;
            j--;
        }
        arr[j+1]=key;
        shift++;

    }
    cout<<"number of sifts are"<<shift<<endl;
cout<<"number of compare"<<compare;
 }
int main()
{
    int arr[] = {-23, 65, -31, 76, 46, 89, 45, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr,n);
}