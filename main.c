#include <stdio.h>
#include <stdbool.h>

int MAXSIZE = 5;
int stack[5];
int top = NULL;

bool isEmpty(){
  if(top==-1)
    return true;
  else
    return false;

}

bool isFull(){
  if(top == MAXSIZE)
    return true;
  else
    return false;

}

int peek(){
  return stack[top];
}

int pop(){
  int data;
  if(!isEmpty()){
    data = stack[top];
    top--;
    return data;
  }
  else{
    printf("Stack is Empty. \n");

  }
}

void push(int data){
  if(!isFull()){
    top++;
    stack[top]=data;
  }
  else{
    printf("Stack is Full\n");
  }
}


int main(void) {
  int item;

  printf("Enter elements to insert data in stack: \n");

  while(!isFull()){
    scanf("%d ", &item);
    push(item);
  }
  
  printf("Elelment at the TOP: %d\n", peek());
  printf("Satck is Full; %s\n", isFull()? "true": "false");
  printf("Satck is Empty; %s\n", isEmpty()? "true": "false");

  printf("Elements:\n ");
// Print Satck data
  while(!isEmpty()){
    int data = pop();
    printf("%d\n", data);
  }
  printf("Satck is Full; %s\n", isFull()? "true": "false");
  printf("Satck is Empty; %s\n", isEmpty()? "true": "false");

  return 0;


}
/////////////////////////////////////////
////////////////////////////////////////
/////////////////////////////////////////

#include <stdio.h>   
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void show();  
int main ()  
{  
      
    printf("How many numbers you want to push in the stack? ");   
    scanf("%d",&n);  
    printf("*********Stack operations using array*********");  
  
printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("\n\nChose one from the below options:\n");  
        printf("1.Push 2.Pop 3.Show 4.Exit");  
        printf("\n\nEnter your choice: ");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice: ");  
            }   
        };  
    }  
}   
  
void push ()  
{  
    int val;      
    if (top == n )   
    printf("\nOverflow \n ");   
    else   
    {  
        printf("Enter the value: ");  
        scanf("%d",&val);         
        top = top +1;   
        stack[top] = val;   
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else  
    top = top -1;   
}   
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
} 