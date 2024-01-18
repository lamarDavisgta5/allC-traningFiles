# include <iostream>


void start () {
  std :: cout << " press any key to caculate arithmetic sequence : "<< '\n';
  std :: string key {};
  std :: cin >> key;

}

int firstNUm () {
  std :: cout << " enter the first number of sequence : " << '\n';
  int firstNumber {};
  std :: cin >> firstNumber;

return firstNumber;
} 

int secondNum () {
  std :: cout << " enter the second number of the sequence : " << '\n';
  int secondNumber {};
  std :: cin >> secondNumber;

return secondNumber;
}


int lastNum () {
  std :: cout << " enter the last number of sequence : " << '\n';
  int lastNumber {};
  std :: cin >> lastNumber;

return lastNumber;
}

int distance () {
  std :: cout << " enter the distance of number of the sequence : " << '\n';
  int distance {};
  std :: cin >> distance;

return distance;
}

void S () {
  std :: cin >> std :: boolalpha;
  int FN { firstNUm () };
  int LN { lastNum () };
  int d { secondNum () - FN };  
  int n { ( ( (LN - FN) / d ) + 1 ) };
  std :: cout << " the s of the sequence is " << n * ( FN + LN ) / 2  << '\n';
  std :: cout << " enter true value to see whole the sequence : " << '\n';
  bool tOrF {};
  std :: cin >> tOrF;

  if ( tOrF ) {
    int counter {};
    int mulitiply {};
    std :: cout << " the sequence is " << '\n';
    std :: cout << FN << '\n';
    while ( counter <= ( n - 2 ) ) {
      ++ counter; 
      ++ mulitiply;
      std :: cout << FN + ( d * mulitiply ) << '\n';


    }
  }
  else 
    std :: cout << " you enter false " << '\n';

}

int main () {
  start ();
  S ();


return 0; 
}