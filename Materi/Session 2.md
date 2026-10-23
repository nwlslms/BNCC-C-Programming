# C Programming - C: Session 2

> Review
- [ ] I/O
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
- [ ] Operator
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
- [ ] Program Control
    - If condition
    - Switch case
    - Ternary
- [ ] Program Loop
    - For loop
    - While loop
    - Do{}while() loop
    - Break and Continue
- [ ] Mini Program
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