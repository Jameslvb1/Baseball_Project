#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

//Binary tree for American stadiums
struct AmerNode
{
    AmerNode *left;
    AmerNode *right;
};
//Binary tree for National stadiums
struct NatNode
{
    NatNode *left;
    NatNode *right;
};
//Binary tree for Major stadiums

class BinarySearchTree
{
public:
    BinarySearchTree();

    //Inserts sorted stadiums to binary tree
    void insert();

private:
    AmerNode *amerRoot;   //Root of Anerican stadium tree
    NatNode *natRoot;     //Root of National stadium tree
};








































#endif // BINARYSEARCHTREE_H
