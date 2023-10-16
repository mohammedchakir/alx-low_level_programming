import ctypes

100-operations = ctypes.CDLL('./100-operations.so')

a = 10
b = 5

result_add = mylib.add(a, b)
result_sub = mylib.sub(a, b)
result_mul = mylib.mul(a, b)
result_div = mylib.divi(a, b)
result_mod = mylib.mod(a, b)

print('{} + {} = {}'.format(a, b, result_add))
print('{} - {} = {}'.format(a, b, result_sub))
print('{} x {} = {}'.format(a, b, result_mul))
print('{} / {} = {}'.format(a, b, result_div))
print('{} % {} = {}'.format(a, b, result_mod))
