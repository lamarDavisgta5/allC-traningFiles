# include <iostream>


void start () {
  std :: cout << " enter true to caculate squance number : " << '\n';

}

bool trueOrfalse () {
  bool tOrF {};
  std :: cin >> tOrF;

return tOrF;
}

int squance1 () {
  std :: cout << " enter the first number of squance one  : " << '\n';
  int firstNum {};
  std :: cin >> firstNum;
  std :: cout << " enter the last number of squance one  : " << '\n';
  int lastNum {};
  std :: cin >> lastNum;

return lastNum - firstNum;
}

int distanceOne () {
  std :: cout << " enter the distance between squance one  : " << '\n';
  int d {};
  std :: cin >> d;

return d; 
}

int squance2 () {
  std :: cout << " enter the first number of squance two : " << '\n';
  int firstNum2 {};
  std :: cin >> firstNum2;
  std :: cout << " enter the last number of squance two : " << '\n';
  int lastNum2 {};
  std :: cin >> lastNum2;

return lastNum2 - firstNum2;
}

int distancetwo () {
  std :: cout << " enter the distance between squance two  : " << '\n';
  int d2 {};
  std :: cin >> d2;

return d2; 
}

int f () {
  std :: cout << " false " << '\n';
}

void result ( int R1 ,int D1 , int R2 , int D2  ) {
  int R12 { R1 / D1 };
  int R34 { R2 / D2 };  
  std :: cout << " the number of squance one is " << ++R12 << '\n';
  std :: cout << " and the number of squance two is " << ++R34 << '\n';
}



int main () {
  std :: cout << std :: boolalpha;
  std :: cin >> std :: boolalpha; 
  start ();
  std :: cout << trueOrfalse()? squance1() , distanceOne() , squance2() , distancetwo() : f ()  '\n';  // FAILED ):
  result (  );

return 0; 
}