#include <stdio.h>

int main() {
    FILE* file = fopen("abc.txt", "w");

    if (file == NULL) {
        printf("error opening file");
        return 1;
    }

    int n;
    printf("enter no. of students : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char name[50];
        int marks;

        printf("enter name of student-%d : ", i + 1);
        scanf("%s", name);

        printf("enter marks of student-%d : ", i + 1);
        scanf("%d", &marks);

        fprintf(file, "student-%d : name - %s, marks - %d\n", i + 1, name, marks);
    }

    printf("successfully stored in abc.txt");

    return 0;
}