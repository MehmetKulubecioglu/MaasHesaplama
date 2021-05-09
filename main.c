#include <stdio.h>
#include <stdlib.h>

int main()
{
float toplam_eksik_brut,toplam_vergi_kesintisi,kesintisiz_brut,istatistik_net=0,net_gelir_kesintisi,net_brut;
int calisan_say=0,t200=0,t100=0,t50=0,t20=0,t10=0,t5=0,t1=0,tk50=0,tk25=0,tk10=0,tk5=0,tk1=0;
int calisan2000=0,v15=0,v20=0,v27=0,v35=0,evli=0,bekar=0,escalisma=0,engelli_calisan_say=0;
int cocuklu_calisan=0,toplam_cocuk=0,cocuklu_calisan2=0;
char net_adsoyad[50];
long long net_tc;
 while(1){

float aylik_brut,toplam_brut,eksik_brut,vergi_kesintisi,kalan_brut;
char  medeni_durum ,adsoyad[50],e,E,b,B,h,H,es_is,baska_calisan;
long long tc;
int cocuk=0,buyuk_cocuk,engel_orani,tl200,tl100,tl50,tl20,tl10,tl5,tl1,kr50,kr25,kr10,kr5,kr1;

printf("Lutfen tc giriniz: ");
scanf("%lld",&tc);
printf("Ad Soyad: ");
getchar();
gets(adsoyad);

    printf("Aylik ucreti giriniz: ");
    while(1){
    scanf("%f",&aylik_brut);
        if(aylik_brut>=1777.5)
    break;
        else if(aylik_brut<1777.5)
        printf("Lutfen 1777.5 veya daha buyuk bir deger giriniz:");
}
    toplam_brut=aylik_brut;

    while(1){
            printf("Medeni durumunuz nedir?(E/e/B/b): ");
    scanf("%s",&medeni_durum);
        if(medeni_durum=='B' || medeni_durum=='b')
    break;
        else if(medeni_durum=='E' || medeni_durum=='e')
        {

            while(1){
            printf("Esiniz calisiyor mu?(E/e veya H/h): ");
                scanf("%s",&es_is);
            if(es_is=='E' || es_is=='e')
            break;
            else if(es_is=='H' || es_is=='h'){
               toplam_brut=toplam_brut+220; break;}}

            while(1){
            printf("kac cocugunuz var?(Cocugunuz yoksa 0 giriniz):");
            scanf("%d",&cocuk);
            if(cocuk==0)
                break;
            else if(cocuk>0)
            {
            printf("6 yasindan buyuk cocuk sayisi (6 yasindan buyuk cocugunuz yoksa 0 giriniz):");
            scanf("%d",&buyuk_cocuk);

                toplam_brut=(toplam_brut)+(buyuk_cocuk)*45+(cocuk-buyuk_cocuk)*25;
                break;

            }} break;}
}
                if(medeni_durum=='e' || medeni_durum=='E')
                    evli++;
                else if(medeni_durum=='b' || medeni_durum=='B')
                    bekar++;

                if(cocuk>0)
                    cocuklu_calisan++;
                toplam_cocuk+=cocuk;
                if(cocuk>3)
                    cocuklu_calisan2++;

                if(es_is=='e' ||es_is=='E')
                    escalisma++;
            printf("Engel oraniniz (engeliniz yoksa 0 giriniz): ");
            while(1){
            scanf("%d",&engel_orani);

            if(engel_orani>=80 && engel_orani<=100){
                eksik_brut=toplam_brut-900; break;}
            else if(engel_orani>=60 && engel_orani<80){
                eksik_brut=toplam_brut-470; break;}
            else if(engel_orani>=40 && engel_orani<60){
                eksik_brut=toplam_brut-210; break;}
            else if(engel_orani<40 && engel_orani>=0){
                eksik_brut=toplam_brut; break;}
            else
                printf("Lutfen 1 ile 100 arasinda degerler giriniz: ");}



            if(eksik_brut<2000){
                eksik_brut=eksik_brut-eksik_brut*15/100;  v15++;}
            else if(eksik_brut>=2000 && eksik_brut<5000){
                eksik_brut=eksik_brut-eksik_brut*20/100; v20++;}
            else if(eksik_brut>=5000 && eksik_brut<10000){
                eksik_brut=eksik_brut-eksik_brut*27/100; v27++;}
            else if(eksik_brut>=10000){
                eksik_brut=eksik_brut-eksik_brut*35/100; v35++;}


            if(engel_orani>=80 && engel_orani<=100)
                eksik_brut=eksik_brut+900;
            else if(engel_orani>=60 && engel_orani<80)
                eksik_brut=eksik_brut+470;
            else if(engel_orani>=40 && engel_orani<60)
                eksik_brut=eksik_brut+210;

            if(eksik_brut<2000)
                calisan2000++;
            if(engel_orani>=40 && engel_orani<=100)
                engelli_calisan_say++;

            vergi_kesintisi=toplam_brut-eksik_brut;
            toplam_eksik_brut+=eksik_brut;
            toplam_vergi_kesintisi+=vergi_kesintisi;
            kesintisiz_brut+=toplam_brut;

             if(istatistik_net<eksik_brut){
             strcpy(net_adsoyad,adsoyad);
             net_tc=tc;
             net_brut=toplam_brut;
             net_gelir_kesintisi=vergi_kesintisi;
             istatistik_net=eksik_brut;
            }

            tl200=eksik_brut/200;   kalan_brut=eksik_brut-tl200*200;
            tl100=kalan_brut/100;   kalan_brut=kalan_brut-tl100*100;
            tl50=kalan_brut/50;     kalan_brut=kalan_brut-tl50*50;
            tl20=kalan_brut/20;     kalan_brut=kalan_brut-tl20*20;
            tl10=kalan_brut/10;     kalan_brut=kalan_brut-tl10*10;
            tl5=kalan_brut/5;       kalan_brut=kalan_brut-tl5*5;
            tl1=kalan_brut/1;        kalan_brut=kalan_brut-tl1*1;
            kr50=kalan_brut/0.50;   kalan_brut=kalan_brut-kr50*0.50;
            kr25=kalan_brut/0.25;   kalan_brut=kalan_brut-kr25*0.25;
            kr10=kalan_brut/0.1;    kalan_brut=kalan_brut-kr10*0.1;
            kr5=kalan_brut/0.05;    kalan_brut=kalan_brut-kr5*0.05;
            kr1=kalan_brut/0.01;    kalan_brut=kalan_brut-kr1*0.01;

            t200+=tl200;    t100+=tl100;    t50+=tl50;    t20+=tl20;
            t10+=tl10;  t5+=tl5;    t1+=tl1;    tk50+=kr50; tk25+=kr25;
            tk10+=kr10;     tk5+=kr5;   tk1+=kr1;


                            /* Yazdirma Ekrani */

            printf("\nTC Kimlik no:%lld",tc);
            printf("\nAd Soyad:");
            printf(adsoyad);

            if(es_is=='h' || es_is=='H')
                printf("\nEs icin aile yardim odenegi:220");
            else if(es_is=='e' || es_is=='E')
                printf("\nEs icin aile yardim odenegi:0");

                if(cocuk>0)
                printf("\nCocuk icin aile yardim odenegi: %d",buyuk_cocuk*45+(cocuk-buyuk_cocuk)*25);
            printf("\nAylik toplam brut ucret:%.2f",toplam_brut);
            printf("\nGelir vergisi kesintisi:%.2f",vergi_kesintisi);

            if(engel_orani>=80 && engel_orani<=100)
                printf("\nEngel derecesi: 1.engel derecesi");
            else if(engel_orani>=60 && engel_orani<80)
                printf("\nEngel derecesi: 2.engel derecesi");
            else if(engel_orani>=40 && engel_orani<60)
                printf("\nEngel derecesi: 3.engel derecesi");

            printf("\nAylik net ucret:%.2f\n",eksik_brut);
            if(tl200>0)
                printf("\n\n%d adet 200TL",tl200);
            if(tl100>0)
                printf("\n%d adet 100TL",tl100);
            if(tl50>0)
                printf("\n%d adet 50TL",tl50);
            if(tl20>0)
                printf("\n%d adet 20TL",tl20);
            if(tl10>0)
                printf("\n%d adet 10TL",tl10);
            if(tl5>0)
                printf("\n%d adet 5TL",tl5);
            if(tl1>0)
                printf("\n%d adet 1TL",tl1);
            if(kr50>0)
                printf("\n%d adet 0.5TL",kr50);
            if(kr25>0)
                printf("\n%d adet 0.25TL",kr25);
            if(kr10>0)
                printf("\n%d adet 0.10TL",kr10);
            if(kr5>0)
                printf("\n%d adet 0.05TL",kr5);
            if(kr1>0)
                printf("\n%d adet 0.01TL\n\n",kr1);
            calisan_say++;

            while(1){
        printf("\nBaska calisan var mi?(e/E veya h/H):");
        scanf("%s",&baska_calisan);



        if(baska_calisan=='h' || baska_calisan=='H'){
            break;  }
        else if(baska_calisan=='e' || baska_calisan=='E')
            break;
        else
            printf("Hatali harf girdiniz!!\n");

            }
            if(baska_calisan=='e' || baska_calisan=='E')
                continue;
            break;

 }
        printf("\n\nCalisanlarin toplam net ucreti:%.2f\n",toplam_eksik_brut);
        printf("Calisanlarin toplam vergi odemesi:%.2f\n",toplam_vergi_kesintisi);
        printf("Aylik toplam brut ucretlerinin ortalamasi:%.2f\n",kesintisiz_brut/calisan_say);
        printf("Tum calisanlarin net ucretlerinin ortalamasi:%.2f",toplam_eksik_brut/calisan_say);
        if(t200>0)
                printf("\nToplam %d adet 200TL",t200);
            if(t100>0)
                printf("\nToplam %d adet 100TL",t100);
            if(t50>0)
                printf("\nToplam %d adet 50TL",t50);
            if(t20>0)
                printf("\nToplam %d adet 20TL",t20);
            if(t10>0)
                printf("\nToplam %d adet 10TL",t10);
            if(t5>0)
                printf("\nToplam %d adet 5TL",t5);
            if(t1>0)
                printf("\nToplam %d adet 1TL",t1);
            if(tk50>0)
                printf("\nToplam %d adet 0.5TL",tk50);
            if(tk25>0)
                printf("\nToplam %d adet 0.25TL",tk25);
            if(tk10>0)
                printf("\nToplam %d adet 0.10TL",tk10);
            if(tk5>0)
                printf("\nToplam %d adet 0.05TL",tk5);
            if(tk1>0)
                printf("\nToplam %d adet 0.01TL",tk1);


            printf("\n\n2000 Tl nin altinda calisan sayisi %d",calisan2000);
            printf("\nYuzde 15lik vergi kesintisi yapilan calisan sayisi %d",v15);
            printf("\nYuzde 20lik vergi kesintisi yapilan calisan sayisi %d",v20);
            printf("\nYuzde 27lik vergi kesintisi yapilan calisan sayisi %d",v27);
            printf("\nYuzde 35lik vergi kesintisi yapilan calisan sayisi %d",v35);
            printf("\nCalisanlarin yuzde %d bekar yuzde %d evli",bekar*100/(evli+bekar),evli*100/(evli+bekar));
            printf("\nEvli olan calisanlarin esleri %d oraninda calisiyor",escalisma*100/evli);
            printf("\nEngelli calisan sayisi %d,tum calisanlar icinde yuzde %d",engelli_calisan_say,100*engelli_calisan_say/calisan_say);
            printf("\nCocugu olan calisanlarin cocuk sayilari ortalamasi:%d",toplam_cocuk/cocuklu_calisan);
            printf("\nCocuk sayisi 3ten fazla olan calisan sayisi:%d",cocuklu_calisan2);
            printf("\n\t*****Aylik net ucerti en fazla olan calisan bilgileri*****");
            printf("\n\nTC:%lld",net_tc);
            printf("\nAd Soyad:");  printf(net_adsoyad);
            printf("\nAylik toplam brut ucret:%d",net_brut);
            printf("\nVergi kesintisi:",net_gelir_kesintisi);
            printf("\nAylik net ucret:",istatistik_net);


}
