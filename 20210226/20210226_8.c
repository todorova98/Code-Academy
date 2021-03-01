/*Задача 8.
Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
struct Stack{
int *contents;
int top;
};
Stack create(int size); void destroy(Stack s);
int pop(); void push()
int top()
int isFull(); int isEmpty(void)*/
#include <stdio.h>
#include <stdlib.h>
 
// A structure to represent a stack
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};
typedef struct Stack Stack;
// function to create a stack of given capacity. It initializes size of
// stack as 0
Stack* createStack(unsigned capacity)
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
 
// Stack is full when top is equal to the last index
int isFull(Stack *stack)
{
    return stack->top == stack->capacity - 1;
}
 
// Stack is empty when top is equal to -1
int isEmpty(Stack *stack)
{
    if(stack->top == -1){
    return 1;
    }
    return 0;
}
 
// Function to add an item to stack.  It increases top by 1
void push(Stack *stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
 
// Function to remove an item from stack.  It decreases top by 1
int pop(Stack *stack)
{
    if (isEmpty(stack))
        return 1;
    return stack->array[stack->top--];
}
 
// Function to return the top from stack without removing it
int peek(Stack *stack)
{
    if (isEmpty(stack))
        return 1;
    return stack->array[stack->top];
}
 
int main()
{
    int size,elms,a;
    printf("How big will be the stack?");
    scanf("%d",&size);
    Stack *stack = createStack(size);
    printf("How many elements you want to enter: ");
    scanf("%d",&elms);
    for(int i=0;i<elms;i++){
        scanf("%d",&a);
        push(stack,a);
    }
    printf("Element at top of the stack: %d\n", peek(stack));
    printf("Elements: \n");
    // print stack data
    while (!isEmpty(stack))
    {
        int data = pop(stack);
        printf("%d\n", data);
    }
    printf("Stack full: %s\n", isFull(stack) ? "true" : "false");
    printf("Stack empty: %s\n", isEmpty(stack) ? "false" : "true");
    return 0;
}