# STRUKTUR PENGULANGAN

Untuk melakukan pengulangan aksi, C++ menyediakan tiga perintah, yaitu (for,while,do-while). Bahasa-bahasa pemrogramman lain ada yang memiliki dua jenis struktur pengulangan, bahkan ada juga yang memiliki lebih dari 3.

Dengan adanya struktur pengulangan, aksi hanya perlu ditulis satu kali, tapi dapat dieksekusi berkali-kali tergantung dari kondisi yang didefinisikan di dalamnya.

proses pengulangan hanya akan dilakukan selama kondisi yang didefinisikan masih bernilai true.

Mari kita mulai membahas perintah-perintah tersebut.

# FOR
 Bentuk umum proses pengulangan menggunakan perintah for adalah sebagai berikut.

    for(inisialisai;kondisi;increment/decrement){

    }

Inisialisasi hanya dilakukan satu kali, yaitu pada saat program memasuki badan pengulangan. Selanjutnya, program akan memeriksa kondisi yang didefinisikan. Jika kondisi bernilai true, aksi akan diubah. Setelah aksi selesai dilakukan, progrram akan mengeksekusi bagian increment, kemudian akan memeriksa kembali kondisi yang telah didefinisikan. Proses ini akan berulang sampai kondisi false.

 * contoh kode menggunakan perintah for 
    for(int i=0; i< 10 ;i++){
        std::cout<<i+1<< " " ;
    }

    makna dari kode ini adalah
     - kode ini akan berulang dari perhitungan i =0 sampai i=9
     - dalam proses pengulangan itu, program diperintahkan untuk menampilkan niali i+1.
     - jadi nilai i yang akan ditampilkan adalah 1 2 3 4 5 6 7 8 9 10.


#while
 Bentuk while secara umum adalah sebagai berikut:

    while(kondisi){
        aksi;
    }

    Sebagai contoh,
    
    int i=0;
    while (i<10){
        std::cout<<i+1<< " " ;
        i++;
    }

    * program ini berfungsi sama seperti for, cuma sintak-nya saja yang berbeda.

#do-while
    do{
        aksi;
    }while(kondisi)

    * contoh program

        int i =0;
        do {
            std::cout<<i+1<< " " ;
            i++;

        }while(i<10);






