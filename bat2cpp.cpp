#include <iostream>
#include <fstream>
#include <string>
using namespace
std;
int main()
{
	cout<<"THIS PROGRAM IS STILL IN WORK IN PROGRESS ONLY FUNCTION THAT WILL BE CONVERTED IS ECHO, AND IT'S GOING TO BE MESSY!"<<endl;
	cout<<"Please make your batch file's name ""batfile.bat"" before pressing any key to continue..."<<endl;
	system("pause>nul");
    string strReplace = "echo";
    string strNew = "cout<<";
    ifstream filein("batfile.bat"); //File to read from
    ofstream fileout("Output.cpp"); //Temporary file
    if(!filein || !fileout)
    {
        cout << "ERROR, there are no file named batfile.bat or the input of the process failed..." << endl;
        return 1;
    }

    string strTemp;
    //bool found = false;
    while(filein >> strTemp)
    {
        if(strTemp == strReplace){
            strTemp = strNew;
            //found = true;
        }
        strTemp += "\n";
        fileout << strTemp;
        //if(found) break;
    }
    cout<<"Done converting batch to cpp (bat2cpp), there should be a file called Output.cpp"<<endl;
    system("pause>nul");
    system("exit");
	return 0;
}
