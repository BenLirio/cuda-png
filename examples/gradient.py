vals = []
for x in range(0, 400):
  for y in range(0, 400):
    vals.append(str(x + y))

print(','.join(vals))