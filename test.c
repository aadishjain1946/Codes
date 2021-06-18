#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//student structure to store student information
struct StudInfo
{
    long stNr;
    char Name[10];
    int grade;
};
//function to list student data
void list(struct StudInfo student)
{
    printf("1. Student Number: %d\n", student.stNr);
    printf("2. Student Name: %s\n", student.Name);
    printf("3. Student Grade: %d\n", student.grade);
}
//function to search for a particular student using binary search, given student number
int binarySearch(long givenNr, struct StudInfo allStudent[], int n)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        //calculating mid value
        mid = (start + end) / 2;
        //checking if student found at mid position or not
        if (allStudent[mid].stNr == givenNr)
        {
            printf("Student Data Found: \n");
            list(allStudent[mid]);
            return 1;
        }
        //seraching on right half of the array
        else if (allStudent[mid].stNr < givenNr)
        {
            start = mid + 1;
        }
        //seraching on left half of the array
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}
//sorting the student array using bubble sort technique based on student name
void sortBubble(struct StudInfo allStudent[], int n)
{
    struct StudInfo temp;
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (strcmp(allStudent[i].Name, allStudent[i + 1].Name) > 0)
            {
                temp = allStudent[i];
                allStudent[i] = allStudent[i + 1];
                allStudent[i + 1] = temp;
            }
        }
    }
}
int main()
{
    //declaring student array with 5 students
    struct StudInfo allStudent[5] = {{93790, "MRET", 77},
                                     {963582, "ZEKI", 85},
                                     {977434, "AHMED", 100},
                                     {981229, "BAKI", 65},
                                     {991280, "OSMAN", 88}};
    int n = 5;
    //taking input from user for student number to search
    long givenNr;
    scanf("%d", &givenNr);
    int k = binarySearch(givenNr, allStudent, n);
    if (k == 0)
    {
        printf("No Student found with student number %d\n", givenNr);
    }
    //sorting array
    sortBubble(allStudent, n);
    printf("\nStudent array after sorting it based on name\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student #%d: \n", i + 1);
        list(allStudent[i]);
    }
}
