#include<iostream>
#include<string>
using namespace std;
class Car{
	private:
		string brand;
		string model;
		double price;
		double mileage;
	public:
    // Constructor
    Car(string b, string m, double p, double mi) {
        brand = b;
        model = m;
        price = p;
        mileage = mi;
    }	
    void display(){
    	cout << "Brand   : " << brand << endl;
        cout << "Model   : " << model << endl;
        cout << "Price   : " << price << endl;
        cout << "Mileage : " << mileage<<"miles"<< endl;
	}
	void drive(int distance){
		mileage += distance;
		cout<<"\nThe car was driven for"<<distance<<"miles."<<endl;
		cout<<"Updated Mileage:"<<mileage<<"miles"<<endl;
	}

};
int main(){
	Car car1("Toyota", "Corola", 20000, 5000);
	cout<<"Car Details:"<<endl;
	car1.display();
	car1.drive(150);
	car1.drive(250);
	car1.drive(350);
	return 0;
}