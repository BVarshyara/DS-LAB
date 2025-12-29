#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert() {
    int item;
    if (rear == MAX - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1)
        front = 0;
    printf("Enter element to insert: ");
    scanf("%d", &item);
    queue[++rear] = item;
    printf("Element %d inserted successfully.\n", item);
}

void delete() {
    if (front == -1 || front > rear) {
        printf("Queue Empty!\n");
        return;
    }
    printf("Deleted element: %d\n", queue[front]);
    front++;
    if (front > rear) {
        front = rear = -1;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice = 0;
    while (choice != 4) {
        printf("\n--- MENU ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            insert();
        else if (choice == 2)
            delete();
        else if (choice == 3)
            display();
        else if (choice == 4)
            printf("Exiting program.\n");
        else
            printf("Invalid choice! Try again.\n");
    }
    return 0;
}
