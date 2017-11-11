def print_f(animals_d, count):
  print("List %d:" % count)
  for name in sorted(animals_d):
    print("%s | %s" % (name, animals_d[name]))

count = 1
while 1:
  n = int(input())
  if n != 0:
    animals = {}
    for i in range(n):
      name = input().split()
      name = name[-1].lower()
    
      if name in animals:
        animals[name] += 1
      else:
        animals[name] = 1
      
    print_f(animals, count)
    count += 1
  else:
    break
  