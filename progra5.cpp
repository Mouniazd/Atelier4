#include <iostream>
#include<set>
using namespace std;

void printset(set<int> s1)
{
  
    // Get the iterator
    set<int>::iterator it;
   cout<<"le set s1 est :\n";
    // printing all the elements of the list
    for (it = s1.begin(); it != s1.end(); ++it)
        cout << ' ' << *it;
     cout << '\n';
}
int recherche(set <int> s1,int vr){
  set<int>::iterator it ,debut,fin;

  debut=s1.begin();
  fin=s1.end();
 cout<<"le debut "<<*debut<<"\n"<<"la fin "<<*fin<<endl;
 
       if ( s1.find(vr)!=s1.end())
        {  
           cout << true ;
        }else{
           
          cout <<false ;
        }
  
}

int main(){
    set<int> s1;
   
    for ( int i = 1; i <= 100; i++)
    {
        s1.insert(i);
    }
    printset(s1);
   recherche(s1,100);
  
    return 0;
}
