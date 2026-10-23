# C Programming - C: Session 2

> Review
- [x] I/O
    - Input
        `scanf(format, &variable);`
    - Output
        `%[flags][width][.precision]type`
        - [flags]
            - `-`: Rata kiri
            - `+`: Menampilkan `+` atau `-`
            - `0`: Leading zero
        - [width]: Lebar minimum output
        - [.precision]: Angka di belakang koma
- [x] Operator
    - Relational
        ```c
        hasil = A == B; // Sama dengan
        hasil = A != B; // Bukan sama dengan
        hasil = A > B; // Lebih dari
        hasil = A < B; // Kurang dari
        hasil = A >= B; // Lebih sama dengan dari
        hasil = A <= B; // Kurang sama dengan dari
        ```
    - Logical
        |Operator|Deskripsi|
        |:-:|:-:|
        |&&|1 jika kedua bit 1|
        |$\|\|$|1 jika salah satu bit 1|
        |!|Mengubah bitt 1 menjadi 0|
> Main Course
- [x] Program Control
    > Kondisi yang mengaharuskan kita memilih alur program
    - If condition
        ```cpp
        if (syarat) {
            statement;
        }

        if (syarat1) {
            statement1;
        } else {
            statementAlternatif;
        }

        if (syarat1) {
            statement1;
        } else if (syaratn) {
            statementn;
        } else if (sraratn+1) {
            statementn+1;
        } else {
            statementAlternatif;
        }
        ```
    - Switch case
        ```cppp
        switch(variable) {
            case 1:
                statement1;
                break;
            case 2: statement2; break;
            case 3: statement3; break;
            default: statementAlternatif; break;
        }
        ```
    - Ternary
        `(syarat) ? TRUE:FALSE`
    - Nested
        ```cpp
        if (syarat1) {
            if (syarat1-1) {

            } else {
                
            }
        }
        ```
- [x] Program Loop
    > Meringkas code berulang menjadi singkat
    - For loop
        ```cpp
        for(inisialisasi; syarat; linecode) {
            statement;
        }

        for (int i = 0; i < 10000; printf("%d. Nawwal Salim", i++));
        ```
    - While loop
        > Dicek dulu, baru loop
        ```cpp
        inisialisasi;
        while(syarat) {
            statement;
            
        }
        ```
    - Do{}while() loop
        > Loop dulu baru cek
        ```cpp
        inisialisasi;
        do {
            statement;

        } while (syarat);
        ```
    - Break and Continue
        - Break
            > Keluar dari perulangan
        - Continue
            > Skip ke iterasi berikutnya
    - Nested
        ```cpp
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                
            }
        }
        ```
- [x] Mini Program
    - Program Penilaian Mahasiswa
        ```txt
        Buatlah sebuah program console yang:

        ===== MENU =====
        1. Input Nilai
        2. Keluar

        Pilih: 1

        Masukkan Nilai : 85

        Grade : A
        ```
    - Program Mesin ATM Sederhana
        ```txt
        Buatlah program console yang:
        
        MENU 1
        ===== ATM SEDERHANA =====
        Saldo Anda : Rp100000

        1. Cek Saldo
        2. Setor Uang
        3. Tarik Uang
        4. Keluar

        Pilih menu :
        ```
> Next Session
Pointer, Array, Pointer & Array