n = int(input())
input_list = []
original_list = []

temp = input().split(' ')
for element in temp:
  input_list += [int(element)]
  original_list += [int(element)]

for i in range(6, 0, -1):
  if input_list.count(i) == 1:
    print(original_list.index(i) + 1)
    break
else:
  print("none")
