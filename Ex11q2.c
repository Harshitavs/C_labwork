#include <stdio.h>

struct Employee {
    char name[50];
    float basic;
};

int main() {
    struct Employee e[100];
    int n;
    float da, gross;
    printf("Enter number of employees (max 100): ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name and basic pay of employee %d: ", i + 1);
        scanf("%s %f", e[i].name, &e[i].basic);
    }

    printf("\nEmployee Gross Salary:\n");
    for (int i = 0; i < n; i++) {
        da = 0.52 * e[i].basic;
        gross = e[i].basic + da;
        printf("%s : %.2f\n", e[i].name, gross);
    }

    return 0;
}


