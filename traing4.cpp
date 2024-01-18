# include <iostream>



int main () {
  std :: cout << " enter a number off arithmetic sequence  : " << '\n';
  int ASN {};
  std :: cin >> ASN;
  std :: cout << " enter the first number from arithmatic sequnece : " << '\n';
  int firstNum {};
  std :: cin >> firstNum;
  std :: cout << " enter the second number from your arithmetic sequnce : " << '\n';
  int secendNum {};
  std :: cin >> secendNum;
  int ASN2 { ASN / 2 };
  int twoa { 2 * firstNum };
  int d { secendNum - firstNum };
  int nd { --ASN * d };
  int twoan1d { twoa + nd };

    std :: cout << " the anwer is " << ASN2  * twoan1d << '\n';



}