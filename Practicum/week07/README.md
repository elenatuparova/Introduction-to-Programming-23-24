# Седмица 7

## Теория

[Многомерни масиви](https://drive.google.com/file/d/1KAkYQEMB7zz0G2V9d7v6JBJX4W7WEOm0/view?usp=sharing)

## Задачи

В задачите ще използваме матрици с максимален размер 100 реда (`MAX_ROWS`) и 100 стълба (`MAX_COLS`).

- **Задача** Напишете функция със сигнатура `void inputMatrix(int matrix[][MAX_COLS], int rows, int cols)`, която попълва подадената матрица с числа, въведени от потребителя.

	---

<br>

- **Задача** Напишете функция със сигнатура `void printMatrix(int matrix[][MAX_COLS], int rows, int cols)`, която принтира подадена матрица.

	---

<br>

- **Задача** Напишете следните функции, които обработват матрици:

    - `int sumDiagonal(int matrix[][MAX_COLS], int rows, int cols)`

      Намира сумата по главния диагонал на квадратна матрица. Тази сума се нарича следа на матрицата.

    - `int sumSecondaryDiagonal(int matrix[][MAX_COLS], int rows, int cols)`

      Намира сумата по втория диагонал на квадратна матрица.

    - `int sumMatrix(int matrix[][MAX_COLS], int rows, int cols)`

      Намира сумата на всички елементи на матрица.

    - `void transposeMatrix(int matrix[][MAX_COLS], int rows, int cols, int result[][MAX_ROWS])`

      Транспонира матрицата `matrix`, като записва резултата в матрицата `result`.

<br>
