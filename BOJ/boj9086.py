n = int(input())
results = []

for i in range(n):
  text = input()
    
  results.append(text[0] + text[-1])

for result in results:
  print(result)