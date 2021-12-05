#include<stdio.h>

//Haftanın kaçıncı gününde olduğumuzu yazan program
/*
int main()
{
    int gun;
    printf("Haftanın kaçıncı gününde olduğumuzu giriniz:");
    scanf("%d",&gun);
    switch (gun) {
        case 1: printf("Pazartesi"); break;
        case 2: printf("salı"); break;
        case 3: printf("Çarşamba"); break;
        case 4: printf("Perşembe"); break;
        case 5: printf("Cuma"); break;
        case 6: printf("Cumartesi"); break;
        case 7: printf("Pazar"); break;
        default: printf ("Haftanın 7 günü vardır!");
    }
    getchar();
    getchar();
}

*/

//Hesap makinesi
/*
int main()
{
    float sayi1,sayi2,sonuc;
    char islem;
    printf("Hangi işlemi yapacağınızı giriniz... (+Toplama, -Çıkartma, *Çarpma, /Bölme) \n");
    scanf("%c", &islem);
    printf("Birinci sayıyı giriniz:\n");
    scanf("%f", &sayi1);
    printf("İkinci sayıyı giriniz:\n");
    scanf("%f", &sayi2);

    switch (islem){
        case '+': sonuc=sayi1+sayi2; break;
        case '-': sonuc=sayi1-sayi2; break;
        case '*': sonuc=sayi1*sayi2; break;
        case '/': sonuc=sayi1/sayi2;
    }
    printf ("Sonuç = %0.1f", sonuc);
    getchar();
    getchar();
}
*/

//Girilen sayıya kadar olan sayıların toplamını bulan program

/*
main(){
    int sayi,toplam,i;
    toplam=0;
    printf("Sayıyı giriniz:\n");
    scanf("%d", &sayi);
    for(i=1;i<=sayi;i++)
    toplam=toplam+i;
    printf ("Toplam = %d", toplam);
    getchar();
    getchar();
}
*/

//Girilen sayının pozitif tamsayı üssünü alan program
/*
main() {
    int sayi, us, sonuc,i;
    sonuc=1;
    printf("Sayıyı giriniz:\n");
    scanf("%d",&sayi);
    printf("Üssü giriniz\n");
    scanf("%d",&us);
    for (i=1;i<=us;i++){
        sonuc*=sayi;
    }
    printf("Sonuç=%d",sonuc);
    getchar();
    getchar();
}
*/

//Rakamların kare ve küplerini hesaplayan program
/*
int main(){
    int kare, kup, i;
    i=1;
    while (i<7){
        kare = i*i;
        kup = kare*i;
        printf("%d Sayısının karesi = %d, Küpü = %d\n",i,kare,kup);
        i++;
    }
    getchar();
    getchar();
}
*/