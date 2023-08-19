#include <bits/stdc++.h>
struct node
{
    node *s = NULL;
    node *l = NULL;
    int v;
};
node *root = NULL;

void insert(int v)
{
    node *cn = root, *parent;
    if (cn == NULL)
    {
        root = new node();
        root->v = v;
    }
    else
    {
        while (cn != NULL)
        {
            if (cn->v < v)
            {
                parent=cn;
                cn = cn->l;
            }
            else
            {
                parent=cn;
                cn = cn->s;
            }
        }
        node *tmp = new node();
        tmp->v = v;
        if (parent->v < v)
        {
            parent->l = tmp;
        }
        else
        {
            parent->s = tmp;
        }
    }
}

void print(node *cn){
    if (cn == NULL) return;
    printf("%d \n",cn->v);
    print(cn->l);
    print(cn->s);
}

int main()
{
    for(int i=1;i<10;i++) insert(i);
    for(int i=200;i>190;i--) insert(i);
    for(int i=1;i<10;i++) insert(i);
    for(int i=200;i>190;i--) insert(i);
    print(root);
    return 0;
}
