1.	To implement Stack using arrays


#include <stdio.h>
int stack[100],i,j,choice=0,n,top=-1; void push();
void pop(); void peek(); void main ()
{


printf("Enter the number of elements in the stack "); scanf("%d",&n);
printf("****Stack operations using array****");


printf("\n	\n");
while(choice != 4)
{
printf("Chose one from the below options...\n"); printf("\n1.Push\n2.Pop\n3.Peek\n4.Exit"); printf("\n Enter your choice \n");
scanf("%d",&choice); switch(choice)
{
case 1:
{
push(); break;
}
case 2:
{
pop();
 
break;
}
case 3:
{
peek(); break;
}
case 4:
{
printf("Exiting	");
break;
}
default:
{
printf("Please Enter valid choice ");
}
};
}
}


void push ()
{
int val;
if (top == n )
printf("\n Overflow"); else
{
printf("Enter the value?"); scanf("%d",&val);
top = top +1; stack[top] = val;
 
}
}


void pop ()
{
if(top == -1) printf("Underflow"); else
top = top -1;
}
void peek()
{
for (i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
top = top -1; if(top == -1)
{
printf("Stack is empty");
}
}

 
2.	To implement Circular Queue using arrays



#include <stdio.h>


# define max 6
int queue[max]; // array declaration int front=-1;
int rear=-1;
// function to insert an element in a circular queue void enqueue(int element)
{
if(front==-1 && rear==-1) // condition to check queue is empty
{
 
front=0; rear=0;
queue[rear]=element;
}
else if((rear+1)%max==front) // condition to check queue is full
{
printf("Queue is overflow..");
}
else
{
rear=(rear+1)%max;	// rear is incremented
queue[rear]=element;	// assigning a value to the queue at the rear position.
}
}


// function to delete the element from the queue int dequeue()
{
if((front==-1) && (rear==-1)) // condition to check queue is empty
{
printf("\nQueue is underflow..");
}
else if(front==rear)
{
printf("\nThe dequeued element is %d", queue[front]); front=-1;
rear=-1;
}
else
{
printf("\nThe dequeued element is %d", queue[front]);
 
front=(front+1)%max;
}
}
// function to display the elements of a queue void display()
{
int i=front;
if(front==-1 && rear==-1)
{
printf("\n Queue is empty..");
}
else
{
printf("\nElements in a Queue are :"); while(i<=rear)
{
printf("%d,", queue[i]); i=(i+1)%max;
}
}
}
int main()
{
int choice=1,x; // variables declaration


while(choice<4 && choice!=0) // while loop
{
printf("\n Press 1: Insert an element"); printf("\nPress 2: Delete an element"); printf("\nPress 3: Display the element"); printf("\nEnter your choice");
 
scanf("%d", &choice);


switch(choice)
{


case 1:


printf("Enter the element which is to be inserted"); scanf("%d", &x);
enqueue(x); break;
case 2: dequeue(); break; case 3: display();

}}
return 0;
}
 
3.	To Implement Single Linked List and insert a node at the front
#include<stdio.h> #include<stdlib.h> void beginsert(int); struct node
{
int data;
struct node *next;
};
struct node *head;
void main ()
{
int choice,item;
do
{
printf("\nEnter the item which you want to insert?\n"); scanf("%d",&item);
beginsert(item);
printf("\nPress 0 to insert more ?\n"); scanf("%d",&choice);
}while(choice == 0);
}
void beginsert(int item)
{
struct node *ptr = (struct node *)malloc(sizeof(struct node *));
if(ptr == NULL)
{
printf("\nOVERFLOW\n");
}
else
{
ptr->data = item; ptr->next = head; head = ptr;
printf("\nNode inserted\n");
}
 
}


 
5.	To Implement Single Linked List and insert a node at the end#include<stdio.h> #include<stdlib.h>
void lastinsert(int); struct node
{
int data;
struct node *next;
};
struct node *head;
void main ()
{
int choice,item;
do
{
printf("\nEnter the item which you want to insert?\n"); scanf("%d",&item);
lastinsert(item);
printf("\nPress 0 to insert more ?\n"); scanf("%d",&choice);
}while(choice == 0);
}
void lastinsert(int item)
{
struct node *ptr = (struct node*)malloc(sizeof(struct node)); struct node *temp;
if(ptr == NULL)
{
printf("\nOVERFLOW");
}
else
{
ptr->data = item;
if(head == NULL)
{
ptr -> next = NULL; head = ptr;
printf("\nNode inserted");
 
}
else
{
temp = head;
while (temp -> next != NULL)
{
temp = temp -> next;
}
temp->next = ptr;
ptr->next = NULL; printf("\nNode inserted");

}
}
}

 
6.	To Implement Single Linked List and delete a node from the front
#include<stdio.h> #include<stdlib.h> void create(int); void begdelete(); struct node
{
int data;
struct node *next;
};
struct node *head;
void main ()
{
int choice,item;
do
{
printf("\n1.Append List\n2.Delete node\n3.Exit\n4.Enter your choice?"); scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter the item\n"); scanf("%d",&item); create(item);
break; case 2:
begdelete();
break; case 3:
exit(0); break; default:
printf("\nPlease enter valid choice\n");
}

}while(choice != 3);
}
 
void create(int item)
{
struct node *ptr = (struct node *)malloc(sizeof(struct node *));
if(ptr == NULL)
{
printf("\nOVERFLOW\n");
}
else
{
ptr->data = item; ptr->next = head; head = ptr;
printf("\nNode inserted\n");
}
}
void begdelete()
{
struct node *ptr;
if(head == NULL)
{
printf("\nList is empty");
}
else
{
ptr = head;
head = ptr->next; free(ptr);
printf("\n Node deleted from the begining ...");
} }

 
7.	To Implement Single Linked List and delete a node from the end
#include<stdio.h> #include<stdlib.h> void create(int); void end_delete(); struct node
{
int data;
struct node *next;
};
struct node *head;
void main ()
{
int choice,item;
do
{
printf("\n1.Append List\n2.Delete node\n3.Exit\n4.Enter your choice?"); scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\nEnter the item\n"); scanf("%d",&item); create(item);
break; case 2:
end_delete();
break; case 3:
exit(0); break; default:
printf("\nPlease enter valid choice\n");
}

}while(choice != 3);
}
 
void create(int item)
{
struct node *ptr = (struct node *)malloc(sizeof(struct node *));
if(ptr == NULL)
{
printf("\nOVERFLOW\n");
}
else
{
ptr->data = item; ptr->next = head; head = ptr;
printf("\nNode inserted\n");
}

}
void end_delete()
{
struct node *ptr,*ptr1;
if(head == NULL)
{
printf("\nlist is empty");
}
else if(head -> next == NULL)
{
head = NULL; free(head);
printf("\nOnly node of the list deleted ...");
}

else
{
ptr = head;
while(ptr->next != NULL)
{
ptr1 = ptr;
ptr = ptr ->next;
 
}
ptr1->next = NULL; free(ptr);
printf("\n Deleted Node from the last ...");
}
}

 
8.	To Implement Stack using Linked List for push operation



#include <stdio.h> #include <stdlib.h>

void push(); void display();

struct node
{
int val;
struct node *next;
};


struct node *head = NULL;


int main ()
{
int choice = 0;
printf("\n*********Stack operations using linked list*********\n"); printf("\n	\n");
 
while (choice != 3)
{
printf("\n\nChoose one from the below options...\n"); printf("\n1.Push\n2.Show\n3.Exit");
printf("\n Enter your choice \n"); scanf("%d", &choice);
switch (choice)
{
case 1:
push(); break;

case 2:
display(); break;

case 3:
printf("Exiting	");
break;


default:
printf("Please Enter valid choice ");
}
}
return 0;
}


void push()
{
int val;
struct node *ptr = (struct node*)malloc(sizeof(struct node));
 
if (ptr == NULL)
{
printf("not able to push the element");
}
else
{
printf("Enter the value"); scanf("%d", &val);
if (head == NULL)
{
ptr->val = val;
ptr->next = NULL; head = ptr;
}
else
{
ptr->val = val;
ptr->next = head; head = ptr;
}
printf("Item pushed");
}
}


void display()
{
struct node *ptr = head; if (ptr == NULL)
{
printf("Stack is empty\n");
}
 
else
{
printf("Printing Stack elements \n"); while (ptr != NULL)
{
printf("%d\n", ptr->val); ptr = ptr->next;
}
}
}
 
9.	To Implement Stack using Linked List for pop operation


#include <stdio.h> #include <stdlib.h> void push();
void pop(); void display(); struct node
{
int val;
struct node *next;
};
struct node *head;


void main ()
{
int choice=0;
printf("\n*********Stack operations using linked list*********\n"); printf("\n	\n");
while(choice != 4)
{
printf("\n\nChose one from the below options...\n"); printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
printf("\n Enter your choice \n"); scanf("%d",&choice);
 
switch(choice)
{
case 1:
{
push(); break;
}
case 2:
{
pop(); break;
}
case 3:
{
display(); break;
}
case 4:
{
printf("Exiting	");
break;
}
default:
{
printf("Please Enter valid choice ");
}
};
}
}
void push ()
{
 
int val;
struct node *ptr = (struct node*)malloc(sizeof(struct node)); if(ptr == NULL)
{
printf("not able to push the element");
}
else
{
printf("Enter the value"); scanf("%d",&val);
if(head==NULL)
{
ptr->val = val;
ptr -> next = NULL; head=ptr;
}
else
{
ptr->val = val;
ptr->next = head; head=ptr;
}
printf("Item pushed");


}
}
void pop()
{
int item;
struct node *ptr; if (head == NULL)
 
{
printf("Underflow");
}
else
{
item = head->val; ptr = head;
head = head->next; free(ptr);
printf("Item popped");
}
}
void display()
{
int i;
struct node *ptr; ptr=head;
if(ptr == NULL)
{
printf("Stack is empty\n");
}
else
{
printf("Printing Stack elements \n"); while(ptr!=NULL)
{
printf("%d\n",ptr->val); ptr = ptr->next;
}
}
}
 
10.	To implement Queue using Linked List
#include<stdio.h> #include<stdlib.h> struct node
{
int data;
struct node *next;
};
struct node *front; struct node *rear; void insert();
void delete(); void display(); void main ()
{
int choice;
while(choice != 4)
{
printf("\n*************************Main Menu*****************************\n");

printf("\n===========================================
======================\n");
printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.
Exit\n");
printf("\nEnter your choice ?"); scanf("%d",& choice); switch(choice)
{
case 1: insert(); break; case 2: delete(); break; case 3: display(); break;
 
case 4:
exit(0); break; default:
printf("\nEnter valid choice??\n");
}
}
}
void insert()
{
struct node *ptr;
int item;

ptr = (struct node *) malloc (sizeof(struct node));
if(ptr == NULL)
{
printf("\nOVERFLOW\n");
return;
}
else
{
printf("\nEnter value?\n"); scanf("%d",&item);
ptr -> data = item;
if(front == NULL)
{
front = ptr; rear = ptr;
front -> next = NULL; rear -> next = NULL;
}
else
{
rear -> next = ptr; rear = ptr;
rear->next = NULL;
}
 
}
}
void delete ()
{
struct node *ptr;
if(front == NULL)
{
printf("\nUNDERFLOW\n");
return;
}
else
{
ptr = front;
front = front -> next; free(ptr);
}
}
void display()
{
struct node *ptr; ptr = front; if(front == NULL)
{
printf("\nEmpty queue\n");
}
else
{  printf("\nprinting values	\n");
while(ptr != NULL)
{
printf("\n%d\n",ptr -> data); ptr = ptr -> next;
}
}
}
 
 

Deletion

