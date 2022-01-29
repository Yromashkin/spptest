#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    int n=3, D=0;
    int A[3][3];
    for (int i=0;i<n;i++) 
        for (int j=0;j<n;j++) 
            A[i][j] = rand()%20 - 10;

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
           cout << A[i][j] << "   "; }
           cout << endl; }
    
   for (int i=0;i<n;i++) 
        for (int j=0;j<n;j++) 
            if (A[i][j]>0) D = D + A[i][j];
            
    cout << "D=" << D;
    
}
