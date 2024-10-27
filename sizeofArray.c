#include<stdio.h>
#define MAX 10

void insertElement(int arr[], int size)
{
    if(size >= MAX){
        printf("Array is full.\n");

    }else{
        int value;
        printf("Enter element to add:");
        scanf("%d", &value);
        arr[size]=value;

        printf("Element added successfully.\n");
    }
}

void deleteElement(int arr[], int size)
{
    if(size == 0){
        printf("Array is empty, Nothing to delete.\n");

    }else{
        int pos;
        printf("Enter the position (0 to %d) to delete:", size - 1);
        scanf("%d", &pos);
        if(pos < 0 || pos >= size){
            printf("Invalid position.\n");

        }else{
            for(int i = pos; i < size - 1; i++){
                arr[i] = arr[i + 1];
            }
            printf("Element deleted successfully.\n");
        }
    }
}

void searchElement(int arr[], int size){
    if(size == 0){
        printf("Array is empty.\n");

    }else{
        int value;
        printf("Enter element to search:");
        scanf("%d", &value);
        int found = 0;
        for(int i = 0; i < size; i++){
            if(arr[i] == value){
                printf("Element %d found at position %d.\n", value, i);
                break;
            }
        }
    }
}

void displayElement(int arr[], int size){

    if(size == 0){
        printf("Array is empty.\n");

    }else{
        printf("Array elements:");
        for(int i = 0; i < size; i++){
            printf("%d", arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[MAX];
    int size = 0;
    int choice;

    do{
        printf(".........Menu........\n");
        printf("1: Insert element in Array\n");
        printf("2: Delete element from Array\n");
        printf("3: Search element in Array\n");
        printf("4: Display element of Array\n");
        printf("5: Exit\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            insertElement(arr, size);
            size++;
            break;

            case 2:
            deleteElement(arr, size);
            size--;
            break;

            case 3:
            searchElement(arr, size);
            break;

            case 4:
            displayElement(arr, size);
            break;

            case 5:
            printf("Exiting the program...");
            break;

            default:
            printf("Invalid choice.\n");

        }

    }while(choice != 5);

    return 0;
}

