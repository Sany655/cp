#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *l;
    Node *r;
    int v;
};

class HeapTree
{
public:
    Node *root;

    void traverse(Node *cn)
    {
        if (cn == NULL)
            return;
        cout << cn->v << " ";
        traverse(cn->l);
        traverse(cn->r);
    }

    void max_heap_push(int v,Node *cn){
        if(cn == NULL) cn->v = v;
        else{
            
        }
    }
};

int main()
{
    HeapTree t;
    t.root->v = 1;
    // t.root->l->v = 2;
    // t.root->l->l->v = 4;
    // t.root->l->r->v = 5;
    // t.root->r->v = 3;
    // t.root->r->l->v = 6;
    // t.root->r->r->v = 7;
    t.traverse(t.root);
}