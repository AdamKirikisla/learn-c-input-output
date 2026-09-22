# Learn C Input Output

This is my first C program. I created it to get familiar with basic C input/output, variables, and simple user interaction.

## What the program does

The program asks the user to enter:

- full name
- age
- desired position
- expected salary
- availability
- whether they are authorized to work in Canada

It then prints a confirmation summary back to the screen.

## Example of the program flow

```text
Job application form
Please fill in the application

Enter your full name: Alice Smith
Enter your age: 22
Indicate your desired position: Software Developer
Indicate your expected salary (hourly): 25.50
Indicate your availability (full-time, part-time): full-time
Are you authorized to work in Canada? (1 = yes, 0 = no): 1
```

The program then displays a confirmation like:

```text
Thank you for applying for the Software Developer position.
Application Confirmation!
---------------------------------
Full Name: Alice Smith
Age: 22
Desired Position: Software Developer
Expected Salary: $25.50
Availability: full-time
Candidate is authorized to work in Canada
```

## How to compile it

From the project folder, run:

```bash
gcc learn-c-input-output.c -o learn-c-input-output
```

Then run:

```bash
./learn-c-input-output
```

On Windows, you may run:

```bash
learn-c-input-output.exe
```

## What I learned

This project helped me practice:

- `printf()` for output
- `scanf()` and `fgets()` for input
- variables such as `int`, `float`, and `char`
- `if` / `else` statements
- storing and displaying user-provided data
