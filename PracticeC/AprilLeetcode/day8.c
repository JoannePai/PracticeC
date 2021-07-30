/*Middle of linklist: show the data of the middle of linklist*/
#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next;
    
}Node;


int main()
{
    Node a,b,c,d,e,f,g;//  e->d->c-> b->a->NULL   = 4->3->2->1->0 -> NULL
    a.data = 0;
    a.next = NULL;
    b.data = 1;
    b.next = &a;
    c.data = 2;
    c.next = &b;
    d.data = 3;
    d.next = &c;
    e.data = 4;
    e.next = &d;
    f.data = 5;
    f.next = &e;
    g.data = 6;
    g.next = &f;

    Node *size, * fast ,*slow;
    fast = &g;
    slow = &g;
    size = &g;
    int sizecount = 0;

    while(size->next != NULL)
    {
        sizecount++;
        size = size->next;
    }
    printf("sizecount = %i\n",sizecount);
    printf("sizecount %% 2 = %i\n",sizecount % 2);
    if(sizecount % 2 == 1)
    {   
        while(fast != NULL)
        {
        printf("fast data = %i\n",fast->data);
        printf("slow data = %i\n",slow->data);
        fast = fast->next->next;
        // if(fast == NULL)break;
        slow = slow->next;
        }        
    }
    else
    {
        while(fast->next != NULL)
        {
        printf("fast data = %i\n",fast->data);
        printf("slow data = %i\n",slow->data);
        fast = fast->next->next;
        slow = slow->next;
        }

    }
   
    printf("middle number is :%i \n",slow->data);
    return 0;

}
