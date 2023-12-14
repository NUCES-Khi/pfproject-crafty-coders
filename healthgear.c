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

void BloodPressure(int bpup, int bpdown, char height){
  printf("If your height is between 0ft - 5ft, enter s.");
  printf("\n");
  printf("If your height is between 5ft - 8ft, enter t.");
  printf("\n");
  scanf(" %c", &height);
  printf("What is the systolic blood pressure (upper)");
  scanf(" %d", &bpup);
  printf("\n");
  printf("What is the diastolic blood pressure (lower)");
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

//Making a function for headache
          void Headache(int HeadacheOption ) {
          printf("Which part of your head hurts?");
          printf("\n");
                         
                        // Calling the function
                      print_HeadacheTable(HeadacheTable, Row, Col);

                      printf("Select the option: ");
                      scanf("%d", &HeadacheOption);
                       if (HeadacheOption == 1){
                    FILE *fp = fopen("headache1.txt", "r");
                    read_file(fp);
                      }//ending first if
                     
                       else if (HeadacheOption == 2) {
                    FILE *fp = fopen("headache2.txt", "r");
                    read_file(fp);
                        }//ending first else if

                      else if (HeadacheOption == 3) {                    
                    FILE *fp = fopen("headache3.txt", "r");
                    read_file(fp);
                       }//ending else if

                      else if (HeadacheOption == 4) {
                    FILE *fp = fopen("headache4.txt", "r");
                    read_file(fp);
                       }//ending else if



                      else if (HeadacheOption == 5) {
                       //Letting the person input "other" option
                         char headother[200];
                         printf("Enter the other type of headache that you are having: ");
                         fgets(headother, sizeof(headother), stdin);
                         size_t len = strlen(headother);
                         printf("I'm sorry but this problem is too complex for me to handle as an AI healthbot.");
                      }//ending else if

                      else {
                           printf("You have entered an incorrect option");
                           printf("\n");
                      }//ending else
                   }//function for headache has ended


int main(int argc, char const *argv[]) {
float temp;
int option; // input from the user, to choose the symptom they want to cater 
FILE *fp = fopen("maintable.txt", "r");
read_file(fp);
printf("Which symptom do you want to access?(enter the number next to that symptom): ");
scanf("%d",&option);
switch(option) {
case 1:
// calling of the fever function
printf("What is your body temperature? (incase you haven't measure it, measure it using thermometer for 5 mins): ");
scanf("%f", &temp); 
fever_function(temp);
break;
} // end switch
return 0;
} // end main 
