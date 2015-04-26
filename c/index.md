#   C Style

.fx: first

Özcan ÇAMOĞLU `<ozcan.camoglu@bil.omu.edu.tr>`

Ufuk PALAVAR `<ufuk.palavar@bil.omu.edu.tr>`

Nisan 2015

#   Kodlama Stili Nedir ?

-   Kodlama yaparken kullanılan biçimsel kurallar/yöntemler
-   Zorundalık yok gereklilik var
-   Her dil ve dil içindeki gruplar için farklı olabilir

#   Hangi Sorunları Çözer ?

-   Başta okunabilirlik
-   Estetik görünüm
-   Hata ayıklama kolaylığı
#   Başlıca C stilleri 

#   K&R Style

-   İsmini `Kernighan` ve `Ritchie` in kitabı olan `The C Programming Language` 

    kitabında kullanılan yazım stilinden almıştır

-   Unix ve Linux çekirdeğinin kaynak kodları bu stille yazılmıştır

	`kr.c`

	.code: code/kr.c


#   Allman Sytle

-   İsmini `Eric Allman` dan almıştır 
-   ANSI C standardını tanımlayan belgelerde kullanımı için 

    `ANSI style` olarak anılır olmuştur

	`allman.c`

	.code: code/allman.c

#   Whitesmiths Style

-   Bu stile ayrıca `Wishart` stili de denir
-   ilk ticari C derleyicisi olan `Whitesmiths` derleyicisi belgelerinde kullanıldı 

	`whitesmiths.c`

	.code: code/whitesmith.c

#   GNU Style

-   `Richard Stellman` tarafından popülerleştirilmiştir
-   GNU projesinde kullanılmaktadır

	`gnu.c`

	.code: code/gnu.c


#   Linux Coding Style

#  Linux Coding Style

-   Linux çekirdeğinin kaynak kodllarında kullanıldığı bilinir

-   `Linus Torvads` 'ın  takipçilerine önerdiği bir stildir
#   Girinti - Boşluk

-   Sekmeler `8 karakter` dolayısıyla girintilerde 8 karakter vardır
-   Faydası okunurluğu artırır ve uyarıları daha iyi görmeyi sağlar
-   if, switch, case, do, for, while sonra `1` boşluk
-   `+, -, *, /, >, <, &, |, ^, <=, >=, != ` önce ve sonra `1` boşluk

#   Uzun Dizeleri Kırma
-   `80` den fazla karakter varsa  o satır kırılır ve alt satıra yazılır

	.code: code/uzun_satir.c

#   Method

-   Metodda süslü parantez açılırken alt satıra geçilir 

    ve metodun başladığı kısma süslü parantez açılır

	.code: code/method.c

#   Switch - Case

-   `switch` ve `case` aynı hizda içeriği ise `8` karakter içeride

	.code: code/switch.c

#    if - else ...

-    `İf-else`, `for`,`while` gibi kısımlarda süslü parantez  kısmın açıldığı yere konur
-    Kapatılırken de açıldığı yer ile aynı hizada olmalı 

	.code: code/ifelse.c

-    do while özel durum

	.code: code/do.c

#   İsimlendirme

-   Açıklayıcı isimler tercih edilmelidir
-   Anlamsız isimler kodun okunurluğunu azaltır 
-   `Global değişkenler`  "degisken_yaptig_is" şeklinde kullanılmalı ve  açıklayıcı
	
	`count_active_users()`

-   `Lokal değişkenlerde` kısa isimlendirme yapılmalı
	 
	`temp` 

#  Yorum Satırı

-  Fazla yorum yapma
-  Yorum satırı sadece kodun ne yaptığını söylesin
-  Fonsiyonlarım başına o fonksiyonun ne yaptığını şöyleyebilirsin.
-  Linux stilinde yorumlar şöyledir
	
		/* … */

-  Uzun yorumlar için tercih edilen stil:
	
        /*
		 * This is the preferred style for multi-line
		 * comments in the Linux kernel source code.
		 * Please use it consistently
         */ 



#   Kernel Normal Form Style

#   KNF

-   `BSD işletim sistemlerinin` kodlama standardı
-   `K&R`'ın unix kodunda kullandıkları stil ve notasyondan türetilmiş

#  KNF 

-   Prototipler değişken isimleri ile ilişkili olmamalıdır


	doğru -->  `void fonksiyon (int);`

	yanlış --> `void fonksiyon (int a);`

-   Prototiplerde fonksiyon isimlerini hizalamak için bir tabtan sonra ekstra boşluk olabilir

	`static char	*function(int, const char *);`
 
	`static void	 usage(void);`


#   KNF

-   Fonksiyon adı ve bağımsız değişken listesi arasında boşluk olmamalıdır

-   Numaralandırma değerlerinin tümü büyük harfle yazılır

	`enum enumtype { ONE, TWO } et;`

-   struct içinde değişken bildiriminde sıralama yapılmalı

	`büyükten -küçüğe / alfabetik`

#  KNF 

-   Kontrolden sonra tek bir satır varsa `{` kullanılmayabilir
	
	.code: code/lo.c	

-  Döngü içinde boş kısımlar olabilir 

	.code: code/foo.c

#   Vim Editöründe Stil Ayarı

#   Linux Coding Style Ayarı

-   Başlangış dizinindeyken
	
	
		!sh
	
		$ cd .vim/

-   plugin adında bir dizin oluşturup

-   [adres](http://www.vim.org/scripts/script.php?script_id=4369)'ten `linuxsty.vim` dosyasını edin 

-   plugin içine bu dosyayı entegre et


#  içerik

-     
	.code: code/style.vim
 

#   Ekstra

-   Başlangıç dizinindeyken 

		!sh

		cd /usr/share/vim

-   vimrc dosyasına ekleyerek de yapılabilir

-   Kernel Normal Form için ilgili formata ulaşılıp ekleme yapılır

#Uygulama

	











