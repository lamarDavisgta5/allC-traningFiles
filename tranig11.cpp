# include <iostream>
# include <iomanip>
# include <bitset>





void start () {
  std :: cout << " to caculate potential difference  please enter true : " << '\n';

}

bool trueOrFalse () {
  bool tOrF {};
  std :: cin >> tOrF;
  
return tOrF; 
}


double PotentialDifference1 () {
  std :: cout << " enter the Propulsion by volt : " << '\n';
  double P {};
  std :: cin >> P;
  std :: cout << " enter the electrical flow by amp : " << '\n';
  double EF {};
  std :: cin >> EF;
  std :: cout << " enter the internal resistance by ohm : " << '\n';
  double IR {};
  std :: cin >> IR;
  double rI { EF * IR };


return P - rI;
}

double PotentialDifference2 () {
  std :: cout << " enter the Propulsion2 by volt : " << '\n';
  double P2 {};
  std :: cin >> P2;
  std :: cout << " enter the electrical flow2 by amp : " << '\n';
  double EF2 {};
  std :: cin >> EF2;
  std :: cout << " enter the internal resistance2 by ohm : " << '\n';
  double IR2 {};
  std :: cin >> IR2;
  double rI2 { EF2 * IR2 };


return P2 - rI2;
}

bool isEqual ( double E1 , double E2 ) {

return ( E1 == E2 );
}

bool notEqual ( double E1 , double E2 ) {

return ( E1 != E2 );
}





void result ( double R1 , double R2 ) {
  std :: cout << " the potential differnce for one is " << R1 << " volt" <<  '\n'; 
  std :: cout << " and for two is " << R2 << " volt " <<  '\n';
  std :: cout << " are they equal ? " << '\n';
  std :: cout << isEqual ( R1 , R2 ) << '\n';
  std :: cout << " are they unequal ? " << '\n';
  std :: cout << notEqual ( R1 , R2 ) << '\n';
  std :: bitset <8> a {R1};
  std :: cout << a << '\n';
  std :: bitset <8> b {R2};
  std :: cout << b << '\n';
  std :: cout << a.set(7) << '\n';
  std :: cout << b.test(1) << '\n';     /* the logical opretor and bitmanupalation are used for traning */
  std :: cout << b.test(6) << '\n'; 
  std :: cout << b.flip(6) << '\n';
  std :: cout << b.reset(2) << '\n';  
  if ( R1 != R2 && R1 > R2 )
    std :: cout << " the PD one is bigger than two " << '\n'; \
  if ( R1 == R2 || R2 > R1 )
    std :: cout << " two is bigger than one " << '\n';

}



int main () {
  std :: cout << std :: boolalpha; 
  std :: cin >> std :: boolalpha;
  std :: cout << std :: setprecision(4);
  start ();
  if ( trueOrFalse ()) {
    std :: cout << " you enter true  " << '\n';
     double PD { PotentialDifference1 () };
     double PD2 { PotentialDifference2 () };
    result ( PD , PD2 );

}
  else 
    std :: cout << " you enter false (please enter true correctly) " << '\n'; 



return 0; 
}