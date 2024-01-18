# include <iostream>
# include <cstdint>
# include <bitset>

int main () {
  constexpr std :: uint32_t redB {0xFF00'0000};
  constexpr std :: uint32_t greenB {0x00FF'0000};
  constexpr std :: uint32_t blueB {0x0000'FF00};
  constexpr std :: uint32_t alphaB {0x0000'00FF};
  std :: cout << " enter a 32_bit color in hexadsimal : " << '\n';
  std :: uint32_t pixel {};
  std :: cin >> std :: hex >>pixel; 
  
  std :: uint8_t red {static_cast<std :: uint8_t> (( pixel & redB ) >> 24 )};
  std :: uint8_t green {static_cast<std :: uint8_t> (( pixel & greenB ) >> 16 )};
  std :: uint8_t blue {static_cast<std :: uint8_t> (( pixel & blueB ) >> 8 )};
  std :: uint8_t alpha {static_cast<std :: uint8_t> (( alpha & alphaB ))};

  std :: cout << " your color cantains : " << '\n';
  std :: cout << std :: hex;
  std :: cout << " red : " << static_cast <int> (red) << '\n';
  std :: cout << " green : " << static_cast <int> (green) << '\n';
  std :: cout << " blue : " << static_cast <int> (blue) << '\n';
  std :: cout << " alpha  : " << static_cast <int> (alpha) << '\n';


return 0; 
}