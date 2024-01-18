# include <iostream>

extern const double pi;

double circuleTwo () {
  std :: cout << " enter a second radius for circule two : " << '\n';
  double radius {};
  std :: cin >> radius;

return radius * radius * pi;
}


void result ( double R1 , double R2 ) {  
  std :: cout << " the circule one S is " << R1 << '\n';
  std :: cout << " the circule two S is " << R2 << '\n'; 

}



const double pi {3.14};