# LZW算法

## 步骤：
1. 建立一个压缩字典，开始对文件顺序扫描。
2. 遇到第一次出现的字符串时，把它放入压缩字典中，并用一个编码来表示，这个编码与此字符串在串表中的位置有关，并将这个编码存入压缩文件中。
3. 遇到不是第一次出现的字符串时，即可用压缩字典中的对应编码来代替，并将这个编码存入文件中。