#include <bits/stdc++.h>

struct node
{
    int roll;
    node *next;
};
node *root = NULL;
node *tail = NULL;

void push(int roll){ // O(1)
    if(root==NULL){
        root = new node();
        root->roll = roll;
        root->next = NULL;
        tail = root;
    }else{
        node *tmp = new node();
        tmp->roll = roll;
        tmp->next = NULL;
        tail->next = tmp;
        tail = tail->next;
    }
}

void append(int roll) // O(n)
{
    if (root == NULL)
    {
        // creating a brand new list with node
        root = new node();
        root->roll = roll;
        root->next = NULL;
    }else{
        // copied the main list
        node *cn = root;

        // look for the last node of list
        while (cn->next!=NULL)
        {
            cn = cn->next;
        }

        // created new node and define it's values
        node *newNode = new node();
        newNode->roll = roll;
        newNode->next = NULL;

        // linked new node to previous node
        cn->next = newNode;
    }
    
}

void print(){ // O(n)
    // copied the main list
    node *cn = root; 
    // at first cn is root so it has values

    // visiting from the first node to the last node
    while (cn->next!=NULL)
    {
        // printing the current roll from node
        printf("%d\n",cn->roll);

        // set the current node to next
        cn=cn->next;
    }
    printf("%d\n",cn->roll);
}

void delete_roll(int roll){ // O(n)
    // copied the main list
    node *cn = root;
    while (cn->next!=NULL)
    {
        // copied the next node
        node *nn = cn->next;
        if(roll==nn->roll){ // if next node's roll matched
            if(nn->next!=NULL) cn->next=nn->next;
            else cn->next=NULL;
            delete(nn);
            break;
        }else if(roll==cn->roll){ // if current node's roll matched
            node *tmp = root->next;
            delete(root);
            root = tmp;
            break;
        }else{
            cn=cn->next;
        }
    }
}

void insert(int roll1, int roll2){ // O(n)
    node *cn = root;
    while (cn->roll!=roll1)
    {
        cn = cn->next;
    }
    node *nn = new node();
    nn->roll = roll2;
    nn->next = cn->next;
    cn->next = nn;
}

int main()
{
    // int a[5];
    // for(int i=0;i<5;i++)
    // {
    //     printf("%u\n",&(a[i])); //print address of each element
    // }

    // for(int i=0;i<5;i++) append(i+1); // O(n)
    for(int i=0;i<5;i++) push(i+1); // O(1)
    delete_roll(2); // O(n)
    insert(3,22); // O(n)
    print();
    return 0;
}