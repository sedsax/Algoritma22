#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int o_n_kare(int * arr, int size){
    
	int count=0;
	
	for(int i=0; i<size ; i++){
		if(arr[i]==1){ // öncelikle 1 'i kontrol ediyoruz
		    
			for(int j=i+1; j<size; j++){ // j=i+1 -> sonraki elemandan başlayıp dizi sonuna kadar 9 olup olmadığını kontrol ediyoruz
				if(arr[j]==9){ // bu eleman 9 ise 1 ile başlayan ve 9 ile biten bir altdizi bulmuşuz demektir
					count++;
				}
			}
		}
	}
	return count;
}

int o_n(int * arr, int size){
    
	int subarray1_9=0;
	int count=0;
	
	for (int i=0; i<size; i++){
		if(arr[i]==1 || arr[i]==9){ // 1 ile başlayıp 9 ile biten bir altdizi istediğimden ikisinin de varlığını kontrol ediyoruz
			if(arr[i]==1){
				subarray1_9++; // 1 ile başlayan bir eleman olduğunu bildiriyoruz
			}
			else if(arr[i]==9 && subarray1_9!=0){ // indisteki elemanın 9 olup olmadığını ve öncesindeki elemanlardan birinin 1 olup olmadığını kontrol ediyor
				count += subarray1_9; // eğer bu eleman 9 ise 1-9 altdizisi var demektir ve count arttırılıyor
				// burda sadece count++ yaptığımda hatalı sonuç veriyor, zaten 1 ile başlayan elemanın olduğunu da dikkate almak lazım, o yüzden subarray1_9 'i ekledim
			}
		}
	}
	return count;
}

int main(void)
{
	// MAIN FONKSİYONU DEĞİŞTİRİLMEYECEKTİR
	int size, i, *arr;
	int sonuc_n, sonuc_n_kare;
	scanf("%d",&size);
	arr = (int*)malloc(size * sizeof(int));
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	// O(n-kare) algoritmanın çalışması
	clock_t basla_kare = clock();
	sonuc_n_kare = o_n_kare(arr, size);
	clock_t bitir_kare = clock();
	double zaman_n_kare = (double)(bitir_kare - basla_kare) / CLOCKS_PER_SEC;
	//printf("O-n-kare Zaman: %f \n",zaman_n_kare);
	printf("O-n-kare Sonuc: %d \n",sonuc_n_kare);
	// O(n) algoritmanın çalışması
	clock_t basla_n = clock();
	sonuc_n = o_n(arr, size);
	clock_t bitir_n = clock();
	double zaman_n = (double)(bitir_n - basla_n) / CLOCKS_PER_SEC;
	//printf("O-n Zaman: %f \n", zaman_n);
	printf("O-n Sonuc: %d \n", sonuc_n);
	// EGER O-n yeterince hızlı ise burada DOGRU! sonucu üretilir
	if((zaman_n_kare>=zaman_n)&&(sonuc_n_kare==sonuc_n))
		printf("DOGRU!");
	else
		printf("YANLIS!");
	

}
