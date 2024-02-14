#include<iostream>
using namespace std;
int main(){
float a[2][3],b[2][3],result[2][3];

//User A
cout<<"Enter Elements for A Matrix:"<<endl;
for(int row=0;row<2;row++)
    {
   for(int col=0;col<3;col++)
     {
       cout<<"["<<row<<"]"<<"["<< col<<"]=";
       cin>>a[row][col];
     }
cout<<"\n";
    }


//Print A
cout<<"Printing A Matrix:"<<endl;
for(int row=0;row<2;row++)
    {
        cout<<"\t";
   for(int col=0;col<3;col++)
      {
        cout<<a[row][col]<<" ";
      }
        cout<<"\n";
    }


//User B
cout<<"Enter Elements for B Matrix:"<<endl;
for(int row=0;row<2;row++)
    {
   for(int col=0;col<3;col++)
      {
        cout<<"["<<row<<"]"<<"["<< col<<"]=";
        cin>>b[row][col];
      }
 cout<<"\n";
    }


//Print B
cout<<"Printing B Matrix:"<<endl;
for(int row=0;row<2;row++)
    {
        cout<<"\t";
   for(int col=0;col<3;col++)
      {
        cout<<b[row][col]<<" ";
      }
        cout<<"\n";
    }


//Add A+B
cout<<"Adding:"<<endl;
   for(int row=0;row<2;row++)
     {
   for(int col=0;col<3;col++)
    {
        result[row][col]=a[row][col]+b[row][col];
    }
     }



//Sum Two Matrix
cout<<"Sum of Matrix:"<<endl;
   for(int row=0;row<2;row++)
    {
        cout<<"\t";
      for(int col=0;col<3;col++)
        {
         cout<<result[row][col]<<" ";
        }
         cout<<"\n";
    }

    //float Avg=
   return 0;
}

