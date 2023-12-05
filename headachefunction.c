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
	char lineheadache[200];

	fgets(linebp, 200, fp);
	lineheadache[strcspn(lineheadache, "\n")] = 0;

	printf("%s\n", lineheadache);
	}
}

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
