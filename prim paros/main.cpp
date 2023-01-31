#include <iostream>

using namespace std;

int main()
{
   int szam,szamjegy;
   int ujszam=0;
   cout<<"szam=";
   cin>>szam;
   int tmp=szam;
   while (szam>0){
    szamjegy=szam%10;
    szam=szam/10;
    ujszam=ujszam*10+szamjegy;

   }
   if(tmp==ujszam && szam%2==0)
    cout<<"Igen";
   else{
    cout<<"Nem";
   }
    return 0;
}
