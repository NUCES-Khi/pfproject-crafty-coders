/*
 *Programmers: Layyana Junaid, Alisha Zaidi, Zoha Ahmed 
 *Description: Health Bot, a chatbot designed to access some symptoms and access the user
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Row 6
#define Col 6
#define Rows 4
#define Cols 4

#define REDIRECT_URL "https://www.google.com/maps/search/hospitals/"
int size=100;
int input;

int hospitals(int input) 
{
    char command[] = "start";
    char space[] = " ";
    char* args[4];
    int should_redirect = 0;


    if(input == 5) 
    {
        should_redirect = 1;
    }

    if(should_redirect == 1) 
    {
        args[0] = command;
        args[1] = space;
        args[2] = REDIRECT_URL;
        args[3] = NULL;

        char combined_command[100];
        sprintf(combined_command, "%s%s%s", args[0], args[1], args[2]);

        system(combined_command);
    }
    return 0;
}


void read_file(FILE *fp) 
{
    while (!feof(fp)) {
        char line[200];
        fgets(line, 200, fp);
        line[strcspn(line, "\n")] = 0;
        printf("%s\n", line);
    }
}

// printing headache table
void print_HeadacheTable(char HeadacheTable[][Col][200], int rowa, int cola) {
    int m, n;
    for (m = 0; m < rowa; m++) {
        for (n = 0; n < cola; n++) {
            printf("%s\t", HeadacheTable[m][n]);
        }
        printf("\n");
    }
}

// function of headache
void Headache(int HeadacheOption) {
    char HeadacheTable[Row][Col][200] = {
        {"|1. Frontal Lobe |", "|2. Occipital Lobe|"},
        {"|3. Temporal Lobe|", "|4. Parietal Lobe |"},
        {"|5. Other        |", ""}
    };

    printf("Which part of your head hurts?\n");

    // Calling the function
    print_HeadacheTable(HeadacheTable, Row, Col);

    printf("Select the option: ");
    scanf("%d", &HeadacheOption);

    if (HeadacheOption == 1) {
        FILE *fp = fopen("headache1.txt", "r");
        read_file(fp);
    } else if (HeadacheOption == 2) {
        FILE *fp = fopen("headache2.txt", "r");
        read_file(fp);
    } else if (HeadacheOption == 3) {
        FILE *fp = fopen("headache3.txt", "r");
        read_file(fp);
    } else if (HeadacheOption == 4) {
        FILE *fp = fopen("headache4.txt", "r");
        read_file(fp);
    } else if (HeadacheOption == 5) {
        // Letting the person input "other" option
        char headother[200];
        printf("Enter the other type of headache that you are having: ");
        fgets(headother, sizeof(headother), stdin);
        size_t len = strlen(headother);
        printf("I'm sorry but this problem is too complex for me to handle as an AI healthbot.\n");
    } else {
        printf("You have entered an incorrect option\n");
    }
}

#define Rows 4
#define Cols 4

//printing cough table
char CoughTable[Rows][Cols][20] = {
                    {"1. Dry Cough", "2. Paraoxysmal Cough",},
                    {"3. Wet Cough ", "4. Other"}
                };

void print_CoughTable(char CoughTable[][Cols][20], int row, int col) {
                    int a, b;
                    for(a = 0; a < row; a++) {
                      for(b = 0; b < col; b++) {
                          printf("%s\t", CoughTable[a][b]);
         } //closing first for
         printf("\n");
        } //closing second for
     }//function for cough table is completed

// cough funtion declaration
void cough_function(int coughOption) {
        FILE *fp = fopen("cough.txt", "r");
        read_file(fp);
        print_CoughTable(CoughTable, Rows, Cols);
        printf("Select the option: ");
        scanf("%d", &coughOption);
        if (coughOption == 1) {
            FILE *fp = fopen("cough1.txt", "r");
            read_file(fp);
        } else if (coughOption == 2) {
            FILE *fp = fopen("cough2.txt", "r");
            read_file(fp);
        } else if (coughOption == 3) {
            FILE *fp = fopen("cough3.txt", "r");
            read_file(fp);
        } else if (coughOption == 4) {
            char other[100];
            printf("Enter the type of cough you are experiencing: ");
            fgets(other, sizeof(other), stdin);
            size_t len = strlen(other);
            printf("I am sorry, I cannot assess this problem as it is very complex for me!");
        } else {
            printf("You have entered an incorrect option!");
        }
    }


// fever function declaration
void fever_function(int temp) {
         if (temp < 90)
         {
            printf("The reading you have taken is incorrect, so please try again");
        } else if (temp > 105) {
            printf("Immediately rush to the hospital.");
        } else if (temp >= 101 || temp < 104) {
            printf("Reading is greater than 103\n");
            FILE *fp = fopen("veryhighfever.txt", "r");
            if (fp == NULL) {
                printf("Error opening file!");
                return;
            }
            read_file(fp);
            fclose(fp);
        } else if (temp==100) {
            printf("Reading is greater than 101\n");
            FILE *fp = fopen("mildfever.txt", "r");
            if (fp == NULL) {
                printf("Error opening file!");
                return;
            }
            read_file(fp);
            fclose(fp);
        } 
}

void BloodPressure(int bpup, int bpdown, char height){
  printf("If your height is between 0ft - 5ft, enter s.");
  printf("\n");
  printf("If your height is between 5ft - 8ft, enter t.");
  printf("\n");
  printf("Height: ");
  scanf(" %c", &height);
  printf("What is the systolic blood pressure (upper): ");
  scanf(" %d", &bpup);
  printf("\n");
  printf("What is the diastolic blood pressure (lower): ");
  scanf(" %d", &bpdown);

  if (height == 's') {
     if (bpup <= 115 && bpup > 80 && bpdown >= 40 && bpdown <= 75) {
        FILE *fp = fopen("bp1.txt", "r");
        read_file(fp);
                }//ending first if


                else if (bpup <= 130 && bpup >= 116 && bpdown >= 76 && bpdown <= 90 ) {
                 printf("Congratulations! Your blood pressure is normal!");
                 printf("\n");
                    }//ending first else if


                    else if (bpup <= 180 && bpup > 131 && bpdown > 90 && bpdown < 110) {
                        FILE *fp = fopen("bp2.txt", "r");
                        read_file(fp);
                     }//ending second else if


                     else {
                      printf("Please make sure you have entered the correct values, since the reading you have entered is not possible.");
                      printf("\n");
                     }//ending else
              }//ending first height if

              if (height == 't') {                
                  if (bpup <= 110 && bpup > 75 && bpdown >= 35 && bpdown <= 70) {
                    FILE *fp = fopen("bp1.txt", "r");
                    read_file(fp);
                     }//ending first if


                     else if (bpup <= 125 && bpup >= 111 && bpdown >= 71 && bpdown <= 85 ) {
                         printf("Congratulations! Your blood pressure is normal!");
                         printf("\n");
                     }//ending first else if


                     else if(bpup <= 175 && bpup > 125 && bpdown > 85 && bpdown < 105) {
                        FILE *fp = fopen("bp2.txt", "r");
                        read_file(fp);
                     }//ending second else if


                     else {
                      printf("Please make sure you have entered the correct values, since the reading you have entered is not possible.");
                      printf("\n");
                     }//ending else
              }//ending second height if
            }//Our bp function has ended here

    int main() 
    {
        
        printf("Hello! Welcome to Healthbot. You are now using an AI tool which will assist you by looking at the problem you're facing\n"); 
        printf("then it will give you the solution on what should be done. Please note that that it is  an actual doctor,it will only assist you \n" );
        printf("In matters of serious medical emergencies, consult a doctor ASAP. Note: Before the use of any medication prescribed by the healthbot\n");
        printf("carefully conduct your own research regarding the medicine. Thank you!\n");
        printf("The Chatbot can access you with the following symptoms:\n");
        printf( "| 1-Fever | 2-Cough | 3-Headache | 4-Blood Pressure | 5-Hospital Locations | \n" );
    int temp;
    int option, coughOption, HeadacheOption;
    char c; // the check to stop the program

    int bup, bpdown;
    char height;

    do {
        printf("Which symptom do you want to access? (Enter the number next to that symptom): ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("What is your body temperature? (In case you haven't measured it, measure it using a thermometer for 5 mins): ");
                scanf("%d", &temp);
                fever_function(temp);
                break;
            case 2:
                cough_function(coughOption);
                break;
            case 3:
                Headache(HeadacheOption);
                break;
            case 4:
                BloodPressure(bup, bpdown, height);
                break;
            case 5:
                input = 5;
                hospitals(input);
                break;
            default:
                printf("Invalid option selected.\n");
        }

        printf("Do you want to get check on other symptoms? (y/n): \n");
        scanf(" %c", &c);

    } while (c == 'y' || c == 'Y');

    return 0;

} // end main

