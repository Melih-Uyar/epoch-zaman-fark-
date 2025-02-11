#include <stdio.h>
#include <time.h>

struct CalismaSuresi {
    int gun, ay, yil, saat, dakika, saniye;
};

long epochHesapla(struct CalismaSuresi ts) {
    struct tm t = {0};
    t.tm_mday = ts.gun;
    t.tm_mon = ts.ay - 1;
    t.tm_year = ts.yil - 1900;
    t.tm_hour = ts.saat;
    t.tm_min = ts.dakika;
    t.tm_sec = ts.saniye;
    return mktime(&t);
}

int main() {
    struct CalismaSuresi baslangic, bitis;
    printf("Is baslangic tarihini girin (GG AA YYYY SS DD SS): ");
    scanf("%d %d %d %d %d %d", &baslangic.gun, &baslangic.ay, &baslangic.yil, &baslangic.saat, &baslangic.dakika, &baslangic.saniye);
    printf("Is bitis tarihini girin (GG AA YYYY SS DD SS): ");
    scanf("%d %d %d %d %d %d", &bitis.gun, &bitis.ay, &bitis.yil, &bitis.saat, &bitis.dakika, &bitis.saniye);
    
    long epochBaslangic = epochHesapla(baslangic);
    long epochBitis = epochHesapla(bitis);
    long fark = epochBitis - epochBaslangic;
    if (fark < 0) fark = -fark;
    
    printf("\nIs baslangic epoch zamani: %ld\n", epochBaslangic);
    printf("Is bitis epoch zamani: %ld\n", epochBitis);
    printf("Toplam calisma suresi: %ld saniye (%ld saat)\n", fark, fark / 3600);
    
    return 0;
}

