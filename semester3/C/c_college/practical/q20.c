#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float CGPA;
};

int main() {
    int n;
    printf("enter no. of students : ");
    scanf("%d", &n);

    struct student arr[n];
    for (int i = 0; i < n; i++) {
        printf("enter details of student-%d : \n", i+1);

        printf("name : ");
        scanf("%s", arr[i].name);

        printf("roll : ");
        scanf("%d", &arr[i].roll);

        printf("CGPA : ");
        scanf("%f", &arr[i].CGPA);
        
        printf("\n");
    }

    // printing the data
    for (int i = 0; i < n; i++) {
        printf("details of student - %d : \n", i + 1);

        printf("name : %s\n", arr[i].name);
        printf("roll : %d\n", arr[i].roll);
        printf("CGPA : %.2f\n", arr[i].CGPA);
        printf("\n");
    }

    return 0;
}