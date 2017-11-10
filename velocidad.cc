#include <iostream>
using namespace std;
int main()
{
  double d=0;
  double t=0;
  double velocidad=0;
  cout<<"vamos a calcular la velocidad"<<endl;
  cout<<"dame el valor de la distancia recorrida en metros"<<endl;
  cin>>d;
  cout<<"dame el valor del tiempo recorrido en segundos"<<endl;
  cin>>t;
  velocidad=d/t;
  cout<<"tu velocidad dada en m/s es  "<<velocidad<<endl;
  return 0;
}
