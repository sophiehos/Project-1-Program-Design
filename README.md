# Project-1-Program-Design
Project 1, Program Design
You are named project manager for the Spring Fling event of your organization, which
meant that you and your committee have to organize all the details including location,
food, and activities. After dividing up the tasks, you are in charge of finding the best deal
for the location and food. After researching the local possibilities, you have considered
three locations: Holiday House, Fun Center, and Party Plaza.
Each place charges a minimum fee for the first hour of room rental, and an additional fee
every hour in excess of the first hour. The maximum duration possible for reserving per
day is 10 hours. There is a maximum charge for room rental for any given day.
Write a program that calculates and prints the charge for a selected location, the duration,
and food (based on the number of people attending).
Location First Hour of
room rental
(minimum)
Hourly Cost
after the First
Hour
Maximum room
rental charge per
day
Room
capacity
Cost per
person
for food
Holiday
House
$400 $200 $1800 200 $10
Fun
Center
$300 $150 $1300 100 $20
Party
Plaza
$250 $120 $800 150 $15
Example input/output #1:
Please select from the following menu: 1. Holiday House, 2.
Fun Center, 3. Party Plaza
Enter location selection: 1
Enter hours: 3
Enter number of people: 200
Charge($): $2800
Example input/output #2:
Please select from the following menu: 1. Holiday House, 2.
Fun Center, 3. Party Plaza
Enter location selection: 2
Enter hours: 9
Enter number of people: 100
Charge($): $3300
Requirements
1. Name your program planning.c
2. The user enters the location selection, enter the number of hours, and number
of people. The program calculates and prints the charge.
3. Your program should validate the location selection. If the selection is not in
the range of 1 to 3, print a message and exit the program.
4. Your program should validate the hours rented. If the number entered is less
than 1 or great than 10, print a message and exit the program.
5. Your program should validate the number of people. If the number of people
entered is less than 1 or greater than the room capacity, print a message and
exit the program.
Before you submit
1. Compile with –Wall. –Wall shows the warnings by the compiler. Be sure it
compiles on student cluster (sc.rc.usf.edu) with no errors and no warnings. All
projects are graded on the student cluster.
gcc –Wall planning.c
2. Be sure your Unix source file is read & write protected. Change Unix file
permission on Unix:
chmod 600 planning.c
3. Test your program with the shell script on Unix:
chmod +x try_planning
./try_planning
4. Download the program planning.c from student cluster and submit it on
Canvas>Assignments.
Grading
Total points: 100
1. A program that does not compile will result in a zero.
2. Runtime error and compilation warning 5%
3. Commenting and style 15%
4. Functionality 80%
Programming Style Guidelines
The major purpose of programming style guidelines is to make programs easy to read and
understand. Good programming style helps make it possible for a person knowledgeable
in the application area to quickly read a program and understand how it works.
1. Your program should begin with a comment that briefly summarizes what it does.
This comment should also include your name.
2. In most cases, a function should have a brief comment above its definition
describing what it does. Other than that, comments should be written only needed
in order for a reader to understand what is happening.
3. Variable names and function names should be sufficiently descriptive that a
knowledgeable reader can easily understand what the variable means and what the
function does. If this is not possible, comments should be added to make the
meaning clear.
4. Use consistent indentation to emphasize block structure.
5. Full line comments inside function bodies should conform to the indentation of
the code where they appear.
6. Macro definitions (#define) should be used for defining symbolic names for
numeric constants. For example: #define PI 3.141592
7. Use names of moderate length for variables. Most names should be between 2
and 12 letters long.
8. Use underscores to make compound names easier to read: tot_vol or
total_volumn is clearer than totalvolumn
