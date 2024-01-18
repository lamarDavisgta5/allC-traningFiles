# include <iostream>



int liquadPressure () {
  std :: cout << " enter the density of the liquad : " << '\n';
  int density {};
  std :: cin >> density; 
  std :: cout << " inter the height of liquad : " << '\n';
  int height {};
  std :: cin >> height;
  constexpr int gravity {9};


return density * gravity * height; 
}




int liquadPressure2 () {
  std :: cout << " enter the density of the liquad two  : " << '\n';
  int density {};
  std :: cin >> density; 
  std :: cout << " inter the height of liquad two : " << '\n';
  int height {};
  std :: cin >> height;
  constexpr int gravity {9};


return density * gravity * height; 
}





void result ( int LP , int LP2 ) {


  std :: cout << " the liquad pressure one is " << LP << '\n';
  std :: cout << " the liquad pressure two is " << LP2 << '\n';
  if ( LP > 0 && LP2  > 0) {  

     if ( (LP % 2) == 0 && (LP2 % 2) == 0 ) {
       std :: cout << " both are positve " << '\n';
       std :: cout << " both are even " << '\n';   
     }
     if ( (LP % 2) == 0 && (LP2 % 2) != 0 ) {
       std :: cout << " both are positve " << '\n';
       std :: cout << " liquad pressure one is even and two is odd " << '\n'; 
     }
     if ( (LP % 2) != 0 && (LP2 % 2) == 0 ) {
       std :: cout << " both are positve " << '\n';
       std :: cout << " liquad pressure  one is odd and two is even " << '\n'; 
     }
     if ( (LP % 2) != 0 && (LP2 % 2) != 0 ) {
       std :: cout << " both are positve " << '\n';
       std :: cout << " both are odd " << '\n'; 
     }
  }


 

   if ( LP < 0 && LP2  < 0)
{
      if ( (LP % 2) == 0 && (LP2 % 2) == 0 ) {
       std :: cout << " both are negetive " << '\n';
       std :: cout << " both are even " << '\n';   
     }
     if ( (LP % 2) == 0 && (LP2 % 2) != 0 ) {
       std :: cout << " both are negetive " << '\n';
       std :: cout << " liquad pressure one is even and two is odd " << '\n'; 
     }
     if ( (LP % 2) != 0 && (LP2 % 2) == 0 ) {
       std :: cout << " both are negetive " << '\n';
       std :: cout << " liquad pressure  one is odd and two is even " << '\n'; 
     }
     if ( (LP % 2) != 0 && (LP2 % 2) != 0 ) {
       std :: cout << " both are negetive " << '\n';
       std :: cout << " both are odd " << '\n'; 
     }

}




}


void result2 ( int LP , int LP2 ) {

  if ( LP < 0 && LP2 > 0 ) {
     if ( ( LP % 2 ) == 0 && ( LP2 % 2 ) == 0 ) {
       std :: cout << " liquad pressure one is negetive and two is positive  " << '\n';
       std :: cout << " both are even " << '\n'; 
     }  

     if ( ( LP % 2 ) != 0 && ( LP2 % 2 ) == 0 ) {
       std :: cout << " liquad pressure one is negetive and two positive " << '\n';
       std :: cout << " one is odd and two is even " << '\n'; 
     }

     if ( ( LP % 2 ) == 0 && ( LP2 % 2 ) != 0 ) {
       std :: cout << " liquad pressure one is negetive and two positive " << '\n';
       std :: cout << " one is even and two is odd " << '\n'; 
     }
      
      if ( ( LP % 2 ) != 0 && ( LP2 % 2 ) != 0 ) {
       std :: cout << " liquad pressure one is negetive and two positive " << '\n';
       std :: cout << " both are odd  " << '\n'; 
     }


   }

  if ( LP > 0 && LP2 < 0 ) {
     if ( ( LP % 2 ) == 0 && ( LP2 % 2 ) == 0 ) {
       std :: cout << " liquad pressure one is positive and two is negetive  " << '\n';
       std :: cout << " both are even " << '\n'; 
     }  

     if ( ( LP % 2 ) != 0 && ( LP2 % 2 ) == 0 ) {
       std :: cout << " liquad pressure one is positive and two negetive " << '\n';
       std :: cout << " one is odd and two is even " << '\n'; 
     }

     if ( ( LP % 2 ) == 0 && ( LP2 % 2 ) != 0 ) {
       std :: cout << " liquad pressure one is positive and two negetive " << '\n';
       std :: cout << " one is even and two is odd " << '\n'; 
     }
      
      if ( ( LP % 2 ) != 0 && ( LP2 % 2 ) != 0 ) {
       std :: cout << " liquad pressure one is positive and two negetive " << '\n';
       std :: cout << " both are odd  " << '\n'; 
     }


   }




}




int main () {
  int L1 { liquadPressure ()};
  int L2 { liquadPressure2 () };
  result ( L1 , L2 ); 
  result2 ( L1 , L2 ); 

return 0; 
}