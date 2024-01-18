# include <iostream>
# include <iomanip>
  
void start () {
  std :: cout << " enter the true valeu to caculate tringel area and envoierment : " << '\n';

}

bool trueOrfalse () {
  bool tOrF {};
  std :: cin >> tOrF;

return tOrF;
}


int triengel1 () {
  std :: cout << " you entered true " << '\n';
  std :: cout << " enter the base of the tringel one in form of integer : " << '\n';
  int base1 {};
  std :: cin >> base1;
  std :: cout << " enter the height of tringel one in form of intger : " << '\n';
  int height1 {};
  std :: cin >> height1;

return base1 * height1;
}


int triengel2 () {
  std :: cout << " enter the base of the tringel two in form of intger : " << '\n';
  int base2 {};
  std :: cin >> base2;
  std :: cout << " enter the height of tringel two in form of intger : " << '\n';
  int height2 {};
  std :: cin >> height2;

return base2 * height2;
}


 bool isEqual ( int A1 , int A2 ) {
  
return ( A1 == A2 ); 
}

void result ( int R1 , int R2 ) {
  std :: cout << " the area for tringel one is " << R1 / static_cast<double>(2) << '\n'; 
  std :: cout << " the area for tringel two is " << R2 / static_cast<double>(2) << '\n';
  std :: cout << " are they equal ? " << '\n';
  std :: cout << isEqual ( R1 , R2 ) << '\n';
}




int main () {
  std :: cout << std :: boolalpha;
  std :: cin >> std :: boolalpha;
  start ();
  if ( trueOrfalse() == true ) {
    int area1 {triengel1 ()};
    int area2 {triengel2 ()};
    result (area1, area2);

  }
  else { 
    std :: cout << " you entered false " << '\n';
    std :: cout << " please enter true correctly if you wish to caculate :  " << '\n';
  }
return 0; 
}