# include <iostream>
# include <iomanip>
constexpr double P {3.14};
double radius {};

namespace a {
double A () {
  std :: cout << " enter the radius : " << '\n';
  std :: cin >> radius;

return radius * radius  * P;
}
}
double E () {
  double diameter { radius + radius };
return diameter * P;   
}

void result ( double S , double P ) {
  std :: cout << " the S is " << S << '\n';
  std :: cout << " the P is " << P << '\n'; 

}


int main () {
  double area { a::A () };
  double envoierment { E () };
  result ( area , envoierment );

return 0; 
}