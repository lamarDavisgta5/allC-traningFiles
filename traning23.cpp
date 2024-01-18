# include <iostream>
extern const double pi;

double circuleOne () {
  std :: cout << " enter a radius : " << '\n';
  double radius {};
  std :: cin >> radius;
  
return radius * radius * pi;
}

double circuleTwo ();


void result ( double R1 , double R2 );

int main () {
  double circule1 { circuleOne () }; 
  double circule2 { circuleTwo () };
  result ( circule1 , circule2 );

return 0; 
}