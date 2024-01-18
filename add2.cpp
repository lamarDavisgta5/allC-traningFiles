bool isEqual ( int B1 , int B2) {

return ( B1 == B2 );
}

bool notEqual ( int B1 , int B2 ) {

return ( B1 != B2 );
}

bool oneIsBiggerThanTwo( int B1 , int B2) {

return ( B1 > B2 );
}

bool oneIsSmallerThanTwo ( int B1 , int B2) {

return ( B1 < B2 );
}
void result ( int R1 , int R2 , int R3 , int R4) {
  int R12 { R1 * R2 };
  int R34 { R3 * R4 };
  std :: cout << " the anwer for one is " << R12 << '\n';
  std :: cout << " the anwer for two is " << R34 << '\n';
  std :: cout << " are they equal ? " << '\n';
  std :: cout << isEqual ( R12 , R34 ) << '\n';
  std :: cout << " are they in Equal ? " << '\n';
  std :: cout << notEqual ( R12 , R34 ) << '\n';
  if ( oneIsBiggerThanTwo ( R12 , R34 ) && notEqual ( R12 , R34 ))
    std :: cout << " one is bigger than two " << '\n'; 
  if ( oneIsSmallerThanTwo ( R1 * R2 , R3 * R4 ) && notEqual ( R12 , R34 ))
    std :: cout << " one is smaller than two " << '\n'; 
  std :: bitset <8> a {R12};
  std :: cout << " in binary for one is " << a << '\n';
  std :: cout << ( a << 1 ) << '\n'; 
  std :: cout << ( a >> 1 ) << '\n';
  std :: cout << ( std :: bitset <8> {R12} | std :: bitset <8> {R34}) << '\n'; 
}
