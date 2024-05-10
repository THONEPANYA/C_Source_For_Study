#include <stdio.h>

int main() {
    int emp_counter = 0;
    int high_sal_counter = 0;
    int medium_sal_counter = 0;
    int low_sal_counter = 0;
    float salary;

    // Setting counters to 0
    emp_counter = 0;
    high_sal_counter = 0;
    medium_sal_counter = 0;
    low_sal_counter = 0;

    // Loop to process employees
    while (emp_counter < 50) {
        printf("Enter the salary of employee %d: ", emp_counter + 1);
        scanf("%f", &salary);
        
        if (salary > 30000) {
            high_sal_counter++;
        } else if (salary > 20000) {
            medium_sal_counter++;
        } else {
            low_sal_counter++;
        }
        
        emp_counter++;
    }

    // Printing the counts
    printf("Total number of employees: %d\n", emp_counter);
    printf("Number of employees with high salary: %d\n", high_sal_counter);
    printf("Number of employees with medium salary: %d\n", medium_sal_counter);
    printf("Number of employees with low salary: %d\n", low_sal_counter);

    return 0;
}
