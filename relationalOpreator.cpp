# include <iostream>



int main () {
  std :: cout << " enter an intger : " << '\n';
  int num {};
  std :: cin >> num; 
  if ( num == 0 )
    std :: cout << " the number is zero " << '\n';
  if ( num != 0) 
    std :: cout << " the number is not zero " << '\n';
  if ( num > 0 ) 
    std :: cout << " the number is positive " << '\n';
  if ( num < 0 )
    std :: cout << " the number is negetive " << '\n';
  if ( num >= 10 )
    std :: cout << " the number is 10 or highter " << '\n';
  if ( num <= 10 )
    std :: cout << " the number is 10 or lower " << '\n';
  if ( 100 < num < 200)
    std :: cout << " the number is between 100 and 200 " << '\n'; 



return 0; 
}