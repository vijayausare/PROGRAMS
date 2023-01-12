/*	This isfiend function use

	we can access any privet and protected part of fiunction using this
	friend function

*/

#include<iostream>

using namespace std;

class Employee{

	private:
		string PhNo;

	public:
		string Name;

		void setNo(string PH){
			this ->PhNo=PH;
		}


		friend void Display(Employee);

};

void Display(Employee empl){

	cout<<"Name"<<empl.Name<<endl<<"phoneno"<<empl.PhNo;
}

int main(){

	Employee emp;

	emp.setNo("02472 226062");
	emp.Name="vijay Shivaji Ausare";

	Display(emp);

	return 0;
}
