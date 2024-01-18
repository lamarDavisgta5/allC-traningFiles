# include <iostream>
# include <bitset>


int main () {
  std :: cout << " enter an floating point : " << '\n';
  int num {};
  std :: cin >> num; 
  std :: cout << static_cast <std :: bitset <8>> (num) << '\n'; 
  std  :: uint8_t zero {0000'0001};
  std :: uint8_t one  {0b00000010};
  std :: uint8_t two {0b00000100};
  std :: uint8_t three {0b00001000};
  std :: uint8_t four {0b00010111};  
  std :: uint8_t five {0b00100000};  
  std :: uint8_t six {0b01000000};  
  std :: uint8_t seven {0b10000000};  
  std :: cout << " the bit 0 is " << ( num & zero ) << '\n';
  std :: cout << " the bit 5 is " << ( (num & five ) ? '1' : '0') << '\n'; 
  num |= (five | two | three ); 
  std :: cout << " the bit 5 is " << ( (num & five ) ? '1' : '0') << '\n'; 
   std :: cout << " the bit 2 is " << ( (num & two ) ? '1' : '0') << '\n'; 
   std :: cout << " the bit 3 is " << ( (num & three ) ? '1' : '0') << '\n'; 
  num &= ~ (five | two | three  );
  std :: cout << " the bit 5 is " << ( (num & five ) ? '1' : '0') << '\n'; 
   std :: cout << " the bit 2 is " << ( (num & two ) ? '1' : '0') << '\n'; 
   std :: cout << " the bit 3 is " << ( (num & three ) ? '1' : '0') << '\n'; 
  num ^= ( zero | one | two | three | four | five | six ) ;
    std :: cout << " the bit 5 is " << ( (num & five ) ? '1' : '0') << '\n'; 
   std :: cout << " the bit 2 is " << ( (num & two ) ? '1' : '0') << '\n'; 
   std :: cout << " the bit 3 is " << ( (num & three ) ? '1' : '0') << '\n'; 







return 0; 
}