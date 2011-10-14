/*
LCD Display

A friend of yours has just bought a new computer. Before this, the most powerful
machine he ever used was a pocket calculator. He is a little disappointed because he
liked the LCD display of his calculator more than the screen on his new computer! To
make him happy, write a program that prints numbers in LCD display style.

Input

The input file contains several lines, one for each number to be displayed. Each line
contains integers s and n, where n is the number to be displayed (0 ≤ n ≤ 99, 999, 999)
and s is the size in which it shall be displayed (1 ≤ s ≤ 10). The input will be terminated
by a line containing two zeros, which should not be processed.

Output

Print the numbers specified in the input file in an LCD display-style using s “-” signs
for the horizontal segments and s “|” signs for the vertical ones. Each digit occupies
exactly s + 2 columns and 2s + 3 rows. Be sure to fill all the white space occupied by
the digits with blanks, including the last digit. There must be exactly one column of
blanks between two digits.
Output a blank line after each number. You will find an example of each digit in the
sample output below.
*/

#include <stdio.h>
#include <math.h>

int nLines;
int nColumns;
char lcdNumber[12][23];

void setLcdSize(int size) {
    nLines = 2 * size + 3;
    nColumns = size + 2;
}

void clearLcd() {
    int i;
    for (i = 0; i < nLines; i++) {
        int j;
        for (j = 0; j < nColumns; j++) {
            lcdNumber[i][j] = ' ';
        }
    }    
}

void drawLine(int lineNumber) {
    int j;
    for (j = 1; j < nColumns - 1; j++) {
        lcdNumber[lineNumber][j] = '-';
    }
}

void drawFirstLine() {
    drawLine(0);
}

void drawMiddleLine() {
    drawLine(nLines / 2);
}

void drawLastLine() {
    drawLine(nLines - 1);
}

void drawFirstColumn(int columnNumber) {
    int i;
    for (i = 1; i < nLines / 2; i++) {
        lcdNumber[i][columnNumber] = '|';    
    }
}

void drawLastColumn(int columnNumber) {
    int i;
    for (i = (nLines / 2) + 1; i < nLines - 1; i++) {
        lcdNumber[i][columnNumber] = '|';    
    }
}

void drawFirstLeftColumn() {
    drawFirstColumn(0);
}

void drawLastLeftColumn() {
    drawLastColumn(0);
}

void drawFirstRightColumn() {
    drawFirstColumn(nColumns - 1);
}

void drawLastRightColumn() {
    drawLastColumn(nColumns - 1);
}

void printLcd() {
    int i;
    for (i = 0; i < nLines; i++) {
        int j;
        for (j = 0; j < nColumns; j++) {
            printf("%c", lcdNumber[i][j]);
        }
        printf("\n");
    }    
}

void printZero() {
    clearLcd();
    drawFirstLine();
    drawFirstLeftColumn();
    drawFirstRightColumn();
    drawLastLeftColumn();
    drawLastRightColumn();
    drawLastLine();
    printLcd();
}

void printOne() {
    clearLcd();
    drawFirstRightColumn();
    drawLastRightColumn();
    printLcd();
}

void printTwo() {
    clearLcd();
    drawFirstLine();
    drawFirstRightColumn();
    drawMiddleLine();
    drawLastLeftColumn();
    drawLastLine();
    printLcd();
}

void printThree() {
    clearLcd();
    drawFirstLine();
    drawFirstRightColumn();
    drawMiddleLine();
    drawLastRightColumn();
    drawLastLine();
    printLcd();
}

void printFour() {
    clearLcd();
    drawFirstLeftColumn();
    drawFirstRightColumn();
    drawMiddleLine();
    drawLastRightColumn();
    printLcd();
}

void printFive() {
    clearLcd();
    drawFirstLine();
    drawFirstLeftColumn();
    drawMiddleLine();
    drawLastRightColumn();
    drawLastLine();
    printLcd();
}

void printSix() {
    clearLcd();
    drawFirstLine();
    drawFirstLeftColumn();
    drawMiddleLine();
    drawLastLeftColumn();
    drawLastRightColumn();
    drawLastLine();
    printLcd();
}

void printSeven() {
    clearLcd();
    drawFirstLine();
    drawFirstRightColumn();
    drawLastRightColumn();
    printLcd();
}

void printEight() {
    clearLcd();
    drawFirstLine();
    drawFirstLeftColumn();
    drawFirstRightColumn();
    drawMiddleLine();
    drawLastLeftColumn();
    drawLastRightColumn();
    drawLastLine();
    printLcd();
}

void printNine() {
    clearLcd();
    drawFirstLine();
    drawFirstLeftColumn();
    drawFirstRightColumn();
    drawMiddleLine();
    drawLastRightColumn();
    drawLastLine();
    printLcd();
}

int main() {
    setLcdSize(2);
    printOne();
    printTwo();
    printThree();
    printFour();
    printFive();
    printSix();
    printSeven();
    printEight();
    printNine();
    return 0;
}
