# include <iostream>
# include <iomanip>
# include <cmath>
constexpr double pi {3.14};


double circule () {
  using std :: cout;
  using std :: cin;
  using std :: pow;
  cout << " enter the radius for area : " << '\n';
  double R {};
  cin >> R;
  double RR { pow ( R , 2 )};
return RR*pi;
}

bool isEquality ( double E1 , double E2 ) {

return ( E1 == E2 );
}


namespace circuleEnvoierment {
  using std :: cout;
  using std :: cin;

  double circule () {
    cout << " enter a radius again to caculate the envoierment : " << '\n';  
    double R {};
    cin >> R;
    double diameter { R + R };
  return diameter * pi;    
  }

  void result () {
    using std :: cout;
    double R1 { ::circule () };
    double R2 { circule () };
    cout << " the area is " << R1 << '\n';
    cout << " the envoierment is " << R2 << '\n';
    cout << " are the area and envoirement equal ? " << '\n';
    cout << ::isEquality ( R1 , R2 ) << '\n';
    if ( R1 != R2 )
    cout << (( R1 > R2 ) ? " the area is bigger " : " the envoierment is bigger " ) << '\n';

  }





}



int main () {
  using std :: boolalpha;
  using std :: setprecision;
  using std :: cout;
  cout << boolalpha;
  cout << setprecision (10);
  circuleEnvoierment :: result();
return 0; 
}