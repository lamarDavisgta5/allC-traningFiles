# include <iostream>
# include <bitset>
# include <cstdint>

int input () {
  std :: cout << " entet an intger to change it in binary system : " << '\n';
  int num {};
  std :: cin >> num;

return num;
}


void result ( int R1 ) {
  std :: cout << " your number in binary is " << std :: bitset <8> {R1} << '\n'; 

  constexpr std :: uint8_t zero (1 << 0);
  constexpr std :: uint8_t one (1 << 1);
  constexpr std :: uint8_t two (1 << 2);
  constexpr std :: uint8_t three (1 << 3);
  constexpr std :: uint8_t four (1 << 4);
  constexpr std :: uint8_t five (1 << 5);
  constexpr std :: uint8_t six (1 << 6);
  constexpr std :: uint8_t seven (1 << 7);
  std :: uint8_t r1 {R1};
 
  std :: cout << " the bit position 0 is " <<  ( ( r1 & zero ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 is " << ( ( r1 & one ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 is " <<  ( ( r1 & two ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 3 is " << ( ( r1 & three ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 4 is " << ( (  r1 & four ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 5 is " << ( ( r1 & five ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 6 is " << (  ( r1 & six ) ? " 1 " : " 0 ") << '\n'; 
  std :: cout << " the bit position 7 is " << ( ( r1 & seven ) ? " 1 " : " 0 ") << '\n';

  
  r1 ^= ( zero | one | two | three | four | five | six | seven );
  std :: cout << "now they are flip and  " << '\n'; 
  std :: cout << " the bit position 0 is " <<  ( ( r1 & zero ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 is " << ( ( r1 & one ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 is " <<  ( ( r1 & two ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 3 is " << ( ( r1 & three ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 4 is " << ( (  r1 & four ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 5 is " << ( ( r1 & five ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 6 is " << (  ( r1 & six ) ? " 1 " : " 0 ") << '\n'; 
  std :: cout << " the bit position 7 is " << ( ( r1 & seven ) ? " 1 " : " 0 ") << '\n';


  r1 |= ( zero | one | two | three | four | five | six | seven );
  std :: cout << " they all set and now " << '\n'; 
  std :: cout << " the bit position 0 is " <<  ( ( r1 & zero ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 is " << ( ( r1 & one ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 is " <<  ( ( r1 & two ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 3 is " << ( ( r1 & three ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 4 is " << ( (  r1 & four ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 5 is " << ( ( r1 & five ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 6 is " << (  ( r1 & six ) ? " 1 " : " 0 ") << '\n'; 
  std :: cout << " the bit position 7 is " << ( ( r1 & seven ) ? " 1 " : " 0 ") << '\n';
  
  r1 &= ~ ( zero | one | two | three | four | five | six | seven );
  std :: cout << " they are now reset and " << '\n'; 
  std :: cout << " the bit position 0 is " <<  ( ( r1 & zero ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 is " << ( ( r1 & one ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 1 is " <<  ( ( r1 & two ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 3 is " << ( ( r1 & three ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 4 is " << ( (  r1 & four ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 5 is " << ( ( r1 & five ) ? " 1 " : " 0 ") << '\n';
  std :: cout << " the bit position 6 is " << (  ( r1 & six ) ? " 1 " : " 0 ") << '\n'; 
  std :: cout << " the bit position 7 is " << ( ( r1 & seven ) ? " 1 " : " 0 ") << '\n';

  std :: cout << " is bitposotion 3 zero ? " << static_cast <bool> ( r1 & three) << '\n';  

}

int main () {
  std :: cout << std :: boolalpha; 
  int N { input ()};
   result  (N);


return 0; 
}