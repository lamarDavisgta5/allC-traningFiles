# include <iostream>


double AE () {
  std :: cout << " enter a one side of the square : " << '\n';
  double side {}; 
  std :: cin >> side; 


return side * side;
}

bool isEquality ( double E1 , double E2 ) {

return ( E1 == E2 );
}


namespace SP {
    double AE () {
      std :: cout << " enter a same size to caculate the area : " << '\n';
      double side {};
      std :: cin >> side;  

    return side * 4;
    }

    isEquality ( double E1 , double E2 ) {

    return ( E1 != E2 ); 
    }

    void result () {
      double a { ::AE ()};
      double b { AE()};
      std :: cout << " the s is " << a <<   '\n';
      std :: cout << " the p is " <<  b <<  '\n';
      std :: cout << " are s and p  equal ? " << '\n';
      std :: cout << ::isEquality ( a , b ) << '\n'; 
      std :: cout << " are s and p unequal ?  " << '\n'; 
      std :: cout << isEquality ( a , b ) << '\n'; 
    }





}




 


int main () {
  std :: cout << std :: boolalpha; 
  SP :: result ();

return 0;                                  
}