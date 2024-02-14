#include<iostream>
using namespace std;

int main(){
int arr1[10],aar2[15],MergedArray[20],i,j;
cout<<"Enter 5 numbers for Array1 :";
for(i=0;i<5;i++){
    cin>>arr1[i];
    MergedArray[i]=arr1[i];
    }

 cout<<"Enter 5 number fro Array2:";
for(j=0;j<5;j++){
    cin>>arr1[j];
    MergedArray[i]=arr1[j];
    i++;
    }
    cout<<"Print Merged Array:";
    for(j=0;j<10;j++){
        cout<<MergedArray[j]<<endl;
    }
    return 0;
}
