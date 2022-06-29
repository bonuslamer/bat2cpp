#include <iostream>
#include <fstream>
using namespace std;
string input;

void cline(){
	cout<<"> ";
	getline(cin, input);
	if (input == "echo"){
		ofstream MyFile("Output.cpp");
		MyFile << "cout<<";
		MyFile.close();
	} else if (input == "set"){
		ofstream MyFile("Output.cpp");
		MyFile << "string";
		MyFile.close();
	} else if (input == "pause"){
		ofstream MyFile("Output.cpp");
		MyFile << "system(""pause"");";
		MyFile.close();
	} else if (input == "pause>nul"){
		ofstream MyFile("Output.cpp");
		MyFile << "system(""pause>nul"");";
		MyFile.close();
	} else if (input == "cls"){
		ofstream MyFile("Output.cpp");
		MyFile << "system(""cls"");";
		MyFile.close();
	} else if (input == "exit"){
		ofstream MyFile("Output.cpp");
		MyFile << "system(""exit"");";
		MyFile.close();
	} else if (input == "dir/t"){
		ofstream MyFile("Output.cpp");
		MyFile << "system(""dir/t"");";
		MyFile.close();
	}
	cline();
}

int main(){
	cout<<"Enter the functions of batch (go to github readme for the avaliable functions to convert)"<<endl;
	cline();
}
