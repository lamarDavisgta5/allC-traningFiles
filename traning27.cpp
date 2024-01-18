# include <iostream>
# include <cmath>


void start () {
  std :: cout << " press any key to make a geomatric sequnce by N∑n=1arn−1=a(1−rN)1−r: " << '\n';
  std :: string key {};
  std :: cin >> key;

}

int firstNum () {
  std :: cout << " enter the first number of the sequnce : " << '\n';
  int firstNumber {};
  std :: cin >> firstNumber;

return firstNumber;
}

int secondNum () {
  std :: cout  << " enter the second number of the sequnce : " << '\n';
  int secondNumber {};
  std :: cin >> secondNumber;

return secondNumber;
}


int sequnceNumber () {
  std :: cout << " enter the number of the sequnce : " << '\n';
  int n {};
  std :: cin >> n;

return n;
}


void sequnceMaker () {
  std :: cin >> std :: boolalpha;
  int a { firstNum () };
  int SN { secondNum () };
  int r { SN / a };
  int N { sequnceNumber () };
  int rN { std :: pow ( r , N ) };
  std :: cout << " the total of the sequnce is " << ( a * ( 1 - rN ) ) / ( 1 - r ) << '\n';
  std :: cout << " enter true value to make it in a geomatric sequnce : " << '\n';
  bool trueOrFalse {};
  std :: cin >> trueOrFalse;

  if ( trueOrFalse ) {
    std :: cout << " you enter true " << '\n';
    std :: cout << " the sequnce is " << '\n';
    int n { 1 };

    for ( int i { 1 }; i <= N; ++ i ) {
      std :: cout << a * ( std :: pow ( r , ( n - 1 ) ) ) << '\n';   
      ++ n;

    }

      std :: cout << " enter true to power the sequnce in any number : " << '\n';
      std :: cout << " enter false to root the sequnce : " << '\n';
      bool trueOrFalse2 {};
      std :: cin >> trueOrFalse2;

      if ( trueOrFalse2 ) {
        std :: cout << " you enter true " << '\n';
        std :: cout << " enter the power : " << '\n';
        int power {};
        std :: cin >> power;
        std :: cout << " the sequnce is : " << '\n';
        int n { 1 };
        
        for ( int i { 1 }; i <= N; ++ i ) {
          std :: cout << std :: pow (  ( a * ( std :: pow ( r , ( n - 1 ) ) ) ) , power ) << '\n';
          ++ n;

        }
      }
      else {
        std :: cout << " you enter flase " << '\n';
        std :: cout << " the root of the sequnce is : " << '\n';
        int n { 1 };

        for ( int i { 1 }; i <= N; ++ i ) {
          std :: cout << std :: sqrt ( a * ( std :: pow ( r , ( n - 1 ) ) ) ) << '\n';
          ++ n;

        }
      }  

  }
  else 
    std :: cout << " you enter false " << '\n';
 
}





int main () {
  start ();
  sequnceMaker (); 

return 0; 
}