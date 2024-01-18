# include "cylinder.h"

void result ( double R1 , double R2 , double R3 , double R4 ) {
  std :: cout << " the mass for cylinder one is " << R1 << '\n'; 
  std :: cout << " the mass for cylinder two is " << R2 << '\n'; 
  std :: cout << " the mass for cylinder three is " << R3 << '\n'; 
  std :: cout << " the mass for cylinder four is " << R4 << '\n'; 
  std :: cout << " Equality ? " << '\n';
  if ( R1 == R2 && R3 == R4 )
    std :: cout << " all the cylinders are equal " << '\n';  
  if ( R1 == R2 && R3 != R4)
    std :: cout << " the cylinder one and two are equal " << '\n'; 
  if ( R1 != R2 && R3 == R4)
    std :: cout << " the cylinder three and four are equal " << '\n'; 
  if ( R1 != R2 && R3 != R4)
    std :: cout << " no cylinders are equal " << '\n';
}
