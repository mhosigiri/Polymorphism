#include <iostream>
using namespace std;

class Vehicle
{
  private:
  string brand;
  public:
  void setBrand(string b)
  {
    brand = b;
  }
  void honk(){
    cout << "Tuut, tuut! \n";
  }
  string getBrand()
  {
    return brand;
  }
};
class Car: public Vehicle
{
  private:
  string model;
  public:
  void setModel(string m)
  {
    model = m;
  }
  string getModel()
  {
    return model;
  }
};

int main() {
  Car myCar;
  myCar.honk();
  string brand;
  string model;
  cout << "Enter your Car brand: ";
  cin >> brand;
  cout << "Enter your Car model: ";
  cin >> model;
  myCar.setBrand(brand);
  myCar.setModel(model);
  cout << "\nYour car is a " << myCar.getBrand() << " " << myCar.getModel() << endl;
  
  return 0;
}