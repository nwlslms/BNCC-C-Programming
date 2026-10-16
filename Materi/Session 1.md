# C Programming - C: Session 1

# START DI 19.35

> Main Course
- [ ] C Programming Language: Introduction
    - C merupakan bahasa pemrograman yang ditemukan oleh **Dennis Ritchie**.
    - Meneruskan bahasa B, untuk sistem operasi UNIX.
    - C: Function and Struct
    - C++/c/Python: Class dan Object
    - Proses c: Code (.c) -> Compiling (Biner) -> Build (.exe) -> Run

- [ ] Installing Dev-C++
    - [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/.)

- [ ] File Structure
    - File .c
        Tempat kita menulis code
    - File .exe
        Hasil build dari File.c

- [ ] Data Types
    > Jenis data yang disimpan.
    - Jenis
        |Data Types|Rentang|Byte|
        |:-:|:-:|:-:|
        |char|-128 s/d 127 (ASCII)|1|
        |short|-32768 s/d 32767|2|
        |int|-2147483648 s/d 2147483647|4|
        |long long|-9223372036854775808 s/d -9223372036854775807|8|
        |float|6-7 digit presisi|4|
        |double|15 digit presisi|8|
        |Unsigned|0 - MAX*2-1|-|

    - Typecasting
        > Convert antar tipe data
        ```c
        float A = 9.8;
        int B = (int) A; // 9
        ```
- [ ] Variable
    > Nama suatu penyimpan data.
    - Tidak boleh ada spasi.
    - Diawali alphabet.
    - Tidak boleh karakter khusus.
    - Tidak boleh reserved keyword.
    - Tidak boleh identik.
    - Camel Case
        ```c
        int iniAdalahCamelCase.
        ```
    - Underscore Case
        ```c
        int _test;
        ```
    - Global & Local Variable
        Hak akses penggunaan variabel.

- [ ] I/O
    `stdio.h`
    |Format|Data Types|
    |:-:|:-:|
    |`%hd`|short|
    |`%d`|int|
    |`%lld`|long long|
    |`%f`|float|
    |`%lf`|double|
    |`%c`|char|
    |`%s`|char [] tanpa spasi|
    |`%[^x]`|char [] sampai bertemu x|
    |`%p`|Address|
    - Input
        
        ```c
        scanf(format, &variable);
        ```
    - Output
        ```c
        printf(format, variable);
        ```

- [ ] Operator
    - Arithmetic
        ```c
        total = A + B; // Penjumlahan
        total = A - B; // Pengurangan
        total = A * B; // Perkalian
        total = A / B; // Pembagian
        total = A % B; // Sisa bagi dari A / B
        total++; // total = total + 1;
        total--; // total = total - 1;
        ```
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

    - Bitwise
        |Operator|Deskripsi|
        |:-:|:-:|
        |&|1 jika kedua bit adalah 1|
        |$\|$|1 jika salah satu bit adalah 1|
        |^|1 jika jumlah 1 ganjil|
        |~|Mengubah bit 1 menjadi 0|
        |<<|Menggeser bit ke kiri|
        |>>|Menggeser bit ke kanan|
   
    - Assignment
        ```c
        hasil = b; // Menugaskan b disimpan hasil
        hasil += b; // hasil = hasil + b;
        hasil -= b; // hasil = hasil - b;
        hasil /= b; // hasil = hasil / b;
        hasil *= b; // hasil = hasil * b;
        hasil %= b; // hasil = hasil % b;
        ```