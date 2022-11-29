# typedef关键词

![image-20221013160306793](C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20221013160306793.png)

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20221013160528395.png" alt="image-20221013160528395" style="zoom:50%;" />

```C
typedef int int32_t;
int32_t n = 123;
printf("n = %d\n", n);  //output:123
```

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20221013160737956.png" alt="image-20221013160737956" style="zoom:50%;" />

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20221013160852104.png" alt="image-20221013160852104" style="zoom:50%;" />

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20221013161026901.png" alt="image-20221013161026901" style="zoom:50%;" />

这种**不需要加struct**

### typedef和#define的区别

**#define可以为值设置一个别名**，但typedef不行

#define由**预处理器处理**，并且修改替换代码

typedef不受预处理影响，**在编译时由编译器处理**

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20221013161426144.png" alt="image-20221013161426144" style="zoom:50%;" />

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20221013161440226.png" alt="image-20221013161440226" style="zoom:50%;" />

而**用typedef定义就不会出现这样的情况**

### 提高整型可移植性

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20221013163232506.png" alt="image-20221013163232506" style="zoom:50%;" />

**整型类型的别名无需自己定义**，编译器会根据本平台的整型范围大小，设置对应的别名，只需要**包含头文件stdint.h**

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20221013163354354.png" alt="image-20221013163354354" style="zoom:50%;" />

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20221013163424442.png" alt="image-20221013163424442" style="zoom:50%;" />

**printf函数参数如何保证可移植性？**

<img src="C:\Users\Lanson\Desktop\计算机\笔记\C笔记\images\image-20221013164253974.png" alt="image-20221013164253974" style="zoom:50%;" />

需要另一个**头文件  inttypes.h**

<img src="C:\Users\Lanson\Desktop\计算机\笔记\C笔记\images\image-20221013170627326.png" alt="image-20221013170627326" style="zoom:50%;" />

<img src="C:\Users\Lanson\Desktop\计算机\笔记\C笔记\images\image-20221013170656538.png" alt="image-20221013170656538" style="zoom:50%;" />

<img src="C:\Users\Lanson\Desktop\计算机\笔记\C笔记\images\image-20221013170742451.png" alt="image-20221013170742451" style="zoom:50%;" />

