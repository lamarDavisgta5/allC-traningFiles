# include <iostream>
# include <iomanip>
# include <cmath> 
# include "cylinder.h"

double cylinderMass () {
  std :: cout << " enter a radius for cylinder one : " << '\n';
  double radius1 {};
  std :: cin >> radius1;
  constexpr double pibe {3.14};
  double doubleRadius { std :: pow ( radius1 , 2 )};  
  double circuleEnvoierment { doubleRadius * pibe };
  std :: cout << " enter the hight for cylinder one : " << '\n'; 
  double hightC1 {};
  std :: cin >> hightC1;

return circuleEnvoierment * hightC1; 
}

double cylinderMass2 () {
  std :: cout << " enter a radius for cylinder two  : " << '\n';
  double radius2 {};
  std :: cin >> radius2;
  constexpr double pibe {3.14};
  double doubleRadius2 { std :: pow ( radius2 , 2 )};  
  double circuleEnvoierment2 { doubleRadius2 * pibe };
  std :: cout << " enter the hight for cylinder two : " << '\n'; 
  double hightCTwo {};
  std :: cin >> hightCTwo;

return circuleEnvoierment2 * hightCTwo; 
}


double cylinderMass3 () {
  std :: cout << " enter a radius for cylinder three : " << '\n';
  double radius3 {};
  std :: cin >> radius3;
  constexpr double pibe {3.14};
  double doubleRadius3 { std :: pow ( radius3 , 2 )};  
  double circuleEnvoierment3 { doubleRadius3 * pibe };
  std :: cout << " enter the hight for cylinder three : " << '\n'; 
  double hightCThree {};
  std :: cin >> hightCThree;

return circuleEnvoierment3 * hightCThree; 
}


double cylinderMass4 () {
  std :: cout << " enter a radius for cylinder four : " << '\n';
  double radius4 {};
  std :: cin >> radius4;
  constexpr double pibe {3.14};
  double doubleRadius4 { std :: pow ( radius4 , 2 )};  
  double circuleEnvoierment4 { doubleRadius4 * pibe };
  std :: cout << " enter the hight for cylinder four : " << '\n'; 
  double hightCfour {};
  std :: cin >> hightCfour;

return circuleEnvoierment4 * hightCfour; 
}







int main () {  
  double CM1 {cylinderMass ()};
  double CM2 {cylinderMass2 ()};
  double CM3 {cylinderMass3 ()};
  double CM4 {cylinderMass4 ()};
  result ( CM1 , CM2 , CM3 , CM4);


return 0; 
}