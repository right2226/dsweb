//1.	To implement Stack using arrays


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

 
//2.	To implement Circular Queue using arrays



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
 
//3.	To Implement Single Linked List and insert a node at the front

#include<stdio.h> 
#include<stdlib.h>
 void beginsert(int); 
struct node{
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


 
//5.	To Implement Single Linked List and insert a node at the end

#include<stdio.h> #include<stdlib.h>
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

 
//6.	To Implement Single Linked List and delete a node from the front

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

 
//7.	To Implement Single Linked List and delete a node from the end

#include<stdio.h> 
#include<stdlib.h> 
void create(int); 
void end_delete(); struct node
{int data;
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

 
//8.	To Implement Stack using Linked List for push operation



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
 
//9.	To Implement Stack using Linked List for pop operation


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
 
//10.	To implement Queue using Linked List

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
 
 
//to implement queue using arrays

#include <stdio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1; // Initialize front and rear indices
int rear = -1;

// Function to enqueue (insert) an element into the queue
void enqueue(int data) {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (front == -1) {
            front = 0; // If the queue was empty, set the front index to 0
        }
        rear++;
        queue[rear] = data;
        printf("%d enqueued into the queue.\n", data);
    }
}

// Function to dequeue (remove) an element from the queue
int dequeue() {
    int data;
    if (front == -1) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // Return an invalid value to indicate an error
    } else {
        data = queue[front];
        if (front == rear) {
            front = rear = -1; // Reset front and rear when the last element is dequeued
        } else {
            front++;
        }
        return data;
    }
}

int main() {
    // Enqueue elements
    enqueue(10);
    enqueue(20);
    enqueue(30);

    // Dequeue elements
    printf("%d dequeued from the queue.\n", dequeue());
    printf("%d dequeued from the queue.\n", dequeue());

    // Enqueue more elements
    enqueue(40);
    enqueue(50);

    // Dequeue elements
    printf("%d dequeued from the queue.\n", dequeue());
    printf("%d dequeued from the queue.\n", dequeue());

    return 0;
}

//to implemednt queue using linked list

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a queue node
struct Node {
    int data;
    struct Node* next;
};

// Define a structure for the linear queue
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node == NULL) {
        perror("Memory allocation error");
        exit(1);
    }
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to initialize an empty queue
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    if (queue == NULL) {
        perror("Memory allocation error");
        exit(1);
    }
    queue->front = queue->rear = NULL;
    return queue;
}

// Function to enqueue (insert) an element into the queue
void enqueue(struct Queue* queue, int data) {
    struct Node* newNode = newNode(data);

    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }

    printf("%d enqueued into the queue.\n", data);
}

// Function to dequeue (remove) an element from the queue
int dequeue(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // Return an invalid value to indicate an error
    }

    struct Node* frontNode = queue->front;
    int data = frontNode->data;
    queue->front = frontNode->next;

    // If front becomes NULL, update rear to NULL as well
    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(frontNode);
    return data;
}

int main() {
    struct Queue* queue = createQueue();

    // Enqueue elements
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    // Dequeue elements
    printf("%d dequeued from the queue.\n", dequeue(queue));
    printf("%d dequeued from the queue.\n", dequeue(queue));

    // Enqueue more elements
    enqueue(queue, 40);
    enqueue(queue, 50);

    // Dequeue elements
    printf("%d dequeued from the queue.\n", dequeue(queue));
    printf("%d dequeued from the queue.\n", dequeue(queue));

    return 0;
}


//to implement circular linked list and insert node at beginning

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a circular linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node == NULL) {
        perror("Memory allocation error");
        exit(1);
    }
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to insert a node at the beginning of the circular linked list
struct Node* insertAtBeginning(struct Node* tail, int data) {
    struct Node* newNode = newNode(data);

    if (tail == NULL) {
        // If the list is empty, create a new circular list with a single node
        newNode->next = newNode;
        tail = newNode;
    } else {
        // Insert the new node at the beginning
        newNode->next = tail->next;
        tail->next = newNode;
    }

    return tail; // Return the new tail (which could be the same or a different node)
}

// Function to print the circular linked list
void printCircularList(struct Node* tail) {
    struct Node* current;

    if (tail == NULL) {
        printf("Circular linked list is empty.\n");
        return;
    }

    current = tail->next;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != tail->next);

    printf("\n");
}

int main() {
    struct Node* tail = NULL;

    // Insert nodes at the beginning
    tail = insertAtBeginning(tail, 10);
    tail = insertAtBeginning(tail, 20);
    tail = insertAtBeginning(tail, 30);

    // Print the circular linked list
    printf("Circular Linked List: ");
    printCircularList(tail);

    return 0;
}


//to implement circular insert a node at end

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a circular linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node == NULL) {
        perror("Memory allocation error");
        exit(1);
    }
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to insert a node at the end of the circular linked list
struct Node* insertAtEnd(struct Node* tail, int data) {
    struct Node* newNode = newNode(data);

    if (tail == NULL) {
        // If the list is empty, create a new circular list with a single node
        newNode->next = newNode;
        tail = newNode;
    } else {
        // Insert the new node at the end
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode; // Update the tail to the new node
    }

    return tail; // Return the new tail
}

// Function to print the circular linked list
void printCircularList(struct Node* tail) {
    struct Node* current;

    if (tail == NULL) {
        printf("Circular linked list is empty.\n");
        return;
    }

    current = tail->next;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != tail->next);

    printf("\n");
}

int main() {
    struct Node* tail = NULL;

    // Insert nodes at the end
    tail = insertAtEnd(tail, 10);
    tail = insertAtEnd(tail, 20);
    tail = insertAtEnd(tail, 30);

    // Print the circular linked list
    printf("Circular Linked List: ");
    printCircularList(tail);

    return 0;
}


//circulaar linked list code all four operations

// Implementing Circular Linked List

#include <stdio.h>
#include <stdlib.h>
struct Node
{
int data;
struct Node *next;
};
void menu();
void display(struct Node *start);
struct Node *insert_at_beginning(struct Node *, int);
struct Node *insert_after(struct Node *, int, int);
struct Node *insert_at_end(struct Node *, int);
struct Node *delete_from_beginning(struct Node *);
struct Node *delete_after(struct Node *, int);
struct Node *delete_from_end(struct Node *);
int search(struct Node *, int);
int main()
{
struct Node *start = NULL;
int user_choice, element, after;
menu();
do
{
printf(">>> ");
scanf("%d", &user_choice);
switch (user_choice)
{
case 0:
break;
case 1:
printf("Enter Data To Insert: ");
scanf("%d", &element);
start = insert_at_beginning(start, element);
break;
case 2:

printf("Enter The Value to Insert: ");
scanf("%d", &element);
printf("After What Value: ");
scanf("%d", &after);
start = insert_after(start, element, after);
break;
case 3:
printf("Enter The Value to Insert: ");
scanf("%d", &element);
start = insert_at_end(start, element);
break;
case 4:
start = delete_from_beginning(start);
break;
case 5:
printf("Delete After What Value: ");
scanf("%d", &after);
start = delete_after(start, after);
break;
case 6:
start = delete_from_end(start);
break;
case 7:
printf("What Value to Search For: ");
scanf("%d", &element);
if (search(start, element))
printf("The Given Value %d is Present in the Linked

List...\n", element);
else
printf("The Given Value %d is Not Present in the Linked

List...\n", element);
break;
case 8:
display(start);
break;
case 99:
menu();
break;
default:

printf("Invalid Choice...\n");
menu();
break;
}
} while (user_choice);
return 0;
}
void menu()
{
printf("0. Exit\n\
1. Insert At Beginning\n\
2. Insert After a Value\n\
3. Insert At End\n\
4. Delete From Beginning\n\
5. Delete After a Value\n\
6. Delete From End\n\
7. Search Element\n\
8. Display Elements\n\
99. Display This Menu Again\n");
}
// Function To Display Items Present In The Linked List
void display(struct Node *start)
{
struct Node *ptr = start;
if (ptr == NULL)
{
printf("Linked List Is Empty...\n");
return;
}
do
{
printf("%d ", ptr->data);
ptr = ptr->next;
} while (ptr != start);
printf("\n");
}

// Function To Insert A New Node At the Start of the Linked List
// The Value of Start Pointer is Changed to the new node created
// and the last node points to this new node
struct Node *insert_at_beginning(struct Node *start, int data)
{
struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
// Printing Overflow If Dynamic Memory Allocation Fails i.e ptr
malloc returns NULL
if (ptr == NULL)
{
printf("Overflow...\n");
return NULL;
}
// Creating New Node If Start is Null i.e. Linked List Is Empty
if (start == NULL)
{
ptr->data = data;
ptr->next = ptr;
return ptr;
}
// Assigning Values to the newly created LL
struct Node *head = start;
ptr->data = data;
ptr->next = start;
// Loop to point head at the end Node to create a Circular Linked
List
while (head->next != start)
{
head = head->next;
}
head->next = ptr;
start = ptr;
return start;
}
// Inserts A New Node After The Given Value Node
// No Change In Start Or End Pointer's

struct Node *insert_after(struct Node *start, int data, int after)
{
struct Node *head = start;
if (head == NULL)
{
printf("Cannot Insert Element after Given Value, Linked List is
Empty...\n");
return start;
}
struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
// Printing Overflow If Dynamic Memory Allocation Fails i.e ptr
malloc returns NULL
if (ptr == NULL)
{
printf("Overflow...\n");
return NULL;
}
// Loop To Point the Head at the Node Of Given Value
while (head->data != after)
{
head = head->next;
if (head == start)
{
printf("Value Not Found!\n");
return start;
}
}
// Assigning Values to the newly created LL
ptr->data = data;
ptr->next = head->next;
head->next = ptr;
return start;
}
// Inserts A New Node At The End Of The Linked List
// This New Node Created Will Now Point To the Start Node
// No Change In Start Node except if Start Node is also End Node
struct Node *insert_at_end(struct Node *start, int data)
{

struct Node *head = start;
// Creating New LL If LL is Empty || start is pointing to NULL
if (head == NULL)
{
start = insert_at_beginning(start, data);
return start;
}
struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
// Printing Overflow If Dynamic Memory Allocation Fails
if (ptr == NULL)
{
printf("Overflow...\n");
return NULL;
}
// Loop to Point head at the current end Node
while (head->next != start)
{
head = head->next;
}
// Assigning Values to newly created LL
ptr->data = data;
ptr->next = start;
head->next = ptr;
return start;
}
// Deletes The starting Node and Makes Second Node as the New starting
Node also Now End Points to this new created start
// Change In Start pointer
// Change In End Pointer
struct Node *delete_from_beginning(struct Node * start)
{
struct Node* head = start;
// Checking Whether LL exists or not
if (head == NULL)
{
printf("Underflow...\n");
return NULL;
}

// If There is only on Node Present In the LL then deleting it makes
LL empty
// So Returning NULL i.e. start will point to NULL means LL is empty
if (head->next == head)
{
free(head);
return NULL;
}
struct Node* ptr = start;
// Pointing ptr to the end node
while (ptr->next != start)
{
ptr = ptr->next;
}
// Making Second Node as start node and assigning this new node
value to the next part of end node
start = start->next;
ptr->next = start;
free(head);
return start;
}
// Deletes the Node After the given value
struct Node *delete_after(struct Node *start, int after)
{
struct Node* head = start;
// Checking Whether LL exists or not
if (head == NULL)
{
printf("Underflow...\n");
return NULL;
}
// Point Head at the given node value
while (head->data != after)
{
head = head->next;
if (head == start)

{
printf("Value Not Found!...\n");
return start;
}
}
// If The Given Value is present at the end than deleting start node
since it's circular LL
// So Next part of end points to start
if (head->next == start)
{
start = delete_from_beginning(start);
return start;
}
// IF the given node is not last node than deleting the node after
given node
struct Node* del = head->next;
head->next = del->next;
free(del);
return start;
}
// Deletes the node from end and makes second last node as last node
// Changes last node pointer
struct Node *delete_from_end(struct Node *start)
{
struct Node* ptr = start;
struct Node* preptr = ptr;
if (ptr == NULL)
{
printf("Underflow...\n");
return NULL;
}
if (ptr->next == start)
{
start = delete_from_beginning(start);
return start;
}

while (ptr->next != start)
{
preptr = ptr;
ptr = ptr->next;
}
preptr->next = ptr->next;
free(ptr);
return start;
}
// Searches for given value in the LL
// If value is present it returns 1 else returns 0
int search(struct Node *start, int data)
{
struct Node* head = start;
// Returns 0, if LL Is Empty
if (start == NULL)
{
return 0;
}
do
{
if (head->data == data)
{
return 1;
}
head = head->next;
} while (head != start);
return 0;
}

2nd batch 

// Implementing Queue using array

#include <stdio.h> 
#include <limits.h> 
#define MAX 5
int arr[MAX]; int front = -1; int rear = -1;
void menu();
void enqueue(int); int dequeue(); void display();
int main() {
int user_input = 1; int element; menu();
do
{
printf(">>> ");
scanf("%d", &user_input);
switch (user_input) {
case 0:
break; case 1:
printf("Enter Element to Enqueue: "); scanf("%d", &element); enqueue(element);
break;
case 2:

  element = dequeue();
if (element == INT_MIN) {}
else
printf("Dequeued Element: %d\n", element); break;
case 3: display();
break; case 4:
menu();
break; default:
printf("Invalid Operation\n"); }
} while (user_input);
return 0; }
void menu() {
printf("\ 0.Exit\n\
1.Enqueue\n\
2.Dequeue\n\
3.Display\n\
4.To Display this menu again\n"); }
void enqueue(int element) {
if (rear == MAX - 1) {
printf("Queue Overflow, cannot insert %d\n", element);
return; }
else if (front = -1 && rear == -1) {
front = 0;
rear++;
arr[rear] = element; return;
}
rear++;
arr[rear] = element;
}

  int dequeue() {
int val;
if (front == -1) {
val = INT_MIN;
printf("Queue Underflow, no element to delete\n"); }
else if (front == rear) {
val = arr[front]; front = -1;
rear = -1;
} else {
val = arr[front];
front++; }
return val; }
void display() {
if (front == -1) {
printf("Queue is Empty\n");
return; }
for (int i = front; i <= rear; i++) {
printf("%d ", arr[i]); }
printf("\n"); }

//Implementing Queue using Linked List
 #include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node *next; };
void menu();
struct Node *enqueue(struct Node *, int); struct Node *dequeue(struct Node *); void display(struct Node *);
int main() {
struct Node *front = NULL; int user_choice;
int element;
menu();
do {
printf(">>> ");
scanf("%d", &user_choice); switch (user_choice)
{
case 0:
break;
case 1:
printf("Enter The Element to Enqueue: "); scanf("%d", &element);
if (front == NULL)
{
front = enqueue(front, element); }
else {
front = enqueue(front, element); }
break;
case 2:
front = dequeue(front); break;

  case 3: display(front); break;
case 4: menu();
break;
default:
printf("Invalid Choice...\n"); menu();
break;
}
} while (user_choice);
return 0; }
void menu() {
printf("\ 0.Exit\n\
1.Enqueue\n\
2.Dequeue\n\
3.Display\n\
4.To Display this menu again\n"); }
struct Node* enqueue(struct Node* front, int data) {
struct Node* ptr = (struct Node*)malloc(sizeof(struct Node)); if (ptr == NULL)
{
printf("Queue Overflow...\n");
return front; }
if (front == NULL) {
ptr->data = data; ptr->next = NULL; return ptr;
}
struct Node* ptr2 = front; while (ptr2->next != NULL) {
ptr2 = ptr2->next;

  }
ptr->data = data; ptr->next = NULL; ptr2->next = ptr; return front;
}
struct Node* dequeue(struct Node* front) {
struct Node* ptr = front; if (ptr == NULL)
{
printf("Queue Underflow...\n");
return NULL; }
front = front->next; free(ptr);
return front;
}
void display(struct Node* front) {
struct Node* ptr = front; if (ptr == NULL)
{
printf("Queue Is Empty...\n");
return; }
while (ptr != NULL) {
printf("%d ", ptr->data);
ptr = ptr->next; }
printf("\n"); }

//circular link list
Program :
 // Implementing Circular Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
   struct Node *next;
};
void menu();
void display(struct Node *start);
struct Node *insert_at_beginning(struct Node *, int);
struct Node *insert_after(struct Node *, int, int);
struct Node *insert_at_end(struct Node *, int);
struct Node *delete_from_beginning(struct Node *);
struct Node *delete_after(struct Node *, int);
struct Node *delete_from_end(struct Node *);
int search(struct Node *, int);
int main() {
   struct Node *start = NULL;
   int user_choice, element, after;
   menu();
   do
   {
       printf(">>> ");
       scanf("%d", &user_choice);
       switch (user_choice)
       {
       case 0:
           break;
       case 1:
           printf("Enter Data To Insert: ");
           scanf("%d", &element);
           start = insert_at_beginning(start, element);
           break;
case 2:

             printf("Enter The Value to Insert: ");
           scanf("%d", &element);
           printf("After What Value: ");
           scanf("%d", &after);
           start = insert_after(start, element, after);
           break;
       case 3:
           printf("Enter The Value to Insert: ");
           scanf("%d", &element);
           start = insert_at_end(start, element);
           break;
       case 4:
           start = delete_from_beginning(start);
           break;
       case 5:
           printf("Delete After What Value: ");
           scanf("%d", &after);
           start = delete_after(start, after);
           break;
       case 6:
           start = delete_from_end(start);
           break;
       case 7:
           printf("What Value to Search For: ");
           scanf("%d", &element);
           if (search(start, element))
printf("The Given Value %d is Present in the Linked List...\n", element);
else
                 printf("The Given Value %d is Not Present in the Linked
List...\n", element);
           break;
       case 8:
           display(start);
           break;
       case 99:
           menu();
           break;
default:

             printf("Invalid Choice...\n");
           menu();
           break;
       }
   } while (user_choice);
return 0; }
void menu() {
   printf("0. Exit\n\
1. Insert At Beginning\n\
2. Insert After a Value\n\
3. Insert At End\n\
4. Delete From Beginning\n\
5. Delete After a Value\n\
6. Delete From End\n\
7. Search Element\n\
8. Display Elements\n\
99. Display This Menu Again\n");
}
// Function To Display Items Present In The Linked List
void display(struct Node *start)
{
   struct Node *ptr = start;
   if (ptr == NULL)
   {
       printf("Linked List Is Empty...\n");
return; }
do
   {
       printf("%d ", ptr->data);
       ptr = ptr->next;
   } while (ptr != start);
   printf("\n");
}

  // Function To Insert A New Node At the Start of the Linked List
// The Value of Start Pointer is Changed to the new node created
// and the last node points to this new node
struct Node *insert_at_beginning(struct Node *start, int data)
{
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
// Printing Overflow If Dynamic Memory Allocation Fails i.e ptr malloc returns NULL
   if (ptr == NULL)
   {
       printf("Overflow...\n");
       return NULL;
   }
   // Creating New Node If Start is Null i.e. Linked List Is Empty
   if (start == NULL)
   {
       ptr->data = data;
       ptr->next = ptr;
       return ptr;
}
   // Assigning Values to the newly created LL
   struct Node *head = start;
   ptr->data = data;
   ptr->next = start;
// Loop to point head at the end Node to create a Circular Linked List
   while (head->next != start)
   {
       head = head->next;
   }
   head->next = ptr;
   start = ptr;
   return start;
}
// Inserts A New Node After The Given Value Node
// No Change In Start Or End Pointer's

  struct Node *insert_after(struct Node *start, int data, int after)
{
   struct Node *head = start;
   if (head == NULL)
   {
printf("Cannot Insert Element after Given Value, Linked List is Empty...\n");
       return start;
   }
struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
// Printing Overflow If Dynamic Memory Allocation Fails i.e ptr
malloc returns NULL
   if (ptr == NULL)
   {
       printf("Overflow...\n");
       return NULL;
   }
   // Loop To Point the Head at the Node Of Given Value
   while (head->data != after)
   {
       head = head->next;
       if (head == start)
       {
           printf("Value Not Found!\n");
           return start;
       }
}
   // Assigning Values to the newly created LL
   ptr->data = data;
   ptr->next = head->next;
   head->next = ptr;
   return start;
}
// Inserts A New Node At The End Of The Linked List
// This New Node Created Will Now Point To the Start Node
// No Change In Start Node except if Start Node is also End Node
struct Node *insert_at_end(struct Node *start, int data)
{

     struct Node *head = start;
   // Creating New LL If LL is Empty || start is pointing to NULL
   if (head == NULL)
   {
       start = insert_at_beginning(start, data);
       return start;
   }
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   // Printing Overflow If Dynamic Memory Allocation Fails
   if (ptr == NULL)
   {
       printf("Overflow...\n");
       return NULL;
   }
   // Loop to Point head at the current end Node
   while (head->next != start)
   {
       head = head->next;
   }
   // Assigning Values to newly created LL
   ptr->data = data;
   ptr->next = start;
   head->next = ptr;
   return start;
}
// Deletes The starting Node and Makes Second Node as the New starting Node also Now End Points to this new created start
// Change In Start pointer
// Change In End Pointer
struct Node *delete_from_beginning(struct Node * start)
{
   struct Node* head = start;
   // Checking Whether LL exists or not
   if (head == NULL)
   {
       printf("Underflow...\n");
       return NULL;
   }

  // If There is only on Node Present In the LL then deleting it makes LL empty
   // So Returning NULL i.e. start will point to NULL means LL is empty
   if (head->next == head)
   {
free(head);
       return NULL;
   }
   struct Node* ptr = start;
   // Pointing ptr to the end node
   while (ptr->next != start)
   {
       ptr = ptr->next;
   }
// Making Second Node as start node and assigning this new node value to the next part of end node
   start = start->next;
   ptr->next = start;
   free(head);
   return start;
}
// Deletes the Node After the given value
struct Node *delete_after(struct Node *start, int after)
{
   struct Node* head = start;
   // Checking Whether LL exists or not
   if (head == NULL)
   {
       printf("Underflow...\n");
       return NULL;
   }
   // Point Head at the given node value
   while (head->data != after)
   {
       head = head->next;
       if (head == start)

         {
           printf("Value Not Found!...\n");
           return start;
} }
// If The Given Value is present at the end than deleting start node since it's circular LL
   // So Next part of end points to start
   if (head->next == start)
   {
       start = delete_from_beginning(start);
       return start;
   }
// IF the given node is not last node than deleting the node after given node
   struct Node* del = head->next;
   head->next = del->next;
   free(del);
   return start;
}
// Deletes the node from end and makes second last node as last node
// Changes last node pointer
struct Node *delete_from_end(struct Node *start)
{
   struct Node* ptr = start;
   struct Node* preptr = ptr;
   if (ptr == NULL)
   {
       printf("Underflow...\n");
       return NULL;
   }
   if (ptr->next == start)
   {
       start = delete_from_beginning(start);
       return start;
   }

    while (ptr->next != start)
   {
preptr = ptr;
       ptr = ptr->next;
   }
   preptr->next = ptr->next;
   free(ptr);
   return start;
}
// Searches for given value in the LL
// If value is present it returns 1 else returns 0
int search(struct Node *start, int data)
{
   struct Node* head = start;
   // Returns 0, if LL Is Empty
   if (start == NULL)
   {
return 0; }
do
   {
       if (head->data == data)
       {
return 1; }
       head = head->next;
   } while (head != start);
   return 0;
}

//to implement stack using ll for push & pop

// Implementing Stack using Linked List

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Node {
int data;
   struct Node* next;
};
void menu();
struct Node* push(struct Node*, int);
struct Node* pop(struct Node*);
int peek(struct Node*);
void display(struct Node*);
int main() {
   struct Node* top = NULL;

   int user_choice, element;
menu();
do
{
    printf(">>> ");
    scanf("%d", &user_choice);
    switch (user_choice)
    {
    case 0:
        break;
    case 1:
        printf("Enter Element to push: ");
        scanf("%d", &element);
        top = push(top, element);
        break;
    case 2:
        top = pop(top);
        break;
    case 3:
        element = peek(top);
        if (element == INT_MIN)
        {
            printf("Nothing To Show, Stack Is Empty...\n");
        }
else
        {
            printf("Top Element: %d\n", element);
}
        break;
    case 4:
        display(top);
        break;
    case 99:
        menu();
        break;
    default:
        printf("Invalid Choice...\n");
        break;
}

      } while (user_choice);
   return 0;
}
void menu() {
   printf("0. EXIT\n\
1. Push\n\
2. Pop\n\
3. Peek\n\
4. Display\n\
99. To Show This Menu Again\n");
}
void display(struct Node* top)
{
   struct Node* ptr = top;
   if (ptr == NULL)
   {
       printf("Stack Is Empty...\n");
return; }
   while (ptr != NULL)
   {
       printf("%d ", ptr->data);
       ptr = ptr->next;
   }
   printf("\n");
}
struct Node* push(struct Node* top, int data)
{
   struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   // Printing Overflow If Dynamic Memory Allocation Fails i.e ptr
malloc returns NULL
   if (ptr == NULL)
   {
       printf("StackOverflow...\n");
       return NULL;

   }
   // If top is NULL that means stack is empty in that case creating
stack and assigning values
   if (top == NULL)
   {
       ptr->data = data;
       ptr->next = NULL;
       return ptr;
}
   // If Stack Already exists than assigning value to newly created
stack and making it as top
   ptr->data = data;
   ptr->next = top;
   top = ptr;
   return top;
}
struct Node* pop(struct Node* top)
{
   if (top == NULL)
   {
       printf("Stack Underflow...\n");
       return NULL;
   }
   struct Node* temp = top;
   top = top->next;
   free(temp);
   return top;
}
int peek(struct Node* top)
{
   if (top == NULL)
   {
       return INT_MIN;
   }
   return top->data;
}

2. To implement Linear Queue using arrays(any 2 operations in the code)

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int element) {
  if (rear == MAX_SIZE - 1) {
    printf("Queue is full.\n");
    return;
  }
  rear++;
  queue[rear] = element;
}
int dequeue() {
  if (front == rear) {
    printf("Queue is empty.\n");
    return -1;
  }
  front++;
  return queue[front];
}
int main() {
  int choice;
  do {
    printf("1. Enqueue\n2. Dequeue\n3. Exit\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        int element;
        printf("Enter element to enqueue: ");
        scanf("%d", &element);
        enqueue(element);
        break;
      case 2:
        if (front == rear) {
          printf("Queue is empty. Cannot dequeue.\n");
        } else {
          int dequeuedElement = dequeue();
          printf("Dequeued element is %d.\n", dequeuedElement);
        }
        break;
      case 3:
        exit(0);
        break;
      default:
        printf("Invalid choice.\n");
    }
  } while (choice != 3);
  return 0;
}
3. To implement Queue using Linked List(any 2 operations in the code)
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
 int data;
 struct Node *next;
} Node;
struct Queue {
 Node *front;
 Node *rear;
};
void enqueue(struct Queue *queue, int data) {
 Node *new_node = (Node *)malloc(sizeof(Node));
 new_node->data = data;
 new_node->next = NULL;
 if (queue->front == NULL) {
 queue->front = new_node;
 queue->rear = new_node;
 } else {
 queue->rear->next = new_node;
 queue->rear = new_node;
 }
}
int dequeue(struct Queue *queue) {
 if (queue->front == NULL) {
 printf("Queue is empty!\n");
 return -1;
 }
 int data = queue->front->data;
 Node *temp = queue->front;
 queue->front = queue->front->next;
 if (queue->front == NULL) {
 queue->rear = NULL;
 }
 free(temp);
 return data;
}
int main() {
 struct Queue queue;
 queue.front = NULL;
 queue.rear = NULL;
 int choice, data;
 while (1) {
 printf("1. Enqueue\n2. Dequeue\n3. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 printf("Enter the data to enqueue: ");
 scanf("%d", &data);
 enqueue(&queue, data);
 break;
 case 2:
 data = dequeue(&queue);
 if (data != -1) {
 printf("The dequeued element is: %d\n", data);
 }
 break;
 case 3:
 exit(0);
 break;
 default:
 printf("Invalid choice!\n");
 }
 }
 return 0;
}
4. To Implement Circular Linked List and Insert a node at the beginning
#include<stdio.h>  
#include<stdlib.h>  
void beg_insert(int);  
struct node  
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
        printf("\nEnter the item which you want to insert?\n");  
        scanf("%d",&item);  
        beg_insert(item);  
        printf("\nPress 0 to insert more ?\n");  
        scanf("%d",&choice);  
    }while(choice == 0);  
}  
void beg_insert(int item)    
{    
        
    struct node *ptr = (struct node *)malloc(sizeof(struct node));    
    struct node *temp;  
    if(ptr == NULL)    
    {    
        printf("\nOVERFLOW");    
    }    
    else     
    {    
        ptr -> data = item;    
        if(head == NULL)    
        {    
            head = ptr;    
            ptr -> next = head;    
        }    
        else     
        {       
            temp = head;    
            while(temp->next != head)    
                temp = temp->next;    
            ptr->next = head;     
            temp -> next = ptr;     
            head = ptr;    
        }     
    printf("\nNode Inserted\n");  
    }    
                
}   
 
 5. To Implement Circular Linked List and insert a node at the end

void lastinsert(struct node*ptr, struct node *temp, int item)  
{  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
    }    
}  

6. To Implement Circular Linked List and delete a node at the beginning

#include<stdio.h>  
#include<stdlib.h>  
void create(int);  
void beg_delete();  
struct node  
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
printf("1.Append List\n2.Delete Node from beginning\n3.Exit\n4.Enter your choice?");  
scanf("%d",&choice);  
switch(choice)  
{  
case 1:  
printf("\nEnter the item\n");  
scanf("%d",&item);  
create(item);  
break;   
case 2:  
beg_delete();  
break;   
case 3:  
exit(0);  
break;    
default:  
printf("\nPlease Enter valid choice\n");  
}  

}while(choice != 3);  
}  
void create(int item)    
{    

struct node *ptr = (struct node *)malloc(sizeof(struct node));    
struct node *temp;  
if(ptr == NULL)    
{    
printf("\nOVERFLOW");    
}    
else     
{    
ptr -> data = item;    
if(head == NULL)    
{    
head = ptr;    
ptr -> next = head;    
}    
else     
{       
temp = head;    
while(temp->next != head)    
temp = temp->next;    
ptr->next = head;     
temp -> next = ptr;     
head = ptr;    
}     
printf("\nNode Inserted\n");  
}    

}   
void beg_delete()  
{  
struct node *ptr;  
if(head == NULL)  
{  
printf("\nUNDERFLOW\n");      
}  
else if(head->next == head)  
{  
head = NULL;  
free(head);  
printf("\nNode Deleted\n");   
}  

else  
{     
ptr = head;   
while(ptr -> next != head)  
ptr = ptr -> next;   
ptr->next = head->next;  
free(head);  
head = ptr->next;  
printf("\nNode Deleted\n");   
}  
}  

7. To Implement Circular Linked List and delete a node at the end

#include<stdio.h>  
#include<stdlib.h>  
void create(int);  
void last_delete();  
struct node  
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
printf("1.Append List\n2.Delete Node from end\n3.Exit\n4.Enter your choice?");  
scanf("%d",&choice);  
switch(choice)  
{  
case 1:  
printf("\nEnter the item\n");  
scanf("%d",&item);  
create(item);  
break;   
case 2:  
last_delete();  
break;   
case 3:  
exit(0);  
break;    
default:  
printf("\nPlease Enter valid choice\n");  
}  

}while(choice != 3);  
}  
void create(int item)    
{    

struct node *ptr = (struct node *)malloc(sizeof(struct node));    
struct node *temp;  
if(ptr == NULL)    
{    
printf("\nOVERFLOW\n");    
}    
else     
{    
ptr -> data = item;    
if(head == NULL)    
{    
head = ptr;    
ptr -> next = head;    
}    
else     
{       
temp = head;    
while(temp->next != head)    
temp = temp->next;    
ptr->next = head;     
temp -> next = ptr;     
head = ptr;    
}     
printf("\nNode Inserted\n");  
}    

}   
void last_delete()  
{  
struct node *ptr, *preptr;    
if(head==NULL)  
{  
printf("\nUNDERFLOW\n");  
}  
else if (head ->next == head)  
{  
head = NULL;  
free(head);  
printf("\nNode Deleted\n");  
}  
else   
{  
ptr = head;  
while(ptr ->next != head)  
{  
preptr=ptr;  
ptr = ptr->next;  
}  
preptr->next = ptr -> next;  
free(ptr);  
printf("\nNode Deleted\n");  
}  
}  
8. To Implement Stack using Linked List for push operation
#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
}*head, *temp, *head1;
void push(int data) {
 if (head == NULL) {
 head = (struct node *)malloc(sizeof(struct node));
 head->data = data;
 head->next = NULL;
 }
 else {
 //temp is new node to Insert in stack
 temp = (struct node *)malloc(sizeof(struct node));
 temp->data = data;
 temp->next = NULL;
 // Traverse the list to find the last node.
 struct node *current = head; 
 while (current->next != NULL) {
 current = current->next; 
 }
 current->next = temp;
 }
 printf("Node is inserted in Stack\n\n");
}
void display() {
 head1 = head;
 if (head1 == NULL) {
 printf("Empty\n"); 
 }
 else {
 printf("The Linked List is: ");
 while (head1 != NULL) {
 printf("%d-->", head1->data); 
head1 = head1->next; 
 }
 printf("NULL\n");
 }
}
int main() {
 int choice, value;
 do {
 printf("\n1. Push.\n2. Display.\n0. Exit\n"); 
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 0: 
break;
 case 1:
 printf("Enter the value to insert: ");
 scanf("%d", &value);
 push(value);
 break;
 case 2:
 display();
 break;
 default:
 printf("Wrong choice\n");
 }
 } while (choice != 0); 
 return 0;
}

9. To Implement Stack using Linked List for pop operation

#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node *next;
}*head, *temp, *head1;
void push(int data) {
 if (head == NULL) { 
 //To insert the first node head
 head = (struct node *)malloc(sizeof(struct node));
 head->data = data;
 head->next = NULL;
 }
 else {
temp = (struct node *)malloc(sizeof(struct node));
 temp->data = data;
 temp->next = head;
 head = temp; 
 }
 printf("Node is inserted\n\n");
}
void display() {
 head1 = head;
 if (head1 == NULL) {
 printf("Empty\n");
 }
 else {
 printf("The Linked List is: ");
 while (head1 != NULL) {
 printf("%d-->", head1->data);
 head1 = head1->next;
 }
 printf("NULL\n");
 }
}
int main() {
 int choice, value;
 while (1) {
 printf("\n1. Push.\n2. Display.\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 printf("Enter the value to insert: ");
 scanf("%d", &value);
 push(value);
 break;
 case 2:
 display();
 break;
 default:
 printf("Wrong choice\n");
 }
 }
 return 0;
