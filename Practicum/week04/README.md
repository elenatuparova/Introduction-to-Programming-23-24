# Седмица 3

## Теория

[Вградени функции](https://docs.google.com/file/d/1fgI57GL0hJTF3Qd4hG2JwN3_ThE0CWLC/edit?rtpof=true&sd=true)

[round() до дадена точност](example_round.cpp)

## Задачи

### [Цикли](https://github.com/telinc1/Introduction-To-Programming-Problems/blob/master/resources/tasks/loops.md)

6. **Задача** Да се напише програма, която пресмята сумата:

    -  1 + 2 + 3 + 4 + ... + 100;
    -  m + (m + 1) + (m + 2) + ... + (m + n);
    - 1 + 1/2 + 1/3 + 1/4 + … + 1/10.

	---

    **Решение: [1](loops_6_1.cpp), [2](loops_6_2.cpp), [3](loops_6_3.cpp)**

### [Примерни задачи за изпит](https://github.com/telinc1/Introduction-To-Programming-Problems/blob/master/resources/tasks/archives/example_exam_problems.md)

6. **Задача**. Да се напише функция на C++, със сигнатура `double sqrt_a(double a, double eps)`, която намира корен квадратен с точност eps, по следната формула:

	```math
    x_{k+1} = \frac{1}{2}\bigg(x_k + \frac{a}{x_k}\bigg), \ k = 1, 2, 3 \dots , \ a = x_1
    ```

	Изчисленията завършват, когато:

	```math
    |x_{k+1} -\ x_k| < eps
    ```

    ---

    **[Решение](example_exam_6.cpp)**

### [Вложени цикли](https://github.com/telinc1/Introduction-To-Programming-Problems/blob/master/resources/tasks/nested_loops.md)

3. **Задача** Напишете програма, която да изписва таблицата за умножение в даден интервал **i** X **j** (0 <= **i** <= **j** < 999), който се задава от потребителя.

    **Пример**:<br>
    Вход:
	```text
	4 8
	```
    Изход:
	```text
    | X |  4 |  5 |  6 |  7 |
    | 4 | 16 | 20 | 24 | 28 |
	| 5 | 20 | 25 | 30 | 35 |
	| 6 | 24 | 30 | 36 | 42 |
	| 7 | 28 | 35 | 42 | 49 |
	```
	---

	**[Решение](nested_loops_3.cpp)**

#### Задачи за фигурки

Напишете програма, която по зададена височина $n$ рисува следната фигурка (примери са дадени за $n=5$):

1. **Задача**

    ```text
    1
    12
    123
    1234
    12345
    ```

    ---

    **[Решение](pyramid_1.cpp)**

<br>

2. **Задача**

    ```text
        1
       12
      123
     1234
    12345
    ```

    ---

    **[Решение](pyramid_2.cpp)**

<br>

3. **Задача**

    ```text
        1
       123
      12345
     1234567
    123456789
    ```

    ---

    **[Решение](pyramid_3.cpp)**

<br>

4. **Задача**

    ```text
        1
       212
      32123
     4321234
    543212345
     4321234
      32123
       212
        1
    ```

    ---

    **[Решение](pyramid_4.cpp)**
