import os

def merge_txt_files(file_list, output_file):
    with open(output_file, 'w', encoding='utf-8') as outfile:
        for file_path in file_list:
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as infile:
                content = infile.read()
                outfile.write(content)

# 定义要合并的TXT文件所在的文件夹路径
folder_path = 'c:\\Users\\0dhy2\\Downloads'

# 获取文件夹中所有的TXT文件路径
txt_files = [os.path.join(folder_path, file) for file in os.listdir(folder_path) if file.endswith('.txt')]

# 定义输出文件路径
output_file = 'c:\\Users\\0dhy2\\Desktop\\PHM\\OUTPUT\\start.txt'

# 合并TXT文件
merge_txt_files(txt_files, output_file)
