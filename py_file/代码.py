import os

# 指定文件夹路径
folder_path = "E:\\333" 

# 合并后的文件路径和名称
output_file = 'E:\\11\\2.txt'

# 遍历文件夹中的文件
file_paths = []
for root, dirs, files in os.walk(folder_path):
    for file in files:
        if file.endswith('.txt'):
            file_path = os.path.join(root, file)
            file_paths.append(file_path)

# 将文件内容合并为一个字符串
merged_text = ''
for file_path in file_paths:
    with open(file_path, 'r', encoding='utf-8') as file:
        file_text = file.read()
        merged_text += file_text + '\n'

# 将合并后的文本写入输出文件
with open(output_file, 'w', encoding='utf-8') as output:
    output.write(merged_text)