//This project helps to interpret ISO7816 smartcard language
#include <iostream>
#include "statusword.h"
#include "instructionbyte.h"
#include <string.h>

using namespace std;

void toUpper(char *ptr);
void mainPage();

int main(int argc, char** argv)
{
	int option = 0;
	char statusword[] = "6a81";
	char instruction[] = "A4";
	
	StatusWord sw;
	InstructionByte ins;
	
	while (option == 0){
		mainPage();
		cin >> option;
		switch (option){
			case 1:
				while (option == 1){
					system("CLS");
					cout << "****Status Word(0 to return)****\n";
					cin >> statusword;
					toUpper(statusword);
					if ((statusword[0] == '0') && (strlen(statusword) == 1)){
						option = 0;
						break;
					} else {
						if (strlen(statusword) == 4){
							sw.interpretSW(statusword);
							system("PAUSE");
						}
					}
				}
			case 2:
				while (option == 2){
					system("CLS");
					cout << "****Instruction Byte(0 to return)****\n";
					cin >> instruction;
					toUpper(instruction);
					if ((instruction[0] == '0') && (strlen(instruction) == 1)){
						option = 0;
						break;
					} else {
						if (strlen(instruction) == 2){
							ins.interpretINS(instruction);
							system("PAUSE");
						}
					}
				}		
		}
	}
	return 0;
}

void toUpper(char *ptr){
	while (*ptr) {
	    *ptr = toupper(*ptr);
	    ptr++;
	}
}

void mainPage(){
	system("CLS");
	cout << "Enter option:\n";
	cout << "1 - Status Word\n";
	cout << "2 - Instruction Byte\n";
	cout << "3 - Parse ATR\n";
}

