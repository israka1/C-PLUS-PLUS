
#include<iostream>
using namespace std;
int main(){
int arr[10][10],transpose[10][10],row,col;

cout<<"Enter Matrix elements:"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<"["<<i<<"]["<<j<<"]=";
        cin>>arr[i][j];
    }
    cout<<"\n";
}

for(int i=0;i<3;i++){
        cout<<"\t";
    for(int j=0;j<4;j++){
     cout<<arr[i][j]<<" ";
if(j==4-1)
    cout<<"\n";
    }

}
cout<<"Computing the transopse:"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<col;j++){
        transpose[j][i]=arr[i][j];
    }
    cout<<"\n";
}

cout<<"Transpose of the matrix:"<<endl;
for(int i=0;i<col;i++)
    for(int j=0;j<row;j++){
            cout<<transpose[i][j]<<" ";
      if(j==row-1)
      cout<<"\n";
}
}
