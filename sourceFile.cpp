# include <iostream>
# include "TWNS.h"
namespace h {
void result ( double S1 , double S2 ) {
  std :: cout << " the envoierment for circule one is " << S1 << '\n'; 
  std :: cout << " the envoierment for circule two is " << S2 << '\n'; 
  std :: cout << " are they equal ? " << '\n'; 
  std :: cout <<  IE1 :: isEquality ( S1 , S2 ) << '\n'; 
  std :: cout << " are they unequal ? " << '\n';
  std :: cout << IE2 :: isEquality ( S1 , S2 ) << '\n'; 
}
}
