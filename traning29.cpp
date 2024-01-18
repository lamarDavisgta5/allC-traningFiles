# include <iostream>
# include <cmath>

void start () {
  std :: cout << " A truck starts moving with a constant acceleration from a stationary position,\n after the first second has passed, it continues its movement for the second second\n, and then, due to the sight of an obstacle at a distance of 120 meters, it brakes as much as it does in the third second . it stops " << '\n';
  std :: cout << " press any key to caculate the whole of the displacement : " << '\n';
  std :: string key {};
  std :: cin >> key;
  
}

double acceleration () {
  std :: cout << " enter the constant accelaration in m / s^2 : " << '\n';
  double Cacceleration {};
  std :: cin >> Cacceleration;

return Cacceleration;
}

double time1 () {
  tryAgain :
  std :: cout << " enter the first time in s : " << '\n';
  double t1 {};
  std :: cin >> t1;

  if ( t1 == 0 || t1 < 0 ) {
    std :: cout << " not suitble number for time " << '\n';
    goto tryAgain;
  }

return t1;
}

double time2 () {
  tryAgain :
  std :: cout << " enter the second time in s : " << '\n';
  double t2 {};
  std :: cin >> t2;

    if ( t2 == 0 || t2 < 0 ) {
    std :: cout << " not suitble number for time " << '\n';
    goto tryAgain;
  }

return t2;
}


double time3 () {
  tryAgain :
  std :: cout << " enter the third time in s : " << '\n';
  double t3 {};
  std :: cin >> t3;

    if ( t3 == 0 || t3 < 0 ) {
    std :: cout << " not suitble number for time " << '\n';
    goto tryAgain;
  }

return t3;
}


double formila ( double a , double t , double v0 ) {
  double T { std :: pow ( t , 2 ) };
  double F  { (0.5 * ( a * T ) ) + ( v0*t ) };

return F;
}

double formila2 ( double t , double v0 , double v ) {
  double F { 0.5 * ( v0 + v ) * t };

return F;
}



void displacement () {
  double a { acceleration () };
  double t1 { time1 () };
  double t2 { time2 () };
  double t3 { time3 () };
  int v01 { 0 };
  double v1 { ( a * t1 ) + v01 };
  double v02 { v1 };
  double v2 { v1 };
  double v03 { v1 };
  double v3 { 0 }; 
  std :: cout << " the first dispalcement is " << '\n';
  std :: cout << formila ( a , t1 , v01 ) << 'm' << '\n';
  std :: cout << " the second displacement is " << '\n';
  std :: cout << ( v2 * t2 )  << 'm' << '\n';
  std :: cout << " the third diplacement is " << '\n';
  std :: cout << formila2 ( t3 , v03 , v3 ) << 'm' << '\n';
  double Dx1 { formila ( a , t1 , v01 ) };
  double Dx2 { v2 * t2 };
  double Dx3 { formila2 ( t3 , v03 , v3 ) };
  std :: cout << " the total displacement is " << Dx1 + Dx2 + Dx3 << 'm' << '\n';

  if ( ( Dx1 + Dx2 + Dx3 ) > 120 )
    std :: cout << " the truck hit the obscale " << '\n';
  else
    std :: cout << " the truck did not hit the obscale " << '\n';
}





int main () {
  start ();
  displacement ();

return 0; 
}