Epoch Zaman Farki Hesaplama

Bu proje, kullanıcının girdiği iki tarih ve saat arasındaki farkı epoch zamanı kullanarak hesaplayan bir C programıdır.

📌 Proje Açıklaması

Bu program:

Kullanıcıdan iki farklı tarih ve saat alır.

Bu tarihleri epoch zamanı (1 Ocak 1970 00:00:00 UTC'den itibaren geçen saniye) formatına çevirir.

İki tarih arasındaki farkı hesaplayarak saniye ve saat cinsinden ekrana yazdırır.

🛠 Kullanılan Teknolojiler

C Programlama Dili

time.h Kütüphanesi

🚀 Kurulum ve Çalıştırma

1. Derleme

Programı derlemek için aşağıdaki komutu kullanabilirsiniz:

gcc epoch_zaman_farki.c -o epoch

2. Çalıştırma

Derleme tamamlandıktan sonra programı çalıştırmak için:

./epoch

📋 Kullanım

Program, kullanıcıdan GG AA YYYY HH MM SS formatında iki tarih alır ve aşağıdaki gibi çıktı üretir:

Örnek Girdi:

Birinci tarihi girin (GG AA YYYY HH MM SS): 01 01 2020 08 00 00
Ikinci tarihi girin (GG AA YYYY HH MM SS): 02 01 2020 10 30 00

Örnek Çıktı:

Birinci tarihin epoch zamani: 1577865600
Ikinci tarihin epoch zamani: 1577953800
Iki tarih arasindaki fark: 88200 saniye (24 saat)

📌 Proje İçeriği

epoch_zaman_farki.c → Programın ana kodu

README.md → Proje hakkında bilgi
