import numbers as np
import math

# К Пункту A
A = np.matrix([[8, 2, -3, 2],
[-6, 3, -2, 1],
[3, 8, 4, -8],
[2, 1, -6, 2]])

b = np.matrix([[102],
[-47],
[-122],
[-24]])
print("A'*A =\n", A.transpose().dot(A), "\n")

# Функция возвращает собственные значения симметричной матрицы
p = np.linalg.eigh(A.transpose().dot(A))
max_value = np.amax(p[0])
print("Собственные значения A'*A: ", p[0])
print("Максимальное собственное значение матрицы А'*A = ", max_value, "\n")

C = np.eye(4) - A.transpose().dot(A) / max_value
print("C = \n", C, "\n")
d = A.transpose().dot(b) / max_value
print("d = \n", d, "\n")
max_value_C = np.amax(np.linalg.eigh(C)[0])
print("Максимальное собственное значение матрицы С = ", max_value_C, "\n")
