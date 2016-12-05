#include <iostream>
#include "instructionbyte.h"

using namespace std;

void InstructionByte::interpretINS(char *ins)
{	
	if (ins[0] == '0'){
		switch(ins[1]){
			case '4':
				cout << "DEACTIVATE FILE\n";
				break;
			case 'C':
				cout << "ERASE RECORD\n";
				break;
			case 'E':
				cout << "ERASE BINARY\n";
				break;
			case 'F':
				cout << "ERASE BINARY\n";
				break;
			default:
				cout << "Unknown INS\n";
				break;
		}
	}
	
	if (ins[0] == '1'){
		switch(ins[1]){
			case '0':
				cout << "PERFORM SCQL OPERATION\n";
				break;
			case '2':
				cout << "PERFORM TRANSACTION OPERATION\n";
				break;
			case '4':
				cout << "PERFORM USER OPERATION\n";
				break;
			default:
				cout << "Unknown INS\n";
				break;
		}
	}
	
	if (ins[0] == '2'){
		switch(ins[1]){
			case '0':
				cout << "VERIFY\n";
				break;
			case '1':
				cout << "VERIFY\n";
				break;
			case '2':
				cout << "MANAGE SECURITY ENVIRONMENT\n";
				break;
			case '4':
				cout << "CHANGE REFERENCE DATA\n";
				break;
			case '6':
				cout << "DISABLE VERIFICATION REQUIREMENT\n";
				break;
			case '8':
				cout << "ENABLE VERIFICATION REQUIREMENT\n";
				break;
			case 'A':
				cout << "PERFORM SECURITY OPERATION\n";
				break;
			case 'C':
				cout << "RESET RETRY COUNTER\n";
				break;
			default:
				cout << "Unknown INS\n";
				break;
		}
	}
	
	if (ins[0] == '4'){
		switch(ins[1]){
			case '4':
				cout << "ACTIVATE FILE\n";
				break;
			case '6':
				cout << "GENERATE ASYMMETRIC KEY PAIR\n";
				break;
			default:
				cout << "Unknown INS\n";
				break;
		}
	}
	
	if ((ins[0] == '7') && (ins[1] == '0')){
		cout << "MANAGE CHANNEL\n";
	}
	
	if (ins[0] == '8'){
		switch(ins[1]){
			case '2':
				cout << "EXTERNAL(/MUTUAL) AUTHENTICATE\n";
				break;
			case '4':
				cout << "GET CHALLENGE\n";
				break;
			case '6':
				cout << "GENERAL AUTHENTICATE\n";
				break;
			case '7':
				cout << "GENERAL AUTHENTICATE\n";
				break;
			case '8':
				cout << "INTERNAL AUTHENTICATE\n";
				break;
			default:
				cout << "Unknown INS\n";
				break;
		}
	}
	
	if (ins[0] == 'A'){
		switch(ins[1]){
			case '0':
				cout << "SEARCH BINARY\n";
				break;
			case '1':
				cout << "SEARCH BINARY\n";
				break;
			case '2':
				cout << "SEARCH RECORD\n";
				break;
			case '4':
				cout << "SELECT\n";
				break;
			default:
				cout << "Unknown INS\n";
				break;
		}
	}
	
	if (ins[0] == 'B'){
		switch(ins[1]){
			case '0':
				cout << "READ BINARY\n";
				break;
			case '1':
				cout << "READ BINARY\n";
				break;
			case '2':
				cout << "READ RECORD\n";
				break;
			case '3':
				cout << "READ RECORD\n";
				break;
			default:
				cout << "Unknown INS\n";
				break;
		}
	}
	
	if (ins[0] == 'C'){
		switch(ins[1]){
			case '0':
				cout << "GET RESPONSE\n";
				break;
			case '2':
				cout << "ENVELOPE\n";
				break;
			case '3':
				cout << "ENVELOPE\n";
				break;
			case 'A':
				cout << "GET DATA\n";
				break;
			case 'B':
				cout << "GET DATA\n";
				break;
			default:
				cout << "Unknown INS\n";
				break;
		}
	}
	
	if (ins[0] == 'D'){
		switch(ins[1]){
			case '0':
				cout << "WRITE BINARY\n";
				break;
			case '1':
				cout << "WRITE BINARY\n";
				break;
			case '2':
				cout << "WRITE RECORD\n";
				break;
			case '6':
				cout << "UPDATE BINARY\n";
				break;
			case '7':
				cout << "UPDATE BINARY\n";
				break;
			case 'A':
				cout << "PUT DATA\n";
				break;
			case 'B':
				cout << "PUT DATA\n";
				break;
			case 'C':
				cout << "UPDATE RECORD\n";
				break;
			case 'D':
				cout << "UPDATE RECORD\n";
				break;
			default:
				cout << "Unknown INS\n";
				break;
		}
	}
	
	if (ins[0] == 'E'){
		switch(ins[1]){
			case '0':
				cout << "CREATE FILE\n";
				break;
			case '2':
				cout << "APPEND RECORD\n";
				break;
			case '4':
				cout << "DELETE FILE\n";
				break;
			case '6':
				cout << "TERMINATE DF\n";
				break;
			case '8':
				cout << "TERMINATE EF\n";
				break;	
			default:
				cout << "Unknown INS\n";
				break;
		}
	}
	
	if ((ins[0] == 'F') && (ins[1] == 'E')){
		cout << "TERMINATE CARD USAGE\n";
	} 
}



