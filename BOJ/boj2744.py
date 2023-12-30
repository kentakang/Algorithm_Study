text = input()

for i in range(len(text)):
  if text[i].isupper():
    print(text[i].lower(), end='')
  else:
    print(text[i].upper(), end='')