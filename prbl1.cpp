#include<iostream>
using namespace std;
int main(){

int arr[10],sum=0;

cout<<"Enter 5 ingeger value: "<<endl;
 for(int i=0;i<5;i++){
    cin>>arr[i];
    sum=sum+arr[i];
 }
 cout<<"Summation of array: "<<sum<<endl;

 double avg=(float)sum/5;
 cout<<"Average of array: "<<avg<<endl;
 return 0;
}
