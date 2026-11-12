<p align="center">
  <img src="https://github.com/user-attachments/assets/7b4b9f92-2a7f-4f10-a466-4c10128b6a81" alt="Розрахункова робота" style="border-radius: 24px; width: 100%; max-width: 1280px; display: block;">
</p>


<details>
  <summary><strong>Завдання 1</strong></summary>

  ### Постановка завдання
  Не використовуючи стандартні математичні функції, розрахувати суму ряду.
  
  <div align="center">

  $$\Large \displaystyle S = \sum_{n=0}^{N} \frac{a^{2n+1}}{(2n+1)!}$$

  </div>
  
  Значення змінних $a$ та $N$ ($N \ge 0$) вводяться з клавіатури. $N$ - ціле число

  ---

  ### Програмний код
  Вихідний код розміщено у директорії [`Task 1`](./Task%201): [`main.c`](./Task%201/main.c), [`funcs.h`](./Task%201/funcs.h), [`funcs.c`](./Task%201/funcs.c).

  ---

  ### Результати виконання програми
  
  | # | Вхідне a | Вхідне N | Результат |
  | --|--------- | -------- | --------- |
  | 1 | 2.0      | 2        | 3.600000  |
  | 2 | 5.5      | 0        | 5.500000  |
  | 3 | -1.0     | 3        | -1.175198 |
  | 4 | 0.0      | 5        | 0.000000  |
  
  <img width="200" alt="image" src="https://github.com/user-attachments/assets/ccb16abb-2d4d-4dff-97a6-5ca2b778b505" />
  <img width="200" alt="image" src="https://github.com/user-attachments/assets/ebdaef79-4ec9-4a58-b5c9-be374e5290cb" />
  <img width="200" alt="image" src="https://github.com/user-attachments/assets/03ab4373-6d56-4c31-a607-d2785cb71d94" />
  <img width="200" alt="image" src="https://github.com/user-attachments/assets/ea6bb971-e09a-42b4-b14f-aa7afdd1d42c" />
</details>

<details>
  <summary><strong>Завдання 2</strong></summary>
  
  ### Постановка завдання
  Задана квадратна матриця $A$ розміром $N \times N$. Матриця $A$ заповнюється випадковими числами із діапазону $-a \dots a$, де $a$ - випадкове число із діапазону $5 \dots 9$. Задається матриця $B$ розміром $N \times N$. Виконати сортування за зростанням стовпців матриці $A$, результат зберегти в матриці $B$. (Матриця $B$ зберігає результат, при цьому матриця $A$ зберігається в початковому вигляді). Вивести на екран матриці $A$ та $B$. Задачу реалізувати у вигляді окремої функції.
  
  ### Програмний код
Вихідний код розміщено у директорії [`Task 2`](./Task%202): [`main.c`](./Task%202/main.c), [`funcs.h`](./Task%202/funcs.h), [`funcs.c`](./Task%202/funcs.c).

| # | Розмір N | Параметр a | Діапазон |
| - | -------- | ---------- | -------- |
| 1 | 5 | 9 | [-9; 9] |
| 2 | 3 | 6 | [-6; 6] |

<img width="300" alt="image" src="https://github.com/user-attachments/assets/74fe2a1f-03b7-4fe2-af34-25086d76b478" />
<img width="300" alt="image" src="https://github.com/user-attachments/assets/bb543f46-1633-4a9f-b036-51cb1feb3b09" />


</details>

<details>
  <summary><strong>Висновки</strong></summary>

  У ході виконання розрахункової роботи закріплено навички програмування мовою **C** та модульної організації коду з розділенням на заголовкові файли (`.h`) і файли реалізації (`.c`). Проєкт побудовано в архітектурі монорепозиторію (`Task 1`, `Task 2`) зі спільним звітом.

</details>
