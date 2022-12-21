#include<stdio.h>
#include<stdlib.h>
struct btnode
{
    int keyval;
    struct btnode *leftnode;
    struct btnode *rightnode;
};
struct btnode *getnode(int value)
{
    struct btnode *newnode=malloc(sizeof(struct btnode));
    newnode->keyval=value;
    newnode->leftnode=NULL;
    newnode->rightnode=NULL;
    return newnode;
}
struct btnode *insert(struct btnode *rootnode,int value)
{
    if(rootnode==NULL)
    {
        return getnode(value);
    }
    if(rootnode->keyval<value)
    {
        rootnode->rightnode=insert(rootnode->rightnode,value);
    }
    else if(rootnode->keyval>value)
    {
        rootnode->leftnode=insert(rootnode->leftnode,value);
    }
    return rootnode; 
}
void insertorder(struct btnode *rootnode)
{
    if(rootnode==NULL)
    {
        return;
    }
    insertorder(rootnode->leftnode);
    printf("%d ",rootnode->keyval);
    insertorder(rootnode->rightnode);
}
int main()
{
    struct btnode *rootnode=NULL;
    rootnode=insert(rootnode,20);
    rootnode=insert(rootnode,4);
    rootnode=insert(rootnode,1);
    rootnode=insert(rootnode,17);
    rootnode=insert(rootnode,52);
    rootnode=insert(rootnode,24);
    insertorder(rootnode);
    return 0;
}