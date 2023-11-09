#include <stdio.h>
#define CAP 10

int main(){
	int seats[CAP] = {0};
	printf("Flight Seating System\nType 1 for \"First Class.\"\nType 2 for \"Economy.\"\n\n");

	int choice = 0;
	int firstclassnum = 0;
	int econnum = 0;
	char alt;
	for (int i = 0; i<CAP; i++){
		printf("Enter your seating choice:");
		scanf("%d", &choice);
		if (choice == 1) {
			if (firstclassnum < 5) {
				firstclassnum++;
				seats[firstclassnum - 1] = 1;
				printf("| Boarding Pass #   \t|\n| Seat Number: %d\t|\n| Section: First Class\t|\n\n", firstclassnum);
			} else {
				printf("%s", " Sorry, all first class seats are full.\nWould you like a seat in economy? Enter y or n:");
				scanf("%c", &alt);
				if (alt = 'y'){
					if (econnum < 5) {
						econnum++;
						seats[(CAP - 4) + econnum - 1] = 1;
						printf("| Boarding Pass #   \t|\n| Seat Number: %d\t|\n| Section: Economy\t|\n\n", econnum);
					}
				}
				else
					printf("%s", "The next flight leaves in 3 hours.");
			}

		} else if (choice == 2) {
			if (econnum < 5) {
				econnum++;
				seats[(CAP - 4) + econnum - 1] = 1;
				printf("| Boarding Pass #   \t|\n| Seat Number: %d\t|\n| Section: Economy\t|\n\n", econnum);
			} else {
				printf("%s", " Sorry, all economy class seats are full.\nWould you like a seat in first class? Enter y or n:");
				scanf("%c", &alt);
				if (alt = 'y'){
					if (firstclassnum < 5) {
						firstclassnum++;
						seats[firstclassnum - 1] = 1;
						printf("| Boarding Pass #   \t|\n| Seat Number: %d\t|\n| Section: First Class\t|\n\n", firstclassnum);
					}
				}
				else
					printf("%s", "The next flight leaves in 3 hours.");
			}
		}}
		return 0;
}
