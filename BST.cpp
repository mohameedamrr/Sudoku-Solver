//
// Created by Ahmed on 28-Nov-22.
//

#include "BST.h"
#include <iostream>
using namespace std;

BST::BST() {
    Root = 0;
    initialize();
}

void BST::initialize() {

    insertNode(40);
    insertNode(20);
    insertNode(60);

    for(int i = 10; i <= 70; i += 20)
        insertNode(i);

    for(int i = 5; i <= 75; i += 10)
        insertNode(i);

    int counterNodes = 1;
    int i = 3, j = 7;
    while(counterNodes <= 16) {
        insertNode(i);
        insertNode(j);
        counterNodes +=2;
        i += 10;
        j += 10;
    }

    for(i = 2; i <= 78; i+=2) {
        if(i % 10 == 0)
            continue;
        insertNode(i);
    }

    int counterNodes2 = 1;
    int x = 1, z = 9;
    while(counterNodes2 <= 16) {
        insertNode(x);
        insertNode(z);
        counterNodes2 +=2;
        x += 10;
        z += 10;
    }

    insertNode(80);
    insertNode(81);
}



void BST::insertNode(const int index) {
    NodePointer ptr=Root, parent = 0;
    while(ptr != 0) {
        parent = ptr;
        if(index < ptr->index)
            ptr = ptr->left;
        else                    //if index is greater than ptr-> index it will go to right branch
            ptr = ptr->right;
    }
    ptr = new BinNode(index);
    if(parent == 0)
        Root = ptr;
    else if(index < parent->index)
        parent->left = ptr;
    else                        //if index is greater than parent-> index it will point to ptr on the right branch
        parent->right = ptr;

}

BST::~BST() {
    destroy(Root);
}

void BST::destroy(BST::NodePointer Node) {
    if(Node != 0) {
        destroy(Node->left);
        destroy(Node->right);
        delete Node;
    }
}

void BST::display(std::ostream &out) const {
    displayAux(out, Root);
}

void BST::displayAux(std::ostream &out, BST::NodePointer subTreePointer) const {

    if(subTreePointer != 0) {
        displayAux(out, subTreePointer->left);
        out << subTreePointer->data <<" ";
        displayAux(out, subTreePointer->right);
    }
}

dataType BST::getItem(const int index) const {
    NodePointer ptr = Root;
    while(index != ptr->index) {
        if(index < ptr->index)
            ptr = ptr->left;
        else
            ptr = ptr-> right;
    }
    return ptr->data;
}

void BST::insertNumber(const dataType number, const int place) {
    if(!isNumValid(number)) {
        cerr << "Number entered is not valid";
        return;
    }
    NodePointer ptr = Root;
    while(place !=  ptr->index) {
        if(place < ptr->index)
            ptr = ptr->left;
        else
            ptr = ptr->right;
    }
    ptr->data = number;
}

void BST::deleteNumber(const int place) {
    NodePointer ptr = Root;
    while(place !=  ptr->index) {
        if(place < ptr->index)
            ptr = ptr->left;
        else
            ptr = ptr->right;
    }
    ptr->data = 0;
}

bool BST::empty() const {
    bool flag = true;
    emptyAux(Root,flag);
    return flag;
}

void BST::emptyAux(BST::NodePointer subTreePointer,bool &flag) const {
    if(subTreePointer!=0) {
        if(subTreePointer->data != 0)
            flag=false;

        if(flag == true)
            emptyAux(subTreePointer->left,flag);

        if(flag == true)
            emptyAux(subTreePointer->right,flag);

    }
}

bool BST::isNumValid(const dataType item) {
    if(item <= 9 && item >= 0)
        return true;
    else
        return false;
}

ostream & operator<< (ostream & out, const BST & bst){
    bst.display(out);
    return out;
}


