#include <bits/stdc++.h>

struct node
{
    int value;
    node *n = NULL;
    node *p = NULL;
};
node *head, *tail = NULL;

void append(int v)
{
    if (head==NULL)
    {
        head = new node();
        head->value = v;
        head->n=NULL;
        head->p=NULL;
        tail=head;
    }else{
        node *nn = new node();
        nn->value=v;
        nn->p = tail;
        nn->n = NULL;
        tail->n = nn;
        tail=nn;
    }
}

void print(){
    node *tmp = head;
    while (tmp!=NULL)
    {
        printf("%d ",tmp->value);
        tmp = tmp->n;
    }
}

void reversePrint(){
    node *tmp = tail;
    while (tmp!=NULL)
    {
        printf("%d ",tmp->value);
        tmp = tmp->p;
    }
}

int main()
{
    for(int i=2;i<=200;i*=2) append(i); // O(n)
    reversePrint(); // O(n)
    printf("\n");
    print(); // O(n)
    return 0;
}
