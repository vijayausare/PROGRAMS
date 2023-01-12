#include<iostream>
#include<fstream>

using namespace std;

int main(){

	//create a ofstream file object

	ofstream oFile;

	//openning file

	oFile.open("Vijay.txt");

	//writing into file

	oFile<<"vijay shivaji Ausare!";
	oFile<<"\n At post anala tal paranda,osmanabad 413505";

	//closing file

	oFile.close();

	return 0;
}
