def retrieve_lines_with_keyword(input_file, output_file, keyword):
    with open(input_file, 'r',encoding='utf-8',errors='ignore') as file:
        lines = file.readlines()

    matched_lines = [line.replace('DI ', 'https://sci-hub.se/') for line in lines if keyword in line]

    with open(output_file, 'w',encoding='utf-8') as file:
        file.writelines(matched_lines)

# 示例用法
input_file = 'c:\\Users\\0dhy2\\Desktop\\PHM\\OUTPUT\\start.txt'    # 输入文件名
output_file = 'c:\\Users\\0dhy2\\Desktop\\PHM\\OUTPUT\\Interlayer_connection.txt'  # 输出文件名
keyword = 'DI 1'           # 要检索的关键词

retrieve_lines_with_keyword(input_file, output_file, keyword)
