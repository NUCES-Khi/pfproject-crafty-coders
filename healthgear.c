/* Project Name: Health Gear
 * Group members: Layyana, Alisha, Zoha 
 *
 *
 **/

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

void print_HeadacheTable(char HeadacheTable[][Col][200], int rowa, int cola) {
    int m, n;
    for (m = 0; m < rowa; m++) {
        for (n = 0; n < cola; n++) {
            printf("%s\t", HeadacheTable[m][n]);
        }
        printf("\n");
    }
}

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



void fever_function(int temp) 
{
   if (temp < 90)
    {
    printf("The reading you have taken is incorrect, so please try again");
} else if (temp > 105) {
    printf("Immediately rush to the hospital.");
} else if (temp >= 101 || temp < 104) {
    printf("Reading is greater than 103\n");
    FILE *fp = fopen("C:\\Users\\Techxcess\\Desktop\\Health gear\\veryhighfever.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!");
        return;
    }
    read_file(fp);
    fclose(fp);
} else if (temp==100) {
    printf("Reading is greater than 101\n");
    FILE *fp = fopen("C:\\Users\\Techxcess\\Desktop\\Health gear\\mildfever.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!");
        return;
    }
    read_file(fp);
    fclose(fp);
} 


}

void cough_function(int coughOption, int age) {
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

void BloodPressure(int bpup, int bpdown, char height) {
    // Function logic for blood pressure
}

void Headache(int HeadacheOption) {
    // Function logic for headache
}

int main() 
{
    printf("Hello! Welcome to Healthbot. You are now using an AI tool which will assist you by looking at the problem you're facing\n"); 
printf("then it will give you the solution on what should be done. Please note that that it is  an actual doctor,it will only assist you \n" );
printf("In matters of serious medical emergencies, consult a doctor ASAP. Note: Before the use of any medication prescribed by the healthbot\n");
 printf("carefully conduct your own research regarding the medicine. Thank you!\n");
  printf("The Chatbot can access you with the following symptoms:\n");
                           printf(  " | 1- Fever |  2- Cough  |  3- Headache | 4- Blood Pressure |\n" );
	
	
	
	
	int temp;
    int option, coughOption, age, HeadacheOption;

   
    printf("Which symptom do you want to access? (Enter the number next to that symptom): \n");
    scanf("%d", &option);

    switch (option) 
	{
        case 1:
            printf("What is your body temperature? (In case you haven't measured it, measure it using a thermometer for 5 mins): ");
            scanf("%f", &temp);
            fever_function(temp);
            break;
        case 2:
            cough_function(coughOption, age);
            break;
        case 3:
            Headache(HeadacheOption);
            break;
        case 5:
        	input = 5;
            hospitals(input);
            break;
		default:
            printf("Invalid option selected.");
    }

    return 0;
}

