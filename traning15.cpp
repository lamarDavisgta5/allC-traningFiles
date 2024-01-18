# include <iostream>
# include <cstdint>
# include <string>
# include <string_view>
# include <bitset>

void start () {
  std :: cout << " enter true if your first name has two part : " << '\n';

}

bool trueOrfalse () {
  bool tORF {};
  std :: cin >> tORF;
return tORF; 
}


int firstName () {
  std :: cout << " enter your name to caculate their charecters : " << '\n';
  std :: string fName {};
  std :: getline ( std :: cin >> std :: ws , fName);


return fName.length(); 
}


int firstName2 () {
  std :: cout << " enter your name to caculate their charecters : " << '\n';
  std :: string fName2 {};
  std :: getline ( std :: cin >> std :: ws , fName2);


return fName2.length(); 
}




int lastName () {
  std :: cout << " enter your last name to caculate their charecters : " << '\n';
  std :: string lName {};
  std :: getline ( std :: cin >> std :: ws , lName);


return lName.length(); 
}


int lastName2 () {
  std :: cout << " enter your last name to caculate their charecters : " << '\n';
  std :: string lName2 {};
  std :: getline ( std :: cin >> std :: ws , lName2);


return lName2.length(); 
}


void result ( int R1 , int R2 ) {
  std :: cout  << " you have " << R1 << " characters in your name " << '\n'; 
  std :: cout << " and you have " << R2 << " character in your last name " << '\n'; 

}

void result2 ( int R3 , int R4 ) {
  std :: cout << " you have " << --R3 << " characters in your first name " << '\n';
  std :: cout << " and you have " << R4 << " charecters in your last name " << '\n'; 
  constexpr std :: uint8_t zero {0b0000'0001};
  constexpr std :: uint8_t one {0b0000'0010};
  constexpr std :: uint8_t two {0b0000'0100};
  constexpr std :: uint8_t three {0b0000'1000};
  constexpr std :: uint8_t four {0b0001'0000};
  constexpr std :: uint8_t five {0b0010'0000};
  constexpr std :: uint8_t six {0b0100'0000};
  constexpr std :: uint8_t seven {0b1000'0000};
  std :: bitset <8> a {R3};
  std :: bitset <8> b {R4};
  std :: cout << a << '\n' << b << '\n'; 
  std :: cout << ( ( R3 & zero ) ? '1' : '0') << '\n';
  R3 ^= (zero | one | two | three | four | five | six | seven);
  std :: cout << ( (R3 & zero) ? '1' : '0');
}




int main () {
  std :: cout << std :: boolalpha;
  std :: cin >> std :: boolalpha;
  start (); 
  if ( trueOrfalse ()) {
    std :: cout << " you enter true " << '\n'; 
    int FN2 { firstName2 ()};
    int LN2 { lastName2 ()};
    result2 ( FN2 , LN2 ); 
}

  else { 
    std :: cout << " you enter false " << '\n';
    int FN { firstName () };
    int LN { lastName () };
    result ( FN , LN ); 
}



return 0; 
}