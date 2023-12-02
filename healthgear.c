/* Project Name: Health Gear
 * Group members: Layyana, Alisha, Zoha 
 *
 *
 **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_file(FILE *fp) {
	while (!feof(fp)) {
	char line[200];

	fgets(line, 200, fp);
	line[strcspn(line, "\n")] = 0;

	printf("%s\n", line);
	}
}

void fever_function(float temp){
	if (temp< 90) {
    printf("The reading you have taken is incorrect so please try again");
    }
    else if (temp > 99 && temp < 101) {
    FILE *fp = fopen("mildfever.txt", "r");
    read_file(fp);
    }
    else if (temp > 101 && temp < 103) {
    FILE *fp = fopen("highfever.txt", "r");
    read_file(fp);
    }
    else if (temp > 103 && temp < 105) {
    FILE *fp = fopen("veryhighfever.txt", "r");
    read_file(fp);
    }
    else if (temp > 105) {
    	printf("Immediately rush to the hospital.");
    }	

    } // end of fever function 
void cough_function(int coughOption, int age) {
	FILE *fp = fopen("cough.txt", "r");
	read_file(fp);
	printf_CoughTable(CoughTable, Rows, Cols);
	printf("Select the option: ");
	scanf("%d",&coughOption);
	if (coughOption == 1) {
	FILE *fp = fopen("cough1.txt", "r");
	read_file(fp);
	}
	else if (coughOption == 2) {
	FILE *fp = fopen("cough2.txt", "r");
	read_file(fp);
	}
	else if (coughOption == 3) {
	FILE *fp = fopen("cough3.txt", "r");
	read_file(fp);	
	}
	else if (coughOption == 4) {
	char other[100];
	printf("Enter the type of cough you are experiencing: ");
	fgets(other, sizeof(other), stdin);
	size_t len = strlen(other);
	printf("I am sorry, I can not access this problem as it is very complex for me!");
    } // ending the cough table options
    else {
    printf("You have entered an incorrect option!");
    } 
} // end of cough function 

int main(int argc, char const *argv[]) {
float temp;
int option; // input from the user, to choose the symptom they want to cater 
FILE *fp = fopen("maintable.txt", "r");
read_file(fp);
printf("Which symptom do you want to access?(enter the number next to that symptom): ");
scanf("%d",&option);
switch(option) {
case '1':
// calling of the fever function
printf("What is your body temperature? (incase you haven't measure it, measure it using thermometer for 5 mins): ");
scanf("%f", &temp); 
fever_function(temp);
break;
} // end switch
return 0;
} // end main 
