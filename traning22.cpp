# include <iostream>
# include <iomanip>

static double dimend () {
    std :: cout << " enter the  large diameter of diamond three : " << '\n';
    double lDiameter {};
    std :: cin >> lDiameter;
    std :: cout << " enter the small diameter of diamond three : " << '\n';
    double sDiameter {};
    std :: cin >> sDiameter;
    double SDLD { lDiameter * sDiameter };
return SDLD / 2;
}




namespace dimendOne { 
  static double dimend () {
    std :: cout << " enter the large diameter of diamond one : " << '\n';
    double lDiameter {};
    std :: cin >> lDiameter;
    std :: cout << " enter the small diameter of diamond one : " << '\n';
    double sDiameter {};
    std :: cin >> sDiameter;
    double SDLD { lDiameter * sDiameter };
   return SDLD / 2;
  }
    namespace dimendTWO {
        static double dimend () {
          std :: cout << " enter the large diameter of diamond two : " << '\n';
          double lDiameter {};
          std :: cin >> lDiameter;
          std :: cout << " enter the small diameter of diamond two : " << '\n';
          double sDiameter {};
          std :: cin >> sDiameter;
          double SDLD { lDiameter * sDiameter };
        return SDLD / 2;
     
     
        }   

    
    
    }
}


static double diamondarea () {
   std :: cout << " enter the on side of diamond three : " << '\n';
   double side {};
   std :: cin >> side;
return side * 4;
}


namespace areaOfDiamondOne {
  static double diamondarea () {
    std :: cout << " enter the on side of diamond one : " << '\n';
    double side {};
    std :: cin >> side;
  return side * 4;
  }
  namespace areaOfDiamondTwo {
    static double diamondarea () {
    std :: cout << " enter the on side of diamond two : " << '\n';
    double side {};
    std :: cin >> side;
  return side * 4;
  }
   

 

  }





}









void result () {
  double d1 { dimendOne :: dimend() };
  namespace dimend2 = dimendOne :: dimendTWO;
  double d2 { dimend2 :: dimend () };
  double d3 { :: dimend ()};
  std :: cout << " the diamond one envoirment is " << d1 << '\n';
  std :: cout << " the diamond two envoirment is " << d2 << '\n';
  std :: cout << " the diamond three envoirment is " << d3 << '\n';
  std :: cout << " equality ? " << '\n';
  std :: cout << ((d1 == d2 && d2 == d3) ? " all the diamonds are equal " : " all the diamonds are not equal " ) << '\n';




}



void resultTwo () {
  double DA { areaOfDiamondOne :: diamondarea ()};
  namespace DA2 = areaOfDiamondOne :: areaOfDiamondTwo;
  double DATwo { DA2 :: diamondarea () };
  double DA3 { :: diamondarea () };
  std :: cout << " the area of diamond one is " << DA << '\n';
  std :: cout << " the area of diamond two is " << DATwo << '\n';
  std :: cout << " the area of diamond three is " << DA3 << '\n';

}

int main () {
  std :: cout << std :: setprecision (3); 
  result ();
  resultTwo (); 
return 0; 
}