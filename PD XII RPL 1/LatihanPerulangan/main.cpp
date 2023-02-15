#include <iostream>

using namespace std;

int main()
{
   int i;
   cout << "=== For ===" << endl;
   for(i=0; i<10; i++){
   cout << "Perulagan ke :"<< i << endl;
   }
cout << "" << endl;
    int j =0;
    char tambah = 'y';
    cout << "==== While ====" << endl;
    while(tambah == 'y') {
    cout<< "perulangan ke :" <<j <<endl;
    cout << "Apakah ingin nambah? (y/n)";
    cin >> tambah;
    j++;

   }
    return 0;
}
