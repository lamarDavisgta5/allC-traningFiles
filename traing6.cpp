# include <iostream>


int main () {
  std :: cout << std :: boolalpha;
  std :: cin >> std :: boolalpha;
  std :: cout << " enter a true valeu to continue : " << '\n';
  bool B1 {};
  std :: cin >> B1;
  if (B1)
  std :: cout << " hi " ;
  if (!B1)
  std :: cout << " goodbye" << '\n'; 

return 0; 
}