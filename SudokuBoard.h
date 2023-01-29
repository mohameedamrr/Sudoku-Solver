//
// Created by Ahmad on 18-Dec-22.
//

#ifndef DATASTRUCTUREPROJECT_SUDOKUBOARD_H
#define DATASTRUCTUREPROJECT_SUDOKUBOARD_H
#include <iostream>
#include <stack>
#include <String>
using namespace std;

static int InitialNumbersArray[81] = {0};
static int TempArray[160] = {0};
class SudokuBoard {
private:


    bool rowCheck(const int index,const int value); //check for value in row if found return false

    bool colCheck(const int index, const int value); //check for value in column if found return false

    bool boxCheck(const int index, const int value); //check for value in box if found return false

    void getColandRow(const int index,int &row, int &col); //function to find which row and column of index

    int findNearestUnassigned() const; //function to return the nearest index of empty cell

    void insertPrimaryNumbers(); //function to insert the initial numbers in the sudoku

    void fromStringToArray(char* s1);

   void fromArrayToString(char *cArr);
public:
    char* printBoard();    // print the sudoku board

    int solveSudoku(); //function to solve the sudoku

    int isUserSolutionCorrect(char* s1); //function to check if the user enters a correct solution or not

    void SudokuGenerator(int levelIndex); //function to generate sudoku according to the level provided by the user
};


#endif //DATASTRUCTUREPROJECT_SUDOKUBOARD_H
