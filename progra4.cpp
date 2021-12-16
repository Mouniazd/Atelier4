#include <iostream>
#include <list>
#include<string.h>
using namespace std;
class Personne {
public :
string nom;
string prenom;
int age ;
public :
Personne(string nom,string prenom , int age ){
this->nom = nom ;
this->prenom = prenom ;
this->age = age;
}
};

void afficher(list<Personne>L1){
 list<Personne>::iterator it;

for (it = L1.begin(); it != L1.end(); ++it){

cout<<it->nom<<" ";
cout<<it->prenom<<" ";
cout<<it->age<<"\n";
}

}
void triee(list<Personne>L1){
 list<Personne>::iterator it,tmp;
 
for(it=L1.begin();it!=L1.end();it++){
   
   if (it->nom > (it++)->nom )
   {   

       cout<<(it++)->nom<<" ";
       cout<<(it++)->prenom<<" ";
        cout<<(it++)->age<<"\n";
    
      
      
   }
   else 
     cout<<it->nom<<" ";
      cout<<it->prenom<<" ";
       cout<<it->age<<" ";
   }


}


int main()
{
 
list<Personne> L1;


L1.push_back(Personne("sara", "sara", 15));
L1.push_back(Personne("yassin", "yass", 25));
L1.push_back(Personne("amir", "amir", 19));

afficher(L1);


return 0;   
}