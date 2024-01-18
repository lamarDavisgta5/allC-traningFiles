# include <iostream>
# include <iomanip>

void start () {
  std :: cout << " to cacualte three uniform electiric field enter true correctly : " << '\n';

}


bool trueOrFalse () {
  bool tOrF {};
  std :: cin >> tOrF;

return tOrF;
}


double UEF () {
  std :: cout << " enter the first potential difference of two plates by volt  : " << '\n';
  double V {};
  std :: cin >> V;
  std :: cout << " enter the first distance between to plates by metr : " << '\n';
  double d {};
  std :: cin >> d; 

return V/d;
}


double UEF2 () {
  std :: cout << " enter secend  the potential difference two of plates by volt  : " << '\n';
  double V2 {};
  std :: cin >> V2;
  std :: cout << " enter the secend  distance between to plates by metr : " << '\n';
  double d2 {};
  std :: cin >> d2; 

return V2/d2;
}


double UEF3 () {
  std :: cout << " enter the third potential difference of two plates by volt  : " << '\n';
  double V3 {};
  std :: cin >> V3;
  std :: cout << " enter the third distance between to plates by metr : " << '\n';
  double d3 {};
  std :: cin >> d3; 

return V3/d3;
}


bool isEqual ( double E1 , double E2 , double E3 ) {

return ( E1 == E2 == E3 );    
}

void result ( double R1 , double R2 , double R3 ) {
  std :: cout << " the first uniform eletrctic field is " << R1 << '\n';
  std :: cout << " the second uniform eletrctic field is " << R2 << '\n'; 
  std :: cout << " the third uniform eletrctic field is " << R3 << '\n';
  std :: cout << " are they Equal ? " << '\n';
  std :: cout << isEqual ( R1 , R2 , R3 ) << '\n'; 
}


double fail () {
  std :: cout << " fail to caculate " << '\n';

return 0;
}

int main () {
  std :: cout << std :: setprecision (6);
  std :: cout << std :: boolalpha;
  std :: cin >> std :: boolalpha; 
  start ();
  if ( trueOrFalse ()) {
  double U1 { UEF () };
  double U2 { UEF2 () };
  double U3 { UEF3 () };
  result ( U1 , U2 , U3 ); 
}

  else 
    std :: cout << " fail to caculate " << '\n';      

return 0; 
}