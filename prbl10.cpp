#include<iostream>
using namespace std;
int main(){
    int arr[10][5],i,sum=0;
    cout<<"User Input:";
    for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
                cout<<"["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }
    cout<<"Elements are:";
     for(int i=0;i<10;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
    }

   for(int i=0;i<10;i++){
    int sum=0;
    for(int j=0;j<4;j++){
        int currentscore=arr[i][j];
        for(int k=0;k<4;k++){
            if(arr[i][k]>currentscore){
                int temp=currentscore;
                currentscore=arr[i][k];
                arr[i][k]=temp;
            }
        }

        if(j<3){
            sum=sum+currentscore;
        }
   }

   double avg=(sum)/3;
   cout<<"Average of best there quizes for "<<(i+1) <<" Students "<<avg<<endl;}
   return 0;}





