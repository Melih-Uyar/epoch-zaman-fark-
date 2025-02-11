#include <stdio.h>
#include <time.h>

struct TarihSaat {
    int gun, ay, yil, saat, dakika, saniye;
};

long epochHesapla(struct TarihSaat ts) {
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
    struct TarihSaat ts1, ts2;
    printf("Birinci tarihi girin (GG AA YYYY SS DD SS): ");
    scanf("%d %d %d %d %d %d", &ts1.gun, &ts1.ay, &ts1.yil, &ts1.saat, &ts1.dakika, &ts1.saniye);
    printf("Ikinci tarihi girin (GG AA YYYY SS DD SS): ");
    scanf("%d %d %d %d %d %d", &ts2.gun, &ts2.ay, &ts2.yil, &ts2.saat, &ts2.dakika, &ts2.saniye);

    long epoch1 = epochHesapla(ts1);
    long epoch2 = epochHesapla(ts2);
    long fark = epoch2 - epoch1;
    if (fark < 0) fark = -fark;

    printf("\nBirinci tarihin epoch zamani: %ld\n", epoch1);
    printf("Ikinci tarihin epoch zamani: %ld\n", epoch2);
    printf("Iki tarih arasindaki fark: %ld saniye (%ld saat)\n", fark, fark / 3600);

    return 0;
}

