#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
    Job Application Form

    This program collects information from a job applicant,
    including their name, age, desired position, expected salary,
    availability, and work authorization status.

    It then displays the entered information as an
    application confirmation.
*/

int main()
{
    printf("\nJob application form\n");
    printf("Please fill in the application\n\n");

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

    printf("Indicate your expected salary (hourly): ");
    scanf("%f", &expected_salary);
    getchar();

    printf("Indicate your availability (full-time, part-time): ");
    fgets(availability, sizeof(availability), stdin);
    availability[strlen(availability) - 1] = '\0';

    printf("Are you authorized to work in Canada? (1 = yes, 0 = no): ");
    int authorized = 0;
    scanf("%d", &authorized);
    is_authorized = authorized;

    // Output
    printf("\n\nThank you for applying for the %s position.\n", desired_position);
    printf("Application Confirmation!\n\n");
    printf("---------------------------------\n");

    printf("Full Name: %s\n", full_name);
    printf("Age: %d\n", age);
    printf("Desired Position: %s\n", desired_position);
    printf("Expected Salary: $%.2f\n", expected_salary);
    printf("Availability: %s\n", availability);

    if (is_authorized)
        printf("Candidate is authorized to work in Canada\n\n");

    else
    {
        printf("Candidate is NOT authorized to work in Canada\n\n");
    }

    return 0;
}