# include <iostream>
# include <cmath>


double circule1 () {
  std :: cout << " enter the radius for circule one : " << '\n'; 
  double R {};
  std :: cin >> R;
  constexpr double pibe {3.14};
  double RR { std :: pow ( R , 2 )};

return RR * pibe;
}



double circule2 () {
  std :: cout << " enter the radius for circule two : " << '\n'; 
  double R2 {};
  std :: cin >> R2;
  double RR2 { std :: pow ( R2 , 2 )};
  constexpr double pibe2 {3.14};
return RR2 * pibe2;
}

void area ( double S1 , double S2 ) {
  double GPA { S1 + S2 };
  std :: cout << " the area for one is " << S1 << '\n'; 
  std :: cout << " and the area for two is " << S2 << '\n';
  std :: cout << " the average are " << GPA / 2 << '\n'; 
  if ( GPA / 2 == 0)
    std :: cout << " the average is zero " << '\n'; 
  if ( GPA / 2 != 0)
    std :: cout << " the average is not zero " << '\n';
  if ( GPA / 2 > 0 )
    std :: cout << " the average is positive " << '\n';
  if ( GPA / 2 < 0 )
    std :: cout << " the average is negetive " << '\n';
  if ( 1000 < GPA /2 < 2000)
    std :: cout << " the average is between 1000 and 2000 "<< '\n';
  if ( GPA / 2 >= 10 )
    std :: cout << " the average is 10 or highter " << '\n';

}



int main () {
  double  area1 { circule1 ()};  
  double area2 { circule2 ()};
  area ( area1 , area2);  
  

return 0; 
}