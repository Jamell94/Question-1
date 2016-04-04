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
cout <<"Number of grid points, Nx? (Value can not exceed 100)"<<endl;
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

double deltax;
deltax = (L/Nx);
cout << "deltax is: " << deltax << endl;

vector <double> U;
U.reserve(102);
int i = 0;
do {

U[i]= i*deltax*(1-i*deltax);
cout << U[i];
i++;
} while(i <= Nx);
double gamma0,gamma1;
U.insert(U.begin(),gamma0);
U.insert(U.end(),gamma1);
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

