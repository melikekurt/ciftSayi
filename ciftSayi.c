//Melike Kurt Bu program 100den 400 e kadar olan tum rakamlari cift olan sayilari bulur ve onlarin sayisini hesaplar
#include <stdio.h>
int main() {
     int sayac=0;//tum rakamlari cift olan sayilarin sayisi icin
     for(int i=100;i<=400;i++)//100'le baslayip 400'e kadar birer birer artarak gitmeli
    {int a,b,c,d;//sartlari saglamak icin ihtiyacimiz olan degerler
    b=i%10;//modulus alarak son sayisini b ye atar
    
      if(b%2==0)//b cift olmali sartini kostuk
      {
        c=i/10;//c ye ilk iki rakamini atar
        a=c%10;//a da c den son rakami alir
        d=c/10;// d de c den ilk rakami alir
         if(a%2==0 && d%2==0){//eger a ve d de ciftse b de cift oldugundan tum rakamlari cifttir
           printf("%d\n",i);//buraya ulasan i sayisi bastirilir
           sayac++;  //bastirilan i kadar sayac artacaktir
         }
      }  
    
   } 

    printf("Tüm basamaklari cift %d sayi vardir",sayac);//kac sayi oldugu bastirilir
    
    return 0;
 }
