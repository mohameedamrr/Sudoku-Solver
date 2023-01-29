//
// Created by Ahmed on 28-Nov-22.
//

#ifndef DATASTRUCTUREPROJECT_BST_H
#define DATASTRUCTUREPROJECT_BST_H
#include <iostream>
using namespace std;


typedef int dataType;

class BST {

private:
    class BinNode {
    public:
        dataType data;

        int index;

        BinNode* left;

        BinNode* right;


        BinNode():index(0),data(0),left(0),right(0){}


        BinNode(int place):index(place),data(0),left(0),right(0){}

    };

    typedef BinNode* NodePointer;

    NodePointer Root;

    void displayAux(ostream & out, NodePointer subTreePointer) const;

    void insertNode(const int index); //insert node in tree

    void initialize();

    void destroy(NodePointer Node);

    void emptyAux(NodePointer subTreePointer, bool & flag) const;




public:
    BST(); //Empty Constructor to construct Binary Search Tree with 81 nodes representing 81 indices

    bool empty() const; //return whether data in the nodes empty or not

    void display(ostream & out) const; //output all the data inside the nodes with inorder traversal method

    dataType getItem(const int index) const; //return data of a specified index(node)

    void insertNumber(const dataType number, const int place); //insert number from 1-9 inside a specified index

    void deleteNumber(const int place); //delete number inside a specified index

    ~BST(); //Destructor

    bool isNumValid(const dataType item); //check if the number entered is valid (from 1 - 9)

};

ostream & operator<< (ostream & out, const BST & bst);

#endif //DATASTRUCTUREPROJECT_BST_H
