#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
//help50 make <FileName>: get error help
typedef struct node
{
    int data;
    struct node *next;
}Node;

void ShowList(Node* List)
{
    // print student data
    Node *current = List;
    
    while(current!=NULL)
    {      
        printf("student:%i \n",current->data);
        current = current -> next ;       
    }
    current = List;
}

int FindMid(Node* n)
{
    Node* fast = n;
    Node* slow = n;

    while(((fast!=NULL)&&(fast->next!=NULL)))
    {
        fast = fast->next->next;
        slow = slow->next;        
    }
    return slow->data;
}

int RevList(Node* list)
{
    if(list == NULL)
    return 0;
    // prev     cur          preced
    // NULL   listhead   listhead->next
    Node* prev = NULL;
    Node* cur = list;
    Node* preced =  cur->next;

    while(prev!=NULL)
    {
        cur->next = prev;
        cur = prec;
        prec = prec->next;
        prev = cur;
    }
    cur->next = prev;
    list = cur;
    ShowList(list);
    return 0;

}


int main()
{

    // create first node 
    Node *student1 = malloc(sizeof(Node));
    student1 -> data = 1;
    student1 -> next = NULL;

    Node *student2 = malloc(sizeof(Node));
    student1 -> next = student2;
    student2 -> data = 2;
    student2 -> next = NULL;

    Node *student3 = malloc(sizeof(Node));
    student2 -> next = student3;
    student3 -> data = 3;
    student3 -> next = NULL;

    Node *student4 = malloc(sizeof(Node));
    student3 -> next = student4;
    student4 -> next = NULL;
    student4 -> data = 4;
// print student data
    ShowList(student1);

// find midle student data

    Node *CheckMidP = malloc(sizeof(Node));
    CheckMidP = student1;
    printf("middle number = %i \n",FindMid(CheckMidP));
//reverse linked list
    RevList(student1);
    return 0;
}
