// #region part1
#include <stdio.h>
#include <stdlib.h>

// Define a structure to store course information
struct course {
    int marks;
    char subject[30];
};

int main() {
    struct course *ptr;
    int noOfRecords;

    // Ask the user for the number of records
    printf("Enter the number of records: ");
    scanf("%d", &noOfRecords);
// #endregion part1
// #region part2
    // Allocate memory for the number of records entered by the user
    ptr = (struct course *)malloc(noOfRecords * sizeof(struct course));
    // Loop to get the subject name and marks for each record

    for (int i = 0; i < noOfRecords; i++) {
        printf("Enter subject %d: ", i + 1);
        scanf("%s", (ptr + i)->subject);
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &(ptr + i)->marks);
    }

    // Display the entered information
    printf("Displaying Information:\n");
    for (int i = 0; i < noOfRecords; ++i) {
        printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
    }

    // Free the allocated memory
    free(ptr);
    return 0;
// #endregion part2
}