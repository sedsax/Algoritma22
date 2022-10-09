
#include <iostream>

using namespace std;

int main()
{
   
   /*
   24 ve 88 sayılarının ebobunu nasıl bulurum:
   88 - 24 = 64
   64 > 24 mü evet 
   64 - 24 = 40
   40 > 24 mü evet 
   40 - 24 = 16 
   16 > 24 mü hayır döngü bitti. 24 ü kaç kez çıkardık 3 kez. 2*2*2 = 8 (24/8 = 3, 88/8 = 11 ; 3 ve 11 in daha fazla böleni yok)
   --------------------------------------------
   3 ve 7 nin ebobunu düşünelim. yukardaki fikir yanlış çıktı, tesadüf, böyle olamaz. Yukardakine göre ebob 2 ama aslında 1.
   o zaman;
   Şu algoritmaları bir türlü çözemedim ama ben kalem kağıtla nasıl yapıyorum bi ona bakalım: verilen sayıları yan yana yazıp 
   sırayla asal sayılara bölüyorum (2 den başlayıp ...)
   mesela;
   24 88 | 2 +
   12 44 | 2 +
    6 22 | 2 +
    3 11 | 3 
    1 11 | 11
    1 1  bitti
  burdan sonra ikisinin de ortak bölündüğü bir sayı yok. ekok olsaydı 3 ve 11 ile bölüm 1 olana kadar devam ederdik
  bulduğum değerleri de birbiriyle çarpınca, en büyük ortak böleni bulmuş oluyoruz. Peki çok güzel, bunu koda nasıl dökeriz?
  24 27 | 2 
  12 27 | 2 
  6  27 | 2 
  3  27 | 3 + (ikisine de bölünen tek sayı)
  1  9  | o zaman algoritma burda bitmeli, peki neden, çünkü sayılardan biri 1 oldu. ebob 3 
   Benim yöntemime göre şöyle yapabilirim:
   int ebob = 1;
   for(int i=2; i<=küçük olan sayı + 1; i++) { 
       if(küçük sayı % i == 0 && büyük sayı % i == 0) {
           ebob = ebob * i;
       }
       else if(küçük sayı % i == 0) {
           küçük sayı = küçük sayı / i;
       }
       else if(büyük sayı % i == 0) {
           büyük sayı = büyük sayı / i;
       }
   }
   bu döngü sonucunda da ebobu yazdırabilirim. Kodda yazmayı deneyeli bakalım çalışacak mı?
   */
   
   int a,b,min, max;
   int ebob = 1;
   
   cin>>a>>b;
   if(a<b) {
       min = a;
       max = b;
   }else{
       min = b;
       max = a;
   }
   for(int i=0; i<min; i++) {
       if(min%(i+2)==0 && max%(i+2)==0) {
           ebob*=(i+2);
       }
      // aslında 2 den başlayıp küçük sayının değerine kadar tüm sayıları denediğimizde else if kısmına gerek kalmıyor
   }
   cout<<ebob<<endl;
   //tabii ki düzgün çalışmadı çünkü sadece asal sayıları denemem gerekiyordu
   
   //Asal sayıların her birini illa bir kez deneyeceğim diye bir şey yok ki, ya ikisi de üç kez 2 ye bölünebiliyorsa?

    return 0;
}
