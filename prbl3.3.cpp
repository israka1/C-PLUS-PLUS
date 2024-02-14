#include<iostream>
using namespace std;
struct Employee {
  int id;
  char name[50];
  float basic_pay;
  float house_rent;
  float transport_allowance;
  float medical_allowance;
  float pf_deduction;
  float gross_pay;
  float net_pay;
};

int main() {
  Employee employees[5];

  // Get employee data from user
  for (int i = 0; i < 2; i++) {
    cout << "Enter employee " << i + 1 << " details:" << endl;
    cout << "ID: ";
    cin >> employees[i].id;
    cout << "Name: ";
    cin >> employees[i].name;
    cout << "Basic pay: ";
    cin >> employees[i].basic_pay;
  }

  // Calculate benefits and allowances
  for (int i = 0; i < 2; i++) {
    // Calculate house rent
    if (employees[i].basic_pay <= 10000) {
      employees[i].house_rent = 0.45 * employees[i].basic_pay;
    } else if (employees[i].basic_pay > 10000 && employees[i].basic_pay <= 20000) {
      employees[i].house_rent = 0.40 * employees[i].basic_pay;
    } else {
      employees[i].house_rent = 0.35 * employees[i].basic_pay;
    }

    // Calculate transport allowance
    employees[i].transport_allowance = 0.05 * employees[i].basic_pay;

    // Calculate medical allowance
    employees[i].medical_allowance = 2000;

    // Calculate PF deduction
    employees[i].pf_deduction = 0.10 * employees[i].basic_pay;

    // Calculate gross pay
    employees[i].gross_pay = employees[i].basic_pay + employees[i].house_rent + employees[i].transport_allowance + employees[i].medical_allowance;

    // Calculate net pay
    employees[i].net_pay = employees[i].gross_pay - employees[i].pf_deduction;
  }

  // Display employee data
  cout << endl << "Employee data:" << endl;
  for (int i = 0; i < 2; i++) {
    cout << "ID: " << employees[i].id << endl;
    cout << "Name: " << employees[i].name << endl;
    cout << "Basic pay: " << employees[i].basic_pay << endl;
    cout << "House rent: " << employees[i].house_rent << endl;
    cout << "Transport allowance: " << employees[i].transport_allowance << endl;
    cout << "Medical allowance: " << employees[i].medical_allowance << endl;
    cout << "PF deduction: " << employees[i].pf_deduction << endl;
    cout << "Gross pay: " << employees[i].gross_pay << endl;
    cout << "Net pay: " << employees[i].net_pay << endl << endl;
  }

  return 0;
}
