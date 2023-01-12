/* 	this namespace is used when we have to declare two variable with
	 same name
*/

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

int main(){
	cout<<jp::DoolerValue<<endl;
	cout<<cn::DoolerValue<<endl;
	return 0;
}
/* 	this namespace is used when we have to declare two variable with
	 same name
*/

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

int main(){
	cout<<jp::DoolerValue<<endl;
	cout<<cn::DoolerValue<<endl;
	return 0;
}
