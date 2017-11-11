import sys

fac = [1, 1]

for i in range(2, 101):
  fac.append(i * fac[i - 1])
  
for _input in sys.stdin:
  line = str(_input.split()[0])

  dic = {}
  single_list = []

  for char in line:
    if not char in single_list: 
      single_list.append(char)
    else:
      if char in dic:
        dic[char] += 1
      else:
        dic[char] = 2
  
  perms = fac[len(line)]
  if len(dic) != 0:
    for key in dic:
      perms = perms // fac[dic[key]]
  
  print("%d" % perms)
  