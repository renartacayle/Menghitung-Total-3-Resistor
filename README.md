
---

## README (English)

### Three-Resistor Total Calculator – C++ Console Program

This console program calculates the total resistance of three resistors either in **series** or **parallel**.

### Formula

* **Series**:

  ```
  R_total = R1 + R2 + R3
  ```
* **Parallel**:

  ```
  1/R_total = 1/R1 + 1/R2 + 1/R3
  ```

### How to Use

1. Run the program.
2. Enter the three resistor values (R1, R2, R3) in ohms when prompted.
3. Choose the mode:

   * `1` → Series
   * `2` → Parallel
4. The program prints the total resistance.

### Requirements

* C++ compiler (g++, clang++, MSVC, etc.)
* Any OS with a C++ toolchain

### Compile & Run

```bash
g++ -o resistor_total main.cpp
./resistor_total
```

---

## README (Bahasa Indonesia)

### Kalkulator Total Tiga Resistor – Program Konsol C++

Program konsol ini menghitung total hambatan dari tiga resistor dengan sambungan **seri** atau **paralel**.

### Rumus

* **Seri**:

  ```
  R_total = R1 + R2 + R3
  ```
* **Paralel**:

  ```
  1/R_total = 1/R1 + 1/R2 + 1/R3
  ```

### Cara Menggunakan

1. Jalankan program.
2. Masukkan tiga nilai resistor (R1, R2, R3) dalam satuan ohm.
3. Pilih mode:

   * `1` → Seri
   * `2` → Paralel
4. Program akan menampilkan total hambatan.

### Kebutuhan

* Kompiler C++ (g++, clang++, MSVC, dll.)
* Sistem operasi yang mendukung toolchain C++

### Kompilasi & Jalankan

```bash
g++ -o total_resistor main.cpp
./total_resistor
```

---

Save as `README.md` in the GitHub repository.
