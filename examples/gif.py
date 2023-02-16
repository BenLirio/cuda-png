num_frames = 128
height = 128
width = 128
nums = []
for frame in range(num_frames):
  for y in range(height):
    for x in range(width):
      # nums.append(str((x + y + frame) % 256))
      nums.append(str(0))

print(','.join(nums))