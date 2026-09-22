#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    printf("Job application form\n");
    printf("Please fill in the application\n");

    // variable initialization
    char full_name[50] = "";
    int age = 0;
    char desired_position[50] = "";
    float expected_salary = 0.0f;
    char availability[50] = "";
    bool is_authorized = false;

    // input
    printf("Enter your full name: ");
    fgets(full_name, sizeof(full_name), stdin);
    full_name[strlen(full_name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();

    printf("Indicate your desired position: ");
    fgets(desired_position, sizeof(desired_position), stdin);
    desired_position[strlen(desired_position) - 1] = '\0';

    printf("Indicate your expected salary: ");
    scanf("%f", &expected_salary);
    getchar();

    printf("Indicate your availability (full-time, part-time): ");
    fgets(availability, sizeof(availability), stdin);
    availability[strlen(availability) - 1] = '\0';

    printf("Are you authorized to Work in Canada (true / false): ");
    scanf("%b", is_authorized);

    printf("%s\n%d\n%s\n%.2f\n%s\n%b\n", full_name, age, desired_position, expected_salary, availability, is_authorized);

    return 0;
}