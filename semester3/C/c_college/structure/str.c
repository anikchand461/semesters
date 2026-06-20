#include <stdio.h>
#include <string.h>

int main() {
    struct stud
    {
        char name[30];
        int roll_no;
        float percentage;
    };

    struct stud s1 = {"Anik Chand", 28, 92.1};
    struct stud s2 = {"Ayan Roy", 57, 87};
    

    printf("name : %s\nroll no. %d\npercentage : %.2f", s1.name, s1.roll_no, s1.percentage);
    printf("\n");
    printf("name : %s\nroll no. %d\npercentage : %.2f", s2.name, s2.roll_no, s2.percentage);

    struct stud merged;

    merged.name = strcat(s1.name, s2.name);   // error
    merged.roll_no = s1.roll_no + s2.roll_no;
    merged.percentage = s1.percentage + s2.percentage;

    printf("merging two structures...\n");

    printf("merged name : %s\nadded roll no. %d\nadded percentage : %.2f", merged.name, merged.roll_no, merged.percentage);

    return 0;
    
}