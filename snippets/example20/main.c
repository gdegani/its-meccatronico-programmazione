#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLENGTH 100
#define MAXLINES 1000
#define DELIMITER ";"

// Define a structure to hold the record data
struct Record {
    unsigned int id;
    unsigned int grade;
    char name[MAXLENGTH];
};

// Function to parse a line of input and populate a Record structure
void parseLine(char *line, struct Record *currentRecord) {
    int counter = 0;
    char *tok;
    char *rest = line;

    // Loop through the tokens in the line
    while ((tok = strsep(&rest, DELIMITER)) != NULL && counter < 3) {
        switch (counter) {
            case 0:
                currentRecord->id = atoi(tok); // Convert the first token to an integer for id
                break;
            case 1:
                strcpy(currentRecord->name, tok); // Copy the second token to the name field
                break;
            case 2:
                currentRecord->grade = atoi(tok); // Convert the third token to an integer for grade
                break;
            default:
                break;
        }
        counter++;
    }
}

// Function to compare records based on grade in descending order
int compareRecords(const void *a, const void *b) {
    struct Record *recordA = (struct Record *)a;
    struct Record *recordB = (struct Record *)b;
    return recordB->grade - recordA->grade;
}

int main(int argc, char *argv[]) {
    FILE *inputFile, *outputFile;
    char line[MAXLENGTH];
    struct Record records[MAXLINES];
    int counter = 0;

    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read each line from the file and parse it into a Record structure
    while (fgets(line, MAXLENGTH, inputFile) && counter < MAXLINES) {
        parseLine(line, &records[counter]);
        counter++;
    }

    // Close the input file
    fclose(inputFile);

    // Filter records with grade >= 18
    struct Record filteredRecords[MAXLINES];
    int filteredCounter = 0;
    for (int i = 0; i < counter; i++) {
        if (records[i].grade >= 18) {
            filteredRecords[filteredCounter++] = records[i];
        }
    }

    // Sort the filtered records in descending order based on grade
    qsort(filteredRecords, filteredCounter, sizeof(struct Record), compareRecords);

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        return EXIT_FAILURE;
    }

    // Print and write the filtered and sorted records
    printf("Student Records:\n");
    printf("%-10s %-20s %-5s\n", "ID", "Name", "Grade");
    printf("----------------------------------------\n");
    fprintf(outputFile, "Student Records:\n");
    fprintf(outputFile, "%-10s %-20s %-5s\n", "ID", "Name", "Grade");
    fprintf(outputFile, "----------------------------------------\n");
    for (int j = 0; j < filteredCounter; j++) {
        printf("%-10d %-20s %-5d\n", filteredRecords[j].id, filteredRecords[j].name, filteredRecords[j].grade);
        fprintf(outputFile, "%-10d %-20s %-5d\n", filteredRecords[j].id, filteredRecords[j].name, filteredRecords[j].grade);
    }

    // Close the output file
    fclose(outputFile);

    return 0;
}