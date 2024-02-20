from pydub import AudioSegment
import os

input_file = "C:\\Users\\0dhy2\\Desktop\\音频\\1_陈奕迅-孤勇者-《英雄联盟：双城之战》动画剧集中文主题曲_(Vocals).wav"
output_folder = "C:\\Users\\0dhy2\\Desktop\\音乐切片"
duration = 20  # 切分的时长（秒）

def split_audio(input_file, output_folder, duration):
    audio = AudioSegment.from_file(input_file, format="wav")  # 指定音频文件的格式
    
    # 确保输出文件夹存在
    os.makedirs(output_folder, exist_ok=True)
    
    # 计算切分的次数
    num_segments = len(audio) // (duration * 1000)  # 将切分的时长转换为毫秒
    
    for i in range(num_segments):
        # 计算当前切分的起始和结束时间
        start_time = i * duration * 1000  # 转换为毫秒
        end_time = (i + 1) * duration * 1000
        
        # 切分音频
        segment = audio[start_time:end_time]
        
        # 输出文件名，使用顺序编号
        output_file = os.path.join(output_folder, f"{i+1}.wav")
        
        # 保存切分后的音频
        segment.export(output_file, format="wav")
    
    print("音频切分完成！")

# 示例用法
split_audio(input_file, output_folder, duration)
