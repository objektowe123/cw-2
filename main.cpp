#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }
int main()
{
    int wiersz=1;
    int x= 40;
    int y =1;
    int wiersze=10;
    cout<<"Podaj liczbe wierszy: ";
    cin>>wiersze;
    cout<<endl;
    if(wiersze<10)
    {
    	gotoxy(3,3);
    	cout<<"Mala choinka"<<endl;
	}
	if(wiersze>10)
    {
    	gotoxy(3,3);
    	cout<<"Duza choinka"<<endl;
	}
	
    wiersze=wiersze-1;
    gotoxy(x,y);
   for( int i = 0; i < wiersz; ++i ) 
{
   cout<<"*"; 

}

for(int i=0;i<wiersze;i++)
{
    wiersz=wiersz+1; // zmniejszy³em wartoœæ zwiekszania siê iloœci znaków w ka¿dym wierszu
    x=x-1;
    y=y+1;
    gotoxy(x,y);
    for( int i = 0; i < wiersz; ++i )
    {
    cout<<"* "; // doda³em drukowanie spacji po kazdej gwiazdce
    }
}

}
