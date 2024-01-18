# include <iostream>
# include <bitset>
# include <string>
# include "result2.h"

int input1 () {
  std :: cout << " enter a first name : " << '\n';
  std :: string fName {};
  std :: getline ( std :: cin >>  std :: ws , fName);

return fName.length();
}


int input2 () {
  std :: cout << " enter a last name to molttplied by your first name  : " << '\n';
  std :: string LName {};
  std :: getline ( std :: cin >>  std :: ws , LName);

return LName.length();
}

int input3 () {
  std :: cout << " enter a secend first name : " << '\n';
  std :: string fName2 {};
  std :: getline ( std :: cin >> std :: ws , fName2);

return fName2.length();
}


int input4 () {
  std :: cout << " enter a secend last name to molttplied by your secend first name  : " << '\n';
  std :: string LName2 {};
  std :: getline ( std :: cin >>  std :: ws , LName2);

return LName2.length();
}








int main () {
  std :: cout << std :: boolalpha;
  int FN1 { input1 () };  
  int LN1 { input2 () }; 
  int FN2 { input3 () }; 
  int LN2 { input4 () }; 
  result (FN1 , LN1 , FN2 , LN2);
  


return 0; 
}