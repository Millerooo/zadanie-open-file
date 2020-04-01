#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream plik;
    plik.open( "dane.txt", ios::in );
    if( plik.good() )
    {
        string produkt;
        int licznik=0;
        cout << "Rodzaje produktow:" << endl;
        while( !plik.eof() )
        {
        	  
            plik >> produkt;  
            cout << licznik++ << "-" << produkt;    
            cout << endl; 
                         
                         
            getline( plik, produkt );
            cout <<produkt<< endl;
        }
         
		 
		 plik.close();
    }    else cout << "nie odnaleziono sciezki pliku" << endl;

    return 0;
}
