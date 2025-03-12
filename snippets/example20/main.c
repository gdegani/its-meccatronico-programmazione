#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLENGTH 1000
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
    const char *tok;
    tok = strtok(line, DELIMITER);

    // Loop through the tokens in the line
    while (tok != NULL && counter < 3) {
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
        tok = strtok(NULL, DELIMITER); // Get the next token
        counter++;
    }
}

int main(int argc, char *argv[]) {
    FILE *inputFile;
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

    // Print the records in a formatted manner
    printf("Student Records:\n");
    printf("%-10s %-20s %-5s\n", "ID", "Name", "Grade");
    printf("----------------------------------------\n");
    for (int j = 0; j < counter; j++) {
        printf("%-10d %-20s %-5d\n", records[j].id, records[j].name, records[j].grade);
    }

    return 0;
}