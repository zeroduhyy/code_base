from pydub import AudioSegment
import os

input_folder = "G:\\so-vits-svc\\results"
output_file = "C:\\Users\\0dhy2\\Desktop\\合并音频.wav"

def merge_audio(input_folder, output_file):
    audio_files = sorted([f for f in os.listdir(input_folder) if f.endswith(".wav")])  # 获取输入文件夹中的所有音频文件，并按名称排序
    
    merged_audio = AudioSegment.empty()  # 创建一个空的音频对象，用于存储合并后的音频
    
    for audio_file in audio_files:
        file_path = os.path.join(input_folder, audio_file)
        segment = AudioSegment.from_file(file_path, format="wav")  # 从文件加载音频段
        merged_audio += segment  # 将音频段串联到合并的音频对象上
    
    merged_audio.export(output_file, format="wav")  # 导出合并后的音频
    
    print("音频合并完成！")

# 示例用法
merge_audio(input_folder, output_file)
