#include <iostream>
using namespace std;
class Car {
 private:
    char brand[20]; 
    char model[20];
    int year;
  public:
    void insertData() {
    cout << "Enter Car Brand : ";
    cin >> brand;
    cout << "Enter Car Model : ";    
    cin >> model;
    cout << "Enter Year : ";
    cin >> year;
 }
 void displayData() {
    cout << "Car Details:"<<endl;
    cout << "Brand : " << brand << endl;
    cout << "Model : " << model << endl;
    cout << "Year : " << year << endl;}
};
int main() {
  Car c1;
  c1.insertData();
  c1.displayData();
  return 0; 
}