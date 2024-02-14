#include <iostream>
using namespace std;

struct Student {
  int roll;
  char name[50];
  float marks;
  char grade;
};

Student students[5];
char calculateGrade(float marks) {
  if (marks >= 90) {
    cout<< "A+";
  } else if (marks >= 80) {
   cout<<"A-";
  } else if (marks >= 70) {
    cout<<"B";
  } else if (marks >= 60) {
   cout<<"C";
  } else {
    cout<<"D";
  }
}

// Define the main function
int main() {
  // Get student data from user
  for (int i = 0; i < 2; i++) {
    cout << "Enter student " << i + 1 << " details:" << endl;
    cout << "Roll number: ";
    cin >> students[i].roll;
    cout << "Name: ";
    cin >> students[i].name;
    cout << "Marks: ";
    cin >> students[i].marks;
    cout<<endl;
  }

  // Calculate the grade for each student
  for (int i = 0; i < 2; i++) {
    students[i].grade = calculateGrade(students[i].marks);
  }

  // Display student data
  cout << endl << "Student data:" << endl;
  cout<<"Roll  "<<"\t"<< "Name"<<"\t"<<"Marks" <<"\t" <<"Grade"<<"\t"<<endl<<endl;
  for (int i = 0; i < 2; i++)
     {

    cout << students[i].roll << "\t" << students[i].name << "\t" << students[i].marks << "\t" << students[i].grade << endl<<endl;
  }



  return 0;
}
