//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/integer-or-not-fd6cb646/

#include<iostream>
using namespace std;

string Check_Integer (double N) {
   string result = "NO";
   
   if( (N-(int)N) == 0 ) {
       result = "YES";
   }
   
    return result;
}

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        double N;
        cin >> N;

        string sonuc;
        sonuc = Check_Integer(N);
        cout << sonuc<<endl;
    }
}
