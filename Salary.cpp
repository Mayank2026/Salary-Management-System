#include <iostream>
using namespace std;

class Employee {
    string name;
    int ID;
    string designation;

public:
    ////////////constructor///////////
    Employee(string n, int id, string desig) {
        name = n;
        ID = id;
        designation = desig;
    }

    ////////////getter methods for employee/////////
    string getName() { return name; }
    int getID() { return ID; }
    string getDesignation() { return designation; }
};

class Salary {
    double basicPay;
    double allowances;
    double deductions;

public:
    /////////////constructor////////////
    Salary(double bp, double al, double ded) {
        basicPay = bp;
        allowances = al;
        deductions = ded;
    }
    ///////////getter method for salary///////////
    double getBasicPay() { return basicPay; }
    double getAllowances() { return allowances; }
    double getDeductions() { return deductions; }

    /////////////method to calculate total salary////////////
    double calculateSalary() {
        return basicPay + allowances - deductions;
    }
};

class Display {
public:
    ////////////method to display employee details and salary////////////////
    void display(Employee emp, Salary sal) {
        cout << "Name of Employee: " << emp.getName() << endl;
        cout << "User ID: " << emp.getID() << endl;
        cout << "Designation in company: " << emp.getDesignation() << endl;
        cout << "BasicPay: " << sal.getBasicPay() << endl;
        cout << "Allowances: " << sal.getAllowances() << endl;
        cout << "Deductions: " << sal.getDeductions() << endl;
        cout << "Total Salary Obtain: " << sal.calculateSalary() << endl;
    }
};

int main() {
    string name, designation;
    int ID;
    double basicPay, allowances, deductions;

    ////// create an object of Display class //////
    Display disp;

    cout << "Enter Employee 1 Details: " << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "ID: ";
    cin >> ID;
    cin.ignore(); // Ignore the newline character left in the input buffer
    cout << "Designation: ";
    getline(cin, designation);
    cout << "Basic Pay: ";
    cin >> basicPay;
    cout << "Allowances: ";
    cin >> allowances;
    cout << "Deductions: ";
    cin >> deductions;
    cin.ignore(); // Ignore the newline character left in the input buffer

    ////// create an object of Employee class //////
    Employee emp1(name, ID, designation);

    ////// create an object of Salary class //////
    Salary sal1(basicPay, allowances, deductions);

    ////// display employee details and salary //////
    disp.display(emp1, sal1);
    cout << endl;

    // Repeat the same process for other employees (emp2, emp3, emp4, emp5) if required

    return 0;
}