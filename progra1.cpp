#include <iostream>

using namespace std;

class complexe
{
  double x ,y;  
public:
  complexe(double r,double i){
      x=r;
      y=i;
  }
  complexe Entree();

   complexe operator+(const complexe &c){
       return complexe(x+c.x, y+c.y);
   }
    complexe operator-(const complexe &c){
       return complexe(x-c.x, y-c.y);
   }
       
   complexe operator*(const complexe &c){
     
       return complexe(x*c.x-y*c.y, x*c.y+y*c.x);
   }   


    void afficher(){
        cout<<x<<"+ i"<<y<<endl;
    }
};


int main()
{

double r1,r2,i1,i2;

  cout<<"entrez la partie reelle :"<<endl;
    cin>>r1;
 cout<<"entrez la partie reelle :"<<endl;
    cin>>r2;
    cout<<"entrez la partie imaginaire :"<<endl;
    cin>>i1;
     cout<<"entrez la partie imaginaire :"<<endl;
    cin>>i2;
 complexe a(r1,i1);
 complexe b(r2,i2); 
  //soustraction 
 complexe s=a-b;
   s.afficher();
  //addition
 complexe add=a+b;
 add.afficher();
  //multiplication
 complexe mul=a*b;
 mul.afficher();



 return 0;
}


