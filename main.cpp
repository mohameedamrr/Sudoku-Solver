#include <iostream>
using namespace std;
#include "BST.h"
#include "SudokuBoard.h"

int main() {
    SudokuBoard SB;
    /*int array[81] = {0,0,3,0,0,5,0,0,6,9,5,0,0,1,0,0,0,0,1,0,6
            ,0,0,0,5,0,8,0,6,0,0,2,9,8,5,0,0,9,0
            ,0,8,1,6,0,0,0,0,0,3,4,0,0,0,9,8,0,0
            ,0,0,0,0,6,3,0,0,0,0,0,0,0,2,0,2,0,1
            ,0,0,0,0,0,0};*/
    /*int arr[81];
     SB.SudokuGenerator(3,arr);

    SB.insertPrimaryNumbers(arr);
    //SB.printBoard(cout);
    SB.solveSudoku();
    SB.printBoard();*/
   /* for(int i = 0; i <160; i++) {
        cout << TempArray[i] << " ";
    }*/
    SB.SudokuGenerator(1);
    //char* s2 = "0,0,3,0,0,5,0,0,6,9,5,0,0,1,0,0,0,0,1,0,6,0,0,0,5,0,8,0,6,0,0,2,9,8,5,0,0,9,0,0,8,1,6,0,0,0,0,0,3,4,0,0,0,9,8,0,0,0,0,0,0,6,3,0,0,0,0,0,0,0,2,0,2,0,1,0,0,0,0,0,0";
    char *cArr;
    cArr = SB.printBoard();
    cout << cArr << endl;

    SB.SudokuGenerator(2);
    cArr = SB.printBoard();
    cout << cArr << endl;
    /*cout << "The Correct Solution is: " << endl;

    for(int i = 0; i < 100; i++) {
        cout << "Sudoku Number: " << i << " :" << endl;
        SB.solveSudoku();
        cArr = SB.printBoard();
        cout << cArr;
        cout << endl;
    }*/




    /*
    cout << "The Wrong Solution is: " << endl;


    //cout << s2;
    cout << "The output of  isUserSolutionCorrect is: " << endl;
    for(int i = 0; i <160; i++) {
        cout << TempArray[i] << " ";
    }*/

    //cout << SB.isUserSolutionCorrect(s2);






    /*int counter = 1;
    for(int i = 1; i < 82; i++) {
        bst.insertNumber(7,i);
        cout << bst.getItem(i) << " ";
        counter ++;
    }
    cout << counter;

    bst.deleteNumber(1);
    for(int i = 1; i < 82; i++) {
        bst.deleteNumber(i);
        cout << bst.getItem(i) << " ";

    }*/
    /*for(int i = 1; i < 82; i++) {
        bst.insertNumber(1,i);
        cout << bst.empty() << " ";
        bst.deleteNumber(i);
        cout << bst.empty() << " ";
    }*/




}



