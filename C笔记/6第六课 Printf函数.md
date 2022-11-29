## Printf函数

printf的第一个参数是字符串，是需要输出的内容

#### 整型占位符

printf函数会自动$\textcolor{Goldenrod}{类型提升} $  

char short int会自动提升为int，故这三个整型使用%d即可

但long和long long会保持，需要用%ld和%lld占位符

无符号则用无符号占位符%u

<img src="C:\Users\Lanson\Desktop\计算机\笔记\C笔记\images\image-20220925150735558.png" alt="image-20220925150735558" style="zoom:50%;" />

<img src="C:\Users\Lanson\Desktop\计算机\笔记\C笔记\images\image-20220925150833506.png" alt="image-20220925150833506" style="zoom:50%;" />

float和double都会类型提升为double

%o 转换为八进制   %x %X 转换为十六进制

%ld %lld 加长字节长度       %hd %hhd  缩短字节长度

```c
#include <stdio.h>
#include <stdlib.h>
int main()
{	
    int num = 0x123;
    int num2 = 123;
    printf("%x","%x",num,num2);
    //num输出 123  ；num2输出7b(十六进制)
	system("pause");
	return 0;
}
```

开头的"0"令解析器更易辨认数，而"x"则代表十六进制，O表示八进制

```c
#include <stdio.h>
int main()
{
	unsigned long l = 4294967295;
    unsigned long long ll = 18446744073709551615;
    printf("%u\n", l); //输出4294967295
    printf("%u %u\n", ll);//输出4294967295 4294967295
    return 0;
}
```
