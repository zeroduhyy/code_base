import os

max_num = 0

# 指定目录路径
directory_path = r'e:\my_blog\source\_posts'

# 遍历目录中的文件
for filename in os.listdir(directory_path):
    if filename.endswith('.md') and filename[:-3].isdigit():
        num = int(filename[:-3])
        max_num = max(max_num, num)

next_num = max_num + 1
print("The maximum numerical value is:", max_num)
print("The next numerical value is:", next_num)
