Lossless-Data-Compression
=========================

Lossless Compression Tools  
[![Build Status](https://travis-ci.org/lucky521/Lossless-Data-Compression.svg?branch=master)](https://travis-ci.org/lucky521/Lossless-Data-Compression)


# Usage

```
# compress string
$ tool-binary -c -t algorithm-name -s "string" 
# decompress string
$ tool-binary -x -t algorithm-name -s "string"
# compress file
$ tool-binary -c -t algorithm-name -f targetfilename 
# decompress file
$ tool-binary -x -t algorithm-name -f targetfilename
```


# 经典无损压缩算法
- [Huffman](https://github.com/lucky521/Lossless-Data-Compression/blob/master/Huffman.md)
- [LZW](https://github.com/lucky521/Lossless-Data-Compression/blob/master/LZW.md)
- [Shannon-Fano](https://github.com/lucky521/Lossless-Data-Compression/blob/master/Shannon-Fano.md)



# 其他算法

| Type | Algorithms  |
|---|---|
| Entropy type | Unary · Arithmetic · Golomb · Huffman · Range · Shannon · Shannon–Fano · Shannon–Fano–Elias · Tunstall · Universal Code |
| Dictionary type | Byte pair encoding · DEFLATE · Lempel–Ziv |
| Other types | BWT · CTW · Delta · DMC · MTF · PAQ · PPM · RLE |
