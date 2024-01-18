# include <iostream>
# include <cmath>
# include <iomanip>
void start () {
  std :: cout << " enter a true valeu to caculate and compare two circule area  : " << '\n';

}



bool tOrF () {
  bool trueOrFalse {};
  std :: cin >> trueOrFalse;

return trueOrFalse;
}

double circule1 () {
  std :: cout << " enter the radius for circule one  : " << '\n';
  double r {};
  std :: cin >> r; 
  double rr { std :: pow( r , 2)};

return rr;  
}


double circule2 () {
  std :: cout << " enter the radius for circule two  : " << '\n';
  double r2 {};
  std :: cin >> r2; 
  double rr2 { std :: pow( r2,2 )};

return rr2;  
}

bool isEqual ( double iE1 , double iE2) {

return ( iE1 == iE2 );
}


void result ( double R1 , double R2 ) {
  constexpr double  P {3.14};
  std :: cout << " the area for circule one is " << R1 * P << '\n';
  std :: cout << " and the area for circule two is " << R2 * P << '\n';
  std :: cout << " are area one and two equal ? " << '\n';
  std :: cout << isEqual ( R1 , R2 ) << '\n';
}






int main () {
  std :: cout << std :: boolalpha;
  std :: cin >> std :: boolalpha; 
  std :: cout << std :: setprecision(10);
  start ();
if ( tOrF () == true ) {
    double A1 {circule1 ()};
    double A2 {circule2 ()};
    result ( A1 , A2 );
}

else if ( tOrF () == false ) 
    std :: cout << " you enter false or did not type true correctly " << '\n';
return 0; 
}