#include <stdio.h>
#include <string.h>
#include <ctype.h>
//USED AI TO MAKE THE CODES FIT FOR OUTPUT AND CODE IN ONE FILE EACH
void printPattern(char ch, int row, int width) {
    int mid = width / 2;
    switch (toupper(ch)) {
        case 'A':
            if (row == 0) { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? " " : "*"); }
            else if (row == mid) { for(int j=0; j<width; j++) printf("*"); }
            else { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? "*" : " "); }
            break;
        case 'B':
            if (row == 0 || row == mid || row == width - 1) { for(int j=0; j<width-1; j++) printf("*"); printf(" "); }
            else { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? "*" : " "); }
            break;
        case 'C':
            if (row == 0 || row == width - 1) { for(int j=0; j<width; j++) printf(j==0 ? " " : "*"); }
            else { for(int j=0; j<width; j++) printf(j==0 ? "*" : " "); }
            break;
        case 'D':
            if (row == 0 || row == width - 1) { for(int j=0; j<width-1; j++) printf("*"); printf(" "); }
            else { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? "*" : " "); }
            break;
        case 'E':
            if (row == 0 || row == mid || row == width - 1) { for(int j=0; j<width; j++) printf("*"); }
            else { printf("*"); for(int j=1; j<width; j++) printf(" "); }
            break;
        case 'F':
            if (row == 0 || row == mid) { for(int j=0; j<width; j++) printf("*"); }
            else { printf("*"); for(int j=1; j<width; j++) printf(" "); }
            break;
        case 'G':
            if (row == 0) { for(int j=0; j<width; j++) printf(j==0 ? " " : "*"); }
            else if (row == width - 1) { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? " " : "*"); }
            else if (row == mid) { printf(""); for(int j=1; j<mid; j++) printf(" "); for(int j=mid; j<width; j++) printf(""); }
            else if (row > mid) { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? "*" : " "); }
            else { printf("*"); for(int j=1; j<width; j++) printf(" "); }
            break;
        case 'H':
            if (row == mid) { for(int j=0; j<width; j++) printf("*"); }
            else { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? "*" : " "); }
            break;
        case 'I':
            if (row == 0 || row == width - 1) { for(int j=0; j<width; j++) printf("*"); }
            else { for(int j=0; j<width; j++) printf(j==mid ? "*" : " "); }
            break;
        case 'J':
            if (row == 0) { for(int j=0; j<width; j++) printf("*"); }
            else if (row == width - 1) { for(int j=0; j<mid; j++) printf("*"); printf(" "); for(int j=mid+1; j<width; j++) printf(" "); }
            else { for(int j=0; j<width; j++) printf(j==mid || (row > mid && j==0) ? "*" : " "); }
            break;
        case 'K':
            for(int j=0; j<width; j++) {
                if (j == 0 || (j == mid - row && row <= mid) || (j == row - mid && row >= mid)) printf("*");
                else printf(" ");
            }
            break;
        case 'L':
            if (row == width - 1) { for(int j=0; j<width; j++) printf("*"); }
            else { printf("*"); for(int j=1; j<width; j++) printf(" "); }
            break;
        case 'M':
            for(int j=0; j<width; j++) {
                if (j==0 || j==width-1 || (row<=mid && (j==row || j==width-1-row))) printf("*");
                else printf(" ");
            }
            break;
        case 'N':
            for(int j=0; j<width; j++) { if (j==0 || j==width-1 || j==row) printf("*"); else printf(" "); }
            break;
        case 'O':
            if (row == 0 || row == width - 1) { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? " " : "*"); }
            else { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? "*" : " "); }
            break;
        case 'P':
            if (row == 0 || row == mid) { for(int j=0; j<width-1; j++) printf("*"); printf(" "); }
            else if (row < mid) { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? "*" : " "); }
            else { printf("*"); for(int j=1; j<width; j++) printf(" "); }
            break;
        case 'Q':
            if (row == 0 || row == width - 2) { for(int j=0; j<width-1; j++) printf(j==0 || j==width-2 ? " " : "*"); printf(" "); }
            else if (row < width - 2) { for(int j=0; j<width-1; j++) printf(j==0 || j==width-2 ? "*" : " "); printf(" "); }
            else if (row == width - 1) { for(int j=0; j<width; j++) printf(j == width-1 ? "*" : " "); }
            break;
        case 'R':
            if (row == 0 || row == mid) { for(int j=0; j<width-1; j++) printf("*"); printf(" "); }
            else if (row < mid) { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? "*" : " "); }
            else { printf(""); for(int j=1; j<width; j++) printf(j == row ? "" : " "); }
            break;
        case 'S':
            if (row == 0 || row == mid || row == width - 1) { for(int j=0; j<width; j++) printf("*"); }
            else if (row < mid) { printf("*"); for(int j=1; j<width; j++) printf(" "); }
            else { for(int j=0; j<width-1; j++) printf(" "); printf("*"); }
            break;
        case 'T':
            if (row == 0) { for(int j=0; j<width; j++) printf("*"); }
            else { for(int j=0; j<width; j++) printf(j==mid ? "*" : " "); }
            break;
        case 'U':
            if (row == width - 1) { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? " " : "*"); }
            else { for(int j=0; j<width; j++) printf(j==0 || j==width-1 ? "*" : " "); }
            break;
        case 'V':
            for(int j=0; j<width*2; j++) { if (j==row || j==width*2-2-row) printf("*"); else printf(" "); }
            break;
        case 'W':
            for(int j=0; j<width; j++) {
                if (j==0 || j==width-1 || (row>=mid && (j==row || j==width-1-row))) printf("*");
                else printf(" ");
            }
            break;
        case 'X':
            for(int j=0; j<width; j++) { if (j==row || j==width-1-row) printf("*"); else printf(" "); }
            break;
        case 'Y':
            if (row < mid) { for(int j=0; j<width; j++) printf(j==row || j==width-1-row ? "*" : " "); }
            else { for(int j=0; j<width; j++) printf(j==mid ? "*" : " "); }
            break;
        case 'Z':
            if (row == 0 || row == width - 1) { for(int j=0; j<width; j++) printf("*"); }
            else { for(int j=0; j<width; j++) printf(j==width-1-row ? "*" : " "); }
            break;
        default:
            for(int j=0; j<width; j++) printf(" ");
    }
}

int main() {
    char name[50];
    int size = 7; // Height of letters
    printf("Enter a word: ");
    scanf("%s", name);

    for (int i = 0; i < size; i++) {
        for (int k = 0; k < strlen(name); k++) {
            printPattern(name[k], i, size);
            printf("  "); // Space between letters
        }
        printf("\n");
    }
    return 0;
}