cases = int(input())

while cases:
  input_sounds = input().split()
  known_sound = []
  while True:
    sound_line = input()
    if sound_line == "what does the fox say?":
      break
    
    sound = str(sound_line.split()[-1])
    known_sound.append(sound)
    
  for word in input_sounds:
    if word not in known_sound:
      print(word, end=' ')
  print()

  cases -= 1