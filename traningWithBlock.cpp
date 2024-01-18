# include <iostream>
# include <string>

int charNumbers () { 
  {
    std :: cout << " enter your name to caculate the char \n and see is it even or odd : " << '\n';
    std :: string fullName {};
    std :: getline ( std :: cin >> std :: ws , fullName);
    int charName { static_cast <int> ( fullName.length ()) };
  

return charName;  
} 
}




void result ( int charN ) {
  if ( charN > 0 ) {
    if ( (charN % 2) == 0) {
      std :: cout << " your name characthers are positive " << '\n';
      std :: cout << " and even " << '\n';
    }
    else {
      std :: cout << " your name characthers are positive " << '\n';
      std :: cout << " and odd " << '\n';

    }    

}


}




int main () {
  int CN { charNumbers ()};
  result ( CN ); 




return 0; 
}