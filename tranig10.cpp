# include <iostream>
# include <iomanip>


double capaciture () {
  std :: cout << " enter the size of the laod on page by colon : " << '\n';
  double LOP {};
  std :: cin >> LOP;
  std :: cout << " enter the Potential difference between plates : " << '\n';
  double PDBP {};
  std :: cin >> PDBP;

return LOP / PDBP;
}


double capaciture2 () {
  std :: cout << " enter the size of the laod on page2 by colon : " << '\n';
  double LOP2 {};
  std :: cin >> LOP2;
  std :: cout << " enter the Potential difference 2 between plates : " << '\n';
  double PDBP2 {};
  std :: cin >> PDBP2;

return LOP2 / PDBP2;
}

bool isEqual ( double C1 , double C2 ) {


return ( C1 == C2 ); 
}

bool notEqual ( double C1 , double C2 ) {

return ( C1 != C2 );
}


bool oneIsBiggerThanTwo ( double C1 , double C2 ) {

return ( C1 > C2 ); 
}

bool oneIsSmallerThanTwo ( double C1 , double C2 ) {

return ( C1 < C2 );
}


void result ( double R1 , double R2 ) {
  std :: cout << " the capacitor capacity is  " << R1 << '\n';
  std :: cout << " and the capacitor capacity2  is " << R2 << '\n';
  std :: cout << " are they equal ? " << '\n';
  std :: cout << isEqual ( R1 , R2 ) << '\n';
  std :: cout << " are they in unequal ? " << '\n';
  std :: cout << notEqual ( R1 , R2 ) << '\n';
  std :: cout << " is one bigger than two ? " << '\n';
  std :: cout << oneIsBiggerThanTwo ( R1 , R2 ) << '\n';
  std :: cout << " is one smaller than two ? " << '\n';
  std :: cout << oneIsSmallerThanTwo ( R1 , R2 ) << '\n';
  if ( R2 != R1 && R1 > R2)
    std :: cout << " not same and one is bigger " << '\n';  
  if ( R2 != R1 && R2 > R1 )
    std :: cout << " not same and one is smaller than two " << '\n';
  if ( R2 > R1 || R1 > R2 )
    std :: cout << " one is bigger or smaller than two " << '\n'; 
  if ( (R1 != R2 && R1 > R2) || R2 > R1  )
    std :: cout << " WTF " << '\n'; 
  if ( R1 != R2 && ( R1 > R2 || R2 > R1)  )
    std :: cout << " WTF2 " << '\n'; 


}





int main () {
  std :: cout << std :: setprecision(3); 
  std :: cout << std :: boolalpha; 
  double C { capaciture ()};
  double C2 { capaciture2 ()};
  result ( C , C2 ); 
return 0; 
}