#include<stdio.h>

/*
int main()
    {
        int sayi=0;
        printf("Sayıyı giriniz\n");
        scanf("%d", &sayi);
        int basamak=0;
        while (sayi)
        {
            sayi=sayi/10;
            basamak++;
        }
        printf("Girilen sayı %d basamaklıdır.",basamak);
        getchar();
        getchar();
    }
    */

//Aklınızda tuttuğunuz sayıyı bulan program
/*
   main(){
       int rastgele, tahmin, tahmin_sayisi=0;
       srand(time(0));
       rastgele=1+srand()%1000;
       do{
           printf("Tahmin giriniz}\n");
           scanf("%d",&tahmin);
           tahmin_sayisi++;
           if(tahmin>rastgele)
           printf("Daha küçük tahmin girmelisiniz\n");
           if(tahmin<rastgele)
           printf("Daha büyük tahmin girmelisiniz\n");
           if(tahmin==rastgele)
           printf("Tebrikler %d tahminde buldunuz",tahmin_sayisi);
       }
       while(tahmin!=rastgele);
   }
   */

  //100 adet tamsayıdan kaç tanesinin tek,çift olduğunu bulan program

  int main(){
      int i,sayi,teksayac=0,ciftsayac=0;
      for(i=0;i<100;i++){
          printf ("Sayı giriniz:");
          scanf("%d",&sayi);
          if (sayi%2==0)
          ciftsayac++;
          else
          teksayac++;
      }
      printf("%d Adet tek, %d Adet çift sayı vardır.",teksayac,ciftsayac);
  getchar();
  getchar();
  }
  

 

 