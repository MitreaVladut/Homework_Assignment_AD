#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j   = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    srand(time(NULL));
    int choice;
    printf("Choose an option:\n");
    printf("1. Manual input of book sizes\n");
    printf("2. Randomly generate book sizes\n");
    scanf("%d", &choice);

    int totalBooks, num_employees, i;
    int books[20000];
    if (choice == 1) {
        // Manual input
        printf("Enter the number of employees: ");
        scanf("%d", &num_employees);

        printf("Insert the amount of books you want: ");
        scanf("%d", &totalBooks);

        printf("Now for the number of pages for each book.\n");
        for (i = 0; i < totalBooks; i++) {
            printf("Pages for Book[%d]: ", i + 1);
            int bookPages;
            scanf("%d", &bookPages);
            books[i] = bookPages;
        }
    } else if (choice == 2) {
        // Randomly generate book sizes
        num_employees = rand() % 10000 + 1; // Random amount of employees from 1 to 10000

        printf("\nNumber employees:%d", num_employees);

        totalBooks = rand() % 20000 + 1; // Random amount of books from 1 to 20000
        while (totalBooks <= num_employees / 2)
            totalBooks = rand() % 20000 + 1;

        printf("\nNumber Books:%d\n\n", totalBooks);
        for (i = 0; i < totalBooks; i++) {
            books[i] = rand() % 10000 + 100; // Random sizes between 100 and 10099
        }
    } else {
        printf("Invalid choice. Please choose 1 or 2.\n");
        return 1; // Exit program if choice is invalid
    }
    insertionSort(books, totalBooks); // Sorting of the books

    int num_books = totalBooks;
    int total_pages = 0;
    for (int i = 0; i < num_books; i++) {
        total_pages += books[i];
    }

    int avg_pages = total_pages / num_employees;


    int current_sum = 0;
    int sections = 1;

    printf("Employee 1: ");

    for (i = 0; i < num_books; i++) { // The distribution of the books
        current_sum += books[i];
        if (current_sum > avg_pages * sections) {
            printf("\nEmployee %d: ", sections + 1);
            sections++;
        }
        printf("%d ", books[i]);
    }

    printf("\nAverage pages per employee: %d\n", avg_pages);

    return 0;
}
