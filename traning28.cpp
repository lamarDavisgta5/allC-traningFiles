# include <iostream>
# include <cmath>
# include <math.h>

void start () {
  std :: cout << " press any key to caculate arithmetic sequence : " << '\n';
  std :: string key {};
  std :: cin >> key;

}


int firstnum () {
  std :: cout << " enter the first number of the sequence : " << '\n';
  int firstNumber {};
  std :: cin >> firstNumber;

return firstNumber;
}


int secondNum () {
  std :: cout << " enter the second number of the sequnce " << '\n';
  int secondNumber {};
  std :: cin >> secondNumber;

return secondNumber;
}

int lastNumber () {
  std :: cout << " enter the last number of the sequnce : " << '\n';
  int lastNumber {};
  std :: cin >> lastNumber;

return lastNumber;
}
 

void reasult () {
  std :: cin >> std :: boolalpha;
  int FN { firstnum () };
  int SN { secondNum () };
  int LN { lastNumber () };
  int d { SN - FN };
  int n { ( ( LN - FN ) / d ) + 1 };
  int Sn { ( n * ( LN + FN ) ) / 2 };
  std :: cout << " your total sequnce is " <<  Sn << '\n';
  std :: cout << " enter a true value to make a arithmetic sequence : " << '\n';
  bool trueOrFalse {};
  std :: cin >> trueOrFalse;

  if ( trueOrFalse ) {
    std :: cout << " you enter true " << '\n';
    std :: cout << " the sequnce is " << '\n';
    int mulitiply { -1 };

    for ( int i { 0 }; i <= ( n - 1 ); ++ i ) {
      ++ mulitiply; 
      std :: cout << FN + ( d * mulitiply ) << '\n'; 
    }

    std :: cout << " enter true to power the sequnce in any number " << '\n';
    std :: cout << " press false to root the sequnce to 2 " << '\n';
    bool trueOrFalseTwo {};
    std :: cin >> trueOrFalseTwo;

    if ( trueOrFalseTwo ) {
      std :: cout << " you enter true " << '\n';
      std :: cout << " enter the power : " << '\n';
      int power {};
      std :: cin >> power;
      std :: cout << " the power of the sequnce is " << '\n';
      int mulitiply { -1 };

      for ( int i { 0 }; i <= ( n - 1 ); ++ i ) {
        ++ mulitiply; 
        std :: cout << std :: pow ( ( FN + ( d * mulitiply ) ) , power ) << '\n';
      }

    }
    else {
      std :: cout << " you enter false  " << '\n';
      std :: cout << " the root of the sequnce is " << '\n';
      int mulitiply {};

      for ( int i { 0 }; i <= ( n - 1 ); ++ i ) {
        ++ mulitiply;
        std :: cout << std :: sqrt ( ( FN + ( d * mulitiply ) ) ) << '\n';
      }
    }

    }
  else 
    std :: cout << " you enter flase " << '\n';


}

int main () {
  start ();
  reasult ();

return 0;
}