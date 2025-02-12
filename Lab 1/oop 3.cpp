#include <iostream>
#include <string>
using namespace std;
struct Employee {
 string name;
 int id;
 float salary;
};
// Function to input employee data
void InputEmployeeData(Employee employees[], int count) {
 for (int i = 0; i < count; i++) {
 cout << "\nEnter details for employee " << i + 1 << ":\n";
 cout << "Name: ";
 cin >> employees[i].name;
 cout << "Id: ";
 cin >> employees[i].id;
 cout << "Salary: ";
 cin >> employees[i].salary;
 }
}
// Function to display employee records
void DisplayEmployeeData(Employee employees[], int count) {
 cout << "\n--- Employee Records ---\n";
 for (int i = 0; i < count; i++) {
 cout << "Id: " << employees[i].id << "\n";
 cout << "Name: " << employees[i].name << "\n";
 cout << "Salary: " << employees[i].salary << "\n\n";
 }
}
// Function to find the employee with the highest salary
void FindHighestSalary(Employee employees[], int count) {
 int HighestSalary = 0;
 for (int i = 1; i < count; i++) {
 if (employees[i].salary > employees[HighestSalary].salary) {
HighestSalary = i;
 }
 }
 cout << "\n--- HighestSalary---\n";
 cout << "Name: " << employees[HighestSalary].name << "\n";
 cout << "Roll Number: " << employees[HighestSalary].id << "\n";
 cout << "Marks: " << employees[HighestSalary].salary << "\n";
}
int main() {
 int numEmployee;
 cout << "Enter the number of employees: ";
 cin >> numEmployee;
 Employee employees[numEmployee]; // Structured array
 InputEmployeeData(employees, numEmployee);
 DisplayEmployeeData(employees, numEmployee);
 FindHighestSalary(employees, numEmployee);
 return 0;
}