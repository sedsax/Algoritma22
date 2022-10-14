/*
Problem: Sizden ikisi de aynı zamanda sıfıra eşit olmayan 2 negatif olmayan tam sayının 
ortak bölenlerinin en büyüğünü (OBEB) Euclid algoritmasını modifiye ederek bulmanız 
istenmektedir. Bunun için aşağıdaki özellikleri kullanmanız gerekmektedir.
(Algoritmanızda aşağıdaki özellikleri sıra ile kontrol etmelisiniz yani eğer sayılar b ve 
d özelliklerini sağlıyor ise b’ yi yapmalısınız.)

a) OBEB(2a, 2b)=2.OBEB(a,b) 
b) b tek ise OBEB(2a,b)=OBEB(a,b) 
c) OBEB(a,0)=a 
d) OBEB(a,b)=OBEB(b, a-b), eğer a≥b ise 
e) OBEB(a, b)=OBEB(b, a)

Kodunuzda bölme işlemi olarak sadece 2 ile bölmeye izin verilmektedir. 2 dışında 
başka bir sayıyla bölme işlemi yapılarak oluşturulan kodlar değerlendirme dışı 
tutulacaktır. Yazdığınız kod script ile değerlendirilecektir. Dolayısıyla aşağıda 
belirtilen girdi ve çıktı formatlarına uymanız zorunludur.
*/

#include <iostream>
using namespace std;

int ebob(int a, int b) {
    if(a%2==0 && b%2==0) {
        cout<<"a ";
        return 2*ebob(a/2,b/2);
    }
    else if(a%2==0 && b%2==1) {
        cout<<"b ";
        return ebob(a/2,b);
    }
    else if(b==0) {
        cout<<"c ";
        return a;
    }
    else if(a>=b){
        cout<<"d ";
        return ebob(b, a-b);
    }
    else{
        cout<<"e ";
        return ebob(b, a);
    }
}


int main()
{
    cout<<ebob(6,28)<<endl;
    cout<<ebob(74,3)<<endl;
    cout<<ebob(24,27)<<endl;
    cout<<ebob(100,0)<<endl;
   // cout<<ebob(0,12)<<endl; // a girdisi 0 olduğunda sonsuz döngüye giriyor tam tersi olması gerekmiyor muydu ???
    
    return 0;
}
