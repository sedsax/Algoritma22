#include <iostream>
using namespace std;


int iterativeEBOB(int m, int n) {
    int r;
    while(n != 0) {
        
        r = m%n;
        m = n;
        n = r;
    }
    return m;
}

int recursiveEBOB(int m, int n) {
    if(n == 0) 
        return m;
    else
        return recursiveEBOB(n, m%n);
}

int main(){
    
    int m,n,r;
    cin>>m>>n;
    
    cout<<"iterative yöntem ile ebob("<<m<<","<<n<<") : "<<iterativeEBOB(m,n)<<endl;
    cout<<"recursive yöntem ile ebob("<<m<<","<<n<<") : "<<recursiveEBOB(m,n)<<endl;

    return 0;
}

/*
---------------------------------------------------
24
27
iterative yöntem ile ebob(24,27) : 3
recursive yöntem ile ebob(24,27) : 3
---------------------------------------------------
51
7
iterative yöntem ile ebob(51,7) : 1
recursive yöntem ile ebob(51,7) : 1
---------------------------------------------------
0
144
iterative yöntem ile ebob(0,144) : 144
recursive yöntem ile ebob(0,144) : 144
---------------------------------------------------
24
264
iterative yöntem ile ebob(24,264) : 24
recursive yöntem ile ebob(24,264) : 24
---------------------------------------------------
186
0
iterative yöntem ile ebob(186,0) : 186
recursive yöntem ile ebob(186,0) : 186
---------------------------------------------------
*/
