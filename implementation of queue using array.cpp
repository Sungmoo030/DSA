#include<stdio.h>
#include<conio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int queue[SIZE], front = -1, rear = -1;

int main()
{
   int value, choice;
     printf("\tLINEAR  QUEUE USING ARRAY \n");
     printf("\t------------------------\n");
      printf("\t1.Insertion\n\t2. Deletion\n\t3. Display\n\t4. Exit");
     
  do{
     printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 enQueue(value);
		 break;
	 case 2: deQueue();
		 break;
	 case 3: display();
		 break;
	 case 4: printf("exit");
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
   while(choice!=4);
   return 0;
}
void enQueue(int value){
   if(rear == SIZE-1)
      printf("\nQueue is Full!!! Insertion is not possible!!!");
   else{
      if(front == -1){
      	front = 0;
	  }
	 
      rear++;
      queue[rear] = value;
      printf("\nInsertion success!!!");
   }
}
void deQueue(){
   if(front == rear)
      printf("\nQueue is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", queue[front]);
      front++;
      if(front == rear)
	 front = rear ;
   }
}
void display(){
   if(rear == -1 ) {
      printf("\nQueue is Empty!!!");
   } else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++)
    printf("%d\t",queue[i]);
   }
}
