# include <iostream>

namespace S {



  double trapezius () {
    std :: cout << " enter the top side of the trapezius : " << '\n';
    double topSide {};
    std :: cin >> topSide;
    std :: cout << " enter the botten side of the trapezius : " << '\n';
    double bottenSide {};
    std :: cin >> bottenSide;
    std :: cout << " enter the height of the trapezius : " << '\n';
    double height {};
    std :: cin >> height;
    double twoSide { topSide + bottenSide };
  return twoSide * height / 2;
  }
 
      namespace P {
        double trapezius () {
        std :: cout << " enter the leg side of the trapezius : " << '\n';
        double leg {};
        std :: cin >> leg;
        double twoLeg { leg + leg };
        std :: cout << " enter the top side for P " << '\n';
        double topSide {};
        std :: cin >> topSide;
        std :: cout << " enter the botten side for P " << '\n';
        double bottenSide {};
        std :: cin >> bottenSide; 

       return twoLeg + topSide + bottenSide;
        }
        


          


      }
  



}


void result ( double Envoierment , double area ) {
  std :: cout << " the area is " << area << '\n';
  std :: cout << " the envoierment is " << Envoierment << '\n';


}





int main () {
  double area { S :: trapezius () };
  namespace sAndP = S :: P;
  double envoierment { sAndP :: trapezius () };
  result ( envoierment , area );



return 0; 
}