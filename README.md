# Project Proposal:
#### What is a Heath Gear?
##### A Health Gear is a chatbot, which aims to access a user with health and medical needs.
#### How will it work?
##### It will display a series of options, which will display the options of health issues this chatbot can help with.
##### The user will enter the number of the problem he is going through. Using switchcase we will execute the function of choosing the options ( the option which the user will choose ) and for the respective options, the respective outputs will be stored. For example, if the user is experiencing fever, he will enter the number “1”, as fever is one “1”. Based on the data provided by the user the health gear provides general information about possible causes of fever( or the other illness), such as viral or bacterial infections, environmental factors, or underlying medical conditions.
##### In order to develop this code we have incorporated the following c-functions:
##### 1- Functions
##### 2- 2D-Arrays[for table printing].
##### 3- Strings.
##### 4- Conditional statements
##### 5- Filing.
##### 6- switch-statements.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Video Presentation:
###### [https://www.canva.com/design/DAF3aCVXsKA/xSLKlRIwH6ivKXfHOjZKrg/watch?utm_content=DAF3aCVXsKA&utm_campaign=designshare&utm_medium=link&utm_source=editor]
##### (Sir we made a video of 3 mins but it was not uploading hence we compressed it and uploaded it, which is why the time frame was also reduced)
https://github.com/NUCES-Khi/pfproject-crafty-coders/assets/142867946/5b7530cc-9042-406f-a9b8-210cb9156dda



---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Code Video:



https://github.com/NUCES-Khi/pfproject-crafty-coders/assets/142867946/d7f97d25-f507-4285-99d4-f35e1f2cb5e3




---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# PROJECT REPORT:
Proposal idea:Our project Health Gear is a chatbot which aims to provide a user with health and medical needs.It recommends medicines according to the symptoms provided by the user.This idea was chosen by us to assist people who cannot afford expensive medical treatments.Our HealthBot aims to bridge this gap by providing cost-effective assistance and guidance.It also ensures that individuals can seek assistance whenever they need it, without having to schedule appointments or visit healthcare facilities during specific hours.Along with it, the healthbkt will allow users to rapidly learn about the condition they are experiencing and how it may be handled. It will work by displaying a series of options related to health which this chatbot can help with.The user will select the problem he is going through and based on those problems our Healthbot will provide home remedies and recommended medicines.

Data structures used:The primary data structure used in our code is a multidimensional array for the printing of table.The menu of health-related options is represented using an array. Each option is a string, and the options are organized into rows and columns. For instance, "Fever" corresponds to row 0, column 0.The print_table function uses nested loops to iterate through the array and print the health information table in a structured format.Another similar array (CoughTable) is used specifically for information related to cough types. This array follows the same structure and is printed using the print_CoughTable function.We have added it so that we can modify or extend the list of health options. Additional symptoms or conditions can be added by simply updating the array initialization.Moreover efficient retrieval of health options from the array is possible due to the use of indices, which enhances the program's overall performance.#define statements are used to define the sizes of the rows and columns of headache and cough tables.Using these constants improves code readability and makes it easier to modify the size of tables if needed.Arrays of characters (char command[], char space[], char* args[4], char combined_command[100] are used to store strings related to commands and URLs for opening a web page.Various local arrays are used for reading and storing lines from files.

Major Algorithms and logics used: The program uses a menu-driven approach, prompting the user to choose a symptom (e.g., fever, cough, headache) based on numerical options. A switch statement is used to direct the program flow according to the user's choice. Print Table Function (print_table and print_CoughTable): It uses nested loops to iterate through the 3D array and print the health information table or cough table.Array(rows * cols)involves nested loops iterating over rows and columns. Cough Function (cough): It involves a series of conditional statements to implements a decision tree based on user input to identify the type of cough and provides detailed information and recommendations. Blood Pressure Function (BloodPressure): The function involves nested conditional statements, to determine the user's blood pressure status based on input values. File Reading(read_file):The read_file function reads and prints the content of files line by line using a while loop. It uses fgets to read lines and printf to print them. Hospital Redirect Logic (hospitals):The hospitals function redirects the user to a web page if the user selects the hospital option.It constructs a command to open a web page using system.

Chance of Improvement: Break down the program into smaller functions to enhance readability, maintainability, and code reuse. Consider using dynamic data structures (e.g., linked lists, dynamic arrays) if the program needs to handle a dynamic set of symptoms or conditions. Clearer instructions, error messages, and enhanced user experience can improve interaction with users.
[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/j0WbCUcA)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=13059786&assignment_repo_type=AssignmentRepo)

