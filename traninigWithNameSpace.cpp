# include <iostream>
# include <iomanip>
# include <cmath>
# include "TWNS.h"

namespace circuleOne {

double circiule () {
  std :: cout << " enter the radius for circule one envoierment : " << '\n';
  double radius {};
  std :: cin >> radius; 
  constexpr double P { 3.14 };
  double diameter { std :: pow ( radius , 2 )};

return diameter * P;
}

}

namespace circuleTwo {

double circiule () {
  std :: cout << " enter the radius for circule one envoierment : " << '\n';
  double radius {};

  std :: cin >> radius; 
  constexpr  double P { 3.14 };
  double diameter { std :: pow ( radius , 2 )};

return diameter * P;

}

}


namespace IE1 {

bool isEquality ( double S1 , double S2 ) {

return ( S1 ==S2 ); 
}

}

namespace IE2 {
bool isEquality ( double S1 , double S2 ) {
    
return ( S1 != S2 ); 
} 

}



int main () {
  std :: cout << std :: setprecision (3); 
  std :: cout << std :: boolalpha; 
  double C1 { circuleOne::circiule () };
  double C2 { circuleTwo::circiule () }; 
  result ( C1 , C2 ); 


return 0; 
}