# include <iostream>
# include <string_view>
# include <string>
# include <iomanip>
# include <bitset>


void start () {
  std :: cout << " enter a true value to caculate two squars area and envierment : " << '\n';
  

}


bool trueOrFalse () {
  bool tOrF {};
  std :: cin >> tOrF;

return tOrF;
}


double square1 () {
  std :: cout << " enter the size of one side of squar one  : " << '\n';
  double side1 {};
  std :: cin >> side1; 

return side1 * side1; 
}

double SP1 () {
  std :: cout << " againg repeat that number for envierment or enter other size  : " << '\n'; 
  double num1 {};
  std :: cin >> num1;
  std :: string name1 {"abcd"}; // just for traning


return num1 * name1.length();
}


double square2 () {
  std :: cout << " enter the size of one side of squar two  : " << '\n';
  double side2 {};
  std :: cin >> side2; 

return side2 * side2; 
}

double SP2 () {
  std :: cout << " againg repeat that number for envierment or enter other size : " << '\n';
  double num2 {};
  std :: cin >> num2;
  std :: string name2 {"1234"}; // just for traning


return num2 * name2.length();
}


bool isEqual ( double R1 , double R2) {

return ( R1 == R2 );
}

bool isEqual2 ( double E1 , double E2 ) {

return ( E1 == E2 );
}


void result ( double S1 , double S2 , double P1 , double P2);




int main () {
  std :: cout << std :: setprecision(20);
  std :: cout << std :: boolalpha;
  std :: cin >> std :: boolalpha;
  start ();
if ( trueOrFalse () == true ) {
    std :: cout << " lets begin " << '\n';
    double area1 { square1 () };
    double envoirement1 { SP1 () };
    double area2 { square2 () };
    double envoirement2 { SP2 () };
    result ( area1 , area2 , envoirement1 , envoirement2 );
}    
else if ( trueOrFalse () == false ) {
    std :: cout << " you enterd false " << '\n'; 
    std :: cout << " please type true correctly if you wish to caculate " << '\n';    
}
return 0; 
}