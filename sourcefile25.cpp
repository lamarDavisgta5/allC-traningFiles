# include "header25.h"

double yourHeight () {
  cout << " enter your height : " << '\n';
  double YourHeight {};
  cin >> YourHeight;
return YourHeight;
}

double mothersHeight () {
  cout << " enter your mothers height : " << '\n';
  double motherheight {};
  cin >> motherheight;
return motherheight;
}

double fathersHeight () {
  cout << " enter your fathers height : " << '\n';
  double fatherHeight {};
  cin >> fatherHeight;
return fatherHeight;
}


void result () {
  double yH { yourHeight () };
  double mH { mothersHeight () };
  double fH { fathersHeight () };
    cout << " your average family heights is " << ( yH + mH + fH ) / 3 << '\n';
}