#include <stdio.h>
int main() {
    int age;
    float height; 
    char name[30];

    printf("Enter your first name:\n");
    scanf("%s", &name);

    printf("Enter your age:\n");
    scanf("%d", &age);

    printf("Enter your height in meters:\n");
    scanf("%f", &height);

printf("\n---PERSONAL INFORMATION---\n");
printf("Name: %s\n", name);
printf("Age: %d\n", age);
printf("Height: %.2f meters\n", height);

return 0;
}