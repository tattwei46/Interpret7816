#include <iostream>
#include "statusword.h"

using namespace std;

void StatusWord::interpretSW(char *sw)
{
	if (sw[0] == '9' && sw[1] == '0' && sw[2] == '0' && sw[3] == '0'){
		cout << "No further qualification\n";
	}
	
	if (sw[0] == '6'){
		switch(sw[1]){
			case '1':
				cout << "There are still "<< sw[2] << sw[3] << " (hex) data bytes left\n";
				break;
			case '2':
				if (sw[2] == '8'){
					switch(sw[3]){
						case '1':
							cout << "Part of the returned data may be corrupted\n";
							break;
						case '2':
							cout << "End of file of record reached before reading Ne bytes\n";
							break;
						case '3':
							cout << "Selected file deactivated\n";
							break;
						case '4':
							cout << "File control information not formatted\n";
							break;
						case '5':
							cout << "Selected file in termination state\n";
							break;
						case '6':
							cout << "No input data available from a sensor on the card\n";
							break;
						default:
							cout << "Unknown SW\n";
					}
				} else {
					cout << "Unknown SW\n";
				}
				break;
			case '3':
				if (sw[2] == '8' && sw[3] == '1') {
					cout << "File filled up by the last write\n";
				} 
				if (sw[2] == 'C'){
					cout << "Counter from 0 to 15 encoded by " << sw[3] << " (exact meaning depending on the command)\n";
				} else {
					cout << "Unknown SW\n";
				}
				break;
			case '4':
				if (sw[2] == '0'){
					if (sw[3] == '0'){
						cout << "Execution error\n";
					}
					if (sw[3] == '1'){
						cout << "Immediate response required by card\n";
					}
				} else {
					cout << "Unknown SW\n";
				}
				break;
			case '5':
				if (sw[2] == '8' && sw[3] == '1'){
					cout << "Memory failure\n";
				} else {
					cout << "Unknown SW\n";
				}
				break;
			case '8':
				if (sw[2] == '8'){
					switch (sw[3]){
						case '1':
							cout << "Logical channel not supported\n";
							break;
						case '2':
							cout << "Secure messaging not supported\n";
							break;
						case '3':
							cout << "Last command of the chain expected\n";
							break;
						case '4':
							cout << "Command chaining not supported\n";
							break;
						default:
							cout << "Unknown SW\n";
					}
				} else {
					cout << "Unknown SW\n";
				}
				break;
			case '9':
				if (sw[2] == '8'){
					switch (sw[3]){
						case '1':
							cout << "Command incompatible with file structure\n";
							break;
						case '2':
							cout << "Security status not satisfied\n";
							break;
						case '3':
							cout << "Authentication method blocked\n";
							break;
						case '4':
							cout << "Reference data not stable\n";
							break;
						case '5':
							cout << "Conditions of use not satisfied\n";
							break;
						case '6':
							cout << "Command not allowed(no current EF)\n";
							break;
						case '7':
							cout << "Expected secure messaging data objects missing\n";
							break;
						case '8':
							cout << "Incorrect secure messaging data objects\n";
							break;
						default:
							cout << "Unknown SW\n";
					}
				} else {
					cout << "Unknown SW\n";
				}
				break;
			case 'A':
				if (sw[2] == '8'){
					switch (sw[3]){
						case '0':
							cout << "Incorrect parameters in the command data field\n";
							break;
						case '1':
							cout << "Function not supported\n";
							break;
						case '2':
							cout << "File or application not found\n";
							break;
						case '3':
							cout << "Record not found\n";
							break;
						case '4':
							cout << "Not enough memory space in the file\n";
							break;
						case '5':
							cout << "Nc inconsistent with TLV structure\n";
							break;
						case '6':
							cout << "Incorrect parameters P1-P2\n";
							break;
						case '7':
							cout << "Nc inconsistent with parameters P1-P2\n";
							break;
						case '8':
							cout << "Referenced data or reference data not found\n";
							break;
						case '9':
							cout << "File already exists\n";
							break;
						case 'A':
							cout << "DF name already exists\n";
							break;
						default:
							cout << "Unknown SW\n";
					}
				} else {
					cout << "Unknown SW\n";
				}
				break;
			case 'B':
				if (sw[2] && sw[3] == '0'){
					cout << "Wrong parameters P1-P2\n";
				} else {
					cout << "Unknown SW\n";
				}
				break;
			case 'C':
				cout << "Wrong Le file. Exact number of available data bytes is " << sw[2] << sw[3] << "\n";
				break;
			case 'D':
				if (sw[2] && sw[3] == '0'){
					cout << "Instruction code not supported or invalid\n";
				} else {
					cout << "Unknown SW\n";
				}
				break;
			case 'E':
				if (sw[2] && sw[3] == '0'){
					cout << "Class not supported\n";
				} else {
					cout << "Unknown SW\n";
				}
				break;
			case 'F':
				if (sw[2] && sw[3] == '0'){
					cout << "No precise diagnosis\n";
				} else {
					cout << "Unknown SW\n";
				}
				break;
			default:
				cout << "Unknown SW\n";
		}
	} else {
		cout << "Unknown SW\n";
	}
}



