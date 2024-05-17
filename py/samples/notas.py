nota = float(input())

# aprovado se a nota for maior ou igual a 7.0
# recuperacao se a nota for menor que 7.0 e maior ou igual a 4.0
# reprovado se a nota for menor que 4.0

if nota >= 7:
  print('aprovado')
else: # nota < 7
  if nota >= 4.0:
    print('recuperacao')
  else: # nota < 4.0
    print('reprovado')
    