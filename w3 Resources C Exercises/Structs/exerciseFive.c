



#include <stdio.h>
#include <string.h>

#define MAX_STR_LENGTH 100

typedef struct {
    int employeeID;
    char employeeName[MAX_STR_LENGTH];
    float employeeSalary;
} Employee;

int getEmployeeID() {
    int ID;
    printf("Employee ID: ");
    if (scanf("%d", &ID) == 1) {
        return ID;
    } else {
        printf("Invalid input. Please enter a valid integer.\n");
        while (getchar() != '\n'); 
        return -1; 
    }
}

void getEmployeeName(char *name) {
    printf("Name: ");
    if (fgets(name, MAX_STR_LENGTH, stdin) != NULL) {
        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }
    } else {
        printf("Error reading input.\n");
    }
}

float getEmployeeSalary() {
    float salary;
    printf("Salary: ");
    if (scanf("%f", &salary) == 1) {
        return salary;
    } else {
        printf("Invalid input. Please enter a valid number.\n");
        while (getchar() != '\n'); 
        return -1.0f; 
    }
}

int main() {
    Employee employee1, employee2, employee3;

    printf("Input details for Employee 1: \n");
    employee1.employeeID = getEmployeeID();
    getchar(); 
    getEmployeeName(employee1.employeeName);
    employee1.employeeSalary = getEmployeeSalary();

    printf("Input details for Employee 2: \n");
    employee2.employeeID = getEmployeeID();
    getchar(); 
    getEmployeeName(employee2.employeeName);
    employee2.employeeSalary = getEmployeeSalary();

    printf("Input details for Employee 3: \n");
    employee3.employeeID = getEmployeeID();
    getchar(); 
    getEmployeeName(employee3.employeeName);
    employee3.employeeSalary = getEmployeeSalary();

    Employee highestSalaryEmployee = employee1;
    if (employee2.employeeSalary > highestSalaryEmployee.employeeSalary) {
        highestSalaryEmployee = employee2;
    }
    if (employee3.employeeSalary > highestSalaryEmployee.employeeSalary) {
        highestSalaryEmployee = employee3;
    }

    printf("\n\nEmployee with the highest salary:\n");
    printf("ID: %d\n", highestSalaryEmployee.employeeID);
    printf("Name: %s\n", highestSalaryEmployee.employeeName);
    printf("Salary: %.2f\n", highestSalaryEmployee.employeeSalary);

    return 0;
}