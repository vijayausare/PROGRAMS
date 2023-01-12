#include<iostream>

using namespace std;

class Circle{

	private:
		float radius;

	public:
		void setRadius(float radii){
			this->radius=radii;
		}

	    double getArea (){
	    	return 3.142*radius*radius;
	    }

};

int main(){

	while(1){

	Circle cir;
	cout<<"Enter radius of circle "<<endl;
	cin>>x
	cir.setRadius(x);
	double area=cir.getArea();
	cout<<area

	}


	return 0;
}