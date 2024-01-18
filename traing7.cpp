# include <iostream>
# include <iomanip>


void start () {
  std :: cout << " enter a true value to cacuale regtangel area : " << '\n';

}



bool trueOrfalse () {
  bool tOrf {};
  std :: cin >> tOrf;


return tOrf;
}

double regtangelOne () {
  std :: cout << " you entered true " << '\n';
  std :: cout << " enter the lenght of the regtangel one : " << '\n';
  double lenght1 {};
  std :: cin >> lenght1;
  std :: cout << " enter the witght of the regtangel one : " << '\n';
  double witght1 {};
  std :: cin >> witght1;

return lenght1 * witght1;
}


double regtangeltwo () {
  std :: cout << " enter the lenght of the regtangel two : " << '\n';
  double lenght2 {};
  std :: cin >> lenght2;
  std :: cout << " enter the witght of the regtangel two : " << '\n';
  double witght2 {};
  std :: cin >> witght2;

return lenght2 * witght2;
}

bool isEqual ( double E1 , double E2) {

return ( E1 == E2 );
}


void result ( double R1 , double R2 ) {
  std :: cout << " the area for one is " << R1 << '\n';
  std :: cout << " and for two is " << R2 << '\n';
  std :: cout << " are they equal ? " << '\n';
  std :: cout << isEqual (R1 , R2 );

}



int main () {
  std :: cout << std :: setprecision(40);
  std :: cout << std :: boolalpha;
  std :: cin >> std :: boolalpha; 
  start ();
  if ( trueOrfalse ()){
    double A1 { regtangelOne()};
    double A2 { regtangeltwo()};
    result (A1 , A2);
}

  if ( !trueOrfalse ()) 
    std :: cout << " you enter false or type true incorrectly " << '\n';



return 0; 
}