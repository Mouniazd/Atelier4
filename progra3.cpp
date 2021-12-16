
#include <iostream>
#include <list>
using namespace std;
  

void printList(list<int> mylist)
{
    
    list<int>::iterator it;
  

    for (it = mylist.begin(); it != mylist.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';
}
  
int main()
{   int n;

   list<int> myList;

  
  for(int i=0;i<4;i++){
      cout<<"n : ";
       cin>>n;
      myList.push_back(n);
  }
  
 printList(myList);
  myList.sort();
  printList(myList);
    return 0;
}