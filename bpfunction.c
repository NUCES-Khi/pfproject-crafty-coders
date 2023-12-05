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
	char linebp[200];

	fgets(linebp, 200, fp);
	linebp[strcspn(linebp, "\n")] = 0;

	printf("%s\n", linebp);
	}
}

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
                    }
                }//ending first if


                 else if (bpup <= 130 && bpup >= 116 && bpdown >= 76 && bpdown <= 90 ) {
                         printf("Congratulations! Your blood pressure is normal!");
                         printf("\n");
                    }//ending first else if


                 else if (bpup <= 180 && bpup > 131 && bpdown > 90 && bpdown < 110) {
                    FILE *fp = fopen("bp2.txt", "r");
                    read_file(fp);
                    }
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
                    }
                     }//ending first if


                 else if (bpup <= 125 && bpup >= 111 && bpdown >= 71 && bpdown <= 85 ) {
                         printf("Congratulations! Your blood pressure is normal!");
                         printf("\n");
                     }//ending first else if


                 else if(bpup <= 175 && bpup > 125 && bpdown > 85 && bpdown < 105) {
                    FILE *fp = fopen("bp2.txt", "r");
                    read_file(fp);
                    }
                     }//ending second else if


                 else {
                      printf("Please make sure you have entered the correct values, since the reading you have entered is not possible.");
                      printf("\n");
                     }//ending else
              }//ending second height if
            }//Our bp function has ended here


