#include<iostream>
using namespace std;
int main(){
int arr[10],i,even=0,odd=0;

cout<<"Enter any 8 numbers:";
for(i=0;i<8;i++){
    cin>>arr[i];
}
for(i=0;i<8;i++){
    if(arr[i]%2==0){
        even=even+arr[i];
    }
    else
        odd=odd+arr[i];
}

cout<<"Sum of even nmbers="<<even;
cout<<"Sum of odd nmbers="<<odd;
return 0;
}
