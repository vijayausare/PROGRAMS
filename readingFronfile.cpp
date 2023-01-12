#include<iostream>
#include<fstream>

using namespace std;

int main(){
	string str;

	//ctreating a file reading \

	ifstream iFile;
	iFile.open("Vijay.txt");

	while(!iFile.eof()){

		getline(iFile,str);
		cout<<str<<endl;
	}

	return 0;

}
