#include<iostream>
using namespace std;
int main(){

int A[3][3],size,sum=0;
cout<<"Enter the size of the Matrix:";
cin>>size;

cout<<"Input the elements:"<<endl;
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
            cout<<"["<<i<<"]["<<j<<"]=";
        cin>>A[i][j];
    }
}

cout<<"Elements are:"<<endl;
for(int i=0;i<size;i++){
        cout<<"\t";
    for(int j=0;j<size;j++){

        cout<<A[i][j]<<" ";
    }
cout<<"\n";
}

cout<<"Diagonal Matrix:"<<endl;
for(int i=0;i<size;i++){
        cout<<"\t";
    for(int j=0;j<size;j++){

        if(i==j){
            cout<<A[i][j]<<" ";
            sum=sum+A[i][j];}
        }}
        cout<<endl;
        cout<<"Sum of Diagonal:"<<sum<<endl;
}
