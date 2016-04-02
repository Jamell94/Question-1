#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <vector>


using namespace std;
// DECLARE FUNCTIONS //
bool check(double place);

//The Main Part of the Code//

int main()
{
double L,T,alpha,place;
int Nx,Nt;
cout << "What is the length of the bar, L?" << endl;
do{
cin >> L;
place == L;
}
while (check(L)==false);

cout <<"What is the time period, T? "<< endl;
do{
cin >> T;
place == T;
}
while (check(T)==false);
cout << "What is the diffusivity constant, alpha?" << endl;
do{
cin >> alpha;
place == alpha;
}
while (check(alpha)==false);
cout <<"Number of grid points, Nx?"<<endl;
do{
cin >> Nx;
place == Nx;
}
while (check(Nx)==false);
cout <<"Number of time steps, Nt" <<endl;
do{
cin >> Nt;
place == Nt;
}
while (check(Nt)==false);
cout <<""

return 0;

}

bool check(double place)
{
bool correct = false;

if ((!cin.fail()) && (place>0))
correct = true;
else
{cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout <<"Please re-enter" <<endl;
correct = cin.fail();

return correct;
}


}

