#include <stdio.h>

#define ARR_SIZE 6
stack[ARR_SIZE];
int top = -1;

int push(value){
    if (top == ARR_SIZE - 1) {
        printf("Array is full, cannot add new value\n");
        return 1;
    } else{
        top = top + 1;
        stack[top] = value;
        return 0;
    }
}

int pop(void){
    if (top == -1) {
        printf("No elements in array\n");
        return 1;
    } else {
        stack[top] = 0;
        top = -1;
    }
}

int main(void) {
    push(3);
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);

    return (0);
}