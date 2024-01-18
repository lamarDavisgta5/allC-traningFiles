# include <iostream>

int firstNumAndLastNum () {
  std :: cout << " enter the first number of squance : " << '\n';
  int firstNum {};
  std :: cin >> firstNum;
  std :: cout << " enter the last num of squancu : " << '\n';
  int LastNum {};
  std :: cin >> LastNum;


return LastNum - firstNum;
}


int d () {
  std :: cout << " enter the distance between squance  : " << '\n';
  int secondNum {};
  std :: cin >> secondNum;

return secondNum;
}


void result ( int R1 , int R2 ) {
  int R12 { R1 / R2 };
  std :: cout << " the number of squance is " << ++R12 << '\n'; 



}





int main () {
  int FL {firstNumAndLastNum ()};
  int D {d()};
  result (FL , D);


return 0; 
}