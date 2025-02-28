#include <iostream>
using namespace::std;

int Wking, Wqueen, Wrooks, Wbishops, Wknights, Wpawns;
int king = 1;
int queen = 1;
int rooks = 2;
int bishops = 2;
int knights = 2;
int pawns = 8;

int main()
{
    cin >> Wking >> Wqueen >> Wrooks >> Wbishops >> Wknights >> Wpawns;
    cout << king - Wking << " " << queen - Wqueen << " " << rooks - Wrooks << " " << bishops - Wbishops << " " << knights - Wknights << " " << pawns - Wpawns << " ";
	return 0;
}