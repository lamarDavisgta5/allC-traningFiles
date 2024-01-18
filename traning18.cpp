# include <iostream>
# include <bitset>
# include <cmath>
# include <iomanip>

double volume1 () {
  std :: cout << " enter a side of the square : " << '\n';
  double side {};
  std :: cin >> side;
  double sidePow3 { std :: pow ( side , 3 ) };
  
return sidePow3;
}


double volume2 () {
  std :: cout << " enter a side of the square two  : " << '\n';
  double side2 {};
  std :: cin >> side2;
  double sidePow32 { std :: pow ( side2 , 3 ) };
  
return sidePow32;
}


bool isEqule ( double E1 , double E2 ) {

return ( E1 == E2 );
}

bool notEqual ( double E1 , double E2) {

return ( E1 != E2 );
}

void result ( double R1 , double R2) {
  std :: cout << " the volume for square one is " << R1 << '\n';
  std :: cout << " and for two is " << R2 << '\n';
  std :: cout << " are they equal ? " << '\n';
  std :: cout << isEqule ( R1 , R2 ) << '\n';
  std :: cout << " are they inEqual ? " << '\n';
  std :: cout << notEqual ( R1 , R2 ) << '\n';
  if ( R1 != R2 && R1 > R2 )
    std :: cout << " volume one is bigger than volume 2 " << '\n';
  if ( R1 != R2 && R2 > R1 )
    std :: cout << " volume two is bigger than one " << '\n'; 

  constexpr std :: uint8_t zero (1 << 0);
  constexpr std :: uint8_t one (1 << 1);
  constexpr std :: uint8_t two (1 << 2);
  constexpr std :: uint8_t three (1 << 3);
  constexpr std :: uint8_t four (1 << 4);
  constexpr std :: uint8_t five (1 << 5);
  constexpr std :: uint8_t six (1 << 6);
  constexpr std :: uint8_t seven (1 << 7);
  std :: uint8_t r1 { R1 };
  std :: uint8_t r2 { R2 };
  std :: cout << " in binary the volume one is " << r1 << '\n';
  std :: cout << " in binary the volume two is " << r1 << '\n';

  std :: cout << " the bit position 0 for volume one is " <<  ( ( r1 & zero ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 for volume one is " << ( ( r1 & one ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 2 for volume one is " <<  ( ( r1 & two ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 3 for volume one is " << ( ( r1 & three ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 4 for volume one is " << ( (  r1 & four ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 5 for volume one is " << ( ( r1 & five ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 6 for volume one is " << (  ( r1 & six ) ? " 1 " : " 0 ") << '\n'; 
  std :: cout << " the bit position 7 for volume one is " << ( ( r1 & seven ) ? " 1 " : " 0 ") << '\n';
  r1 |= ( zero | one | two | three | four | five | six | seven );
  std :: cout << " they all set and now " << '\n'; 
  std :: cout << " the bit position 0 is " <<  ( ( r1 & zero ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 is " << ( ( r1 & one ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 is " <<  ( ( r1 & two ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 3 is " << ( ( r1 & three ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 4 is " << ( (  r1 & four ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 5 is " << ( ( r1 & five ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 6 is " << (  ( r1 & six ) ? " 1 " : " 0 ") << '\n'; 
  std :: cout << " the bit position 7 is " << ( ( r1 & seven ) ? " 1 " : " 0 ") << '\n';



}



int main () {
  std :: cout << std :: setprecision (3);
  std :: cout << std :: boolalpha; 
  double V1 { volume1 () };
  double V2 { volume2 () };
  result ( V1 , V2 );

}