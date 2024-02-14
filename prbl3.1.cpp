#include <iostream>

using namespace std;

struct Student {
  int roll;
  char name[50];
  float marks;
};

int main() {
  Student students[5];

  // Get student data from user
  for (int i = 0; i < 5; i++) {
    cout << "Enter student " << i + 1 << " details:" << endl;
    cout << "Roll number: ";
    cin >> students[i].roll;
    cout << "Name: ";
    cin >> students[i].name;
    cout << "Marks: ";
    cin >> students[i].marks;
  }

  // Display student data
  cout << endl << "Student data:" << endl;
  for (int i = 0; i < 5; i++) {
    cout << "Roll number: " << students[i].roll << endl;
    cout << "Name: " << students[i].name << endl;
    cout << "Marks: " << students[i].marks << endl << endl;
  }

  return 0;
}
