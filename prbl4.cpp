
#include<iostream>
using namespace std;
int main(){
int n,i,arr1=0,arr2=0;
cout<<"Enter the numbers of elements of array:"<<endl;
cin>>n;
int arr[n];
for(i=0;i<n;i++){
    cout<<"Enter the number:";
    cin>>arr[i];}

    for(i=0;i<n;i++){
        if(i%2==0){arr1=arr1+arr[i];}
        else
        {
            arr2=arr2+arr[i];
        }
    }
    cout<<"Sum of even indices:"<<arr1<<endl;
    cout<<"Sum of odd indices:"<<arr2<<endl;
    return 0;
}

