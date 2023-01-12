#include<iostream>

using namespace std;

namespace jp{
	float DoolerValue=1023;

	double toDoller( float ss){
		return ss/DoolerValue;
	}

}

namespace cn{

	float DoolerValue=20120;

	double toDoller( float ss){
		return ss/DoolerValue;
	}
}

using namespace jp;
int main(){
	cout<<DoolerValue<<endl;
	cout<<cn::DoolerValue<<endl;
	return 0;
}