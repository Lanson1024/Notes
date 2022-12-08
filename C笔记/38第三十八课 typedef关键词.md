# typedef关键词

![](images/image-20221208205248592.png)

<img src="images/image-20221208205253487.png" alt="image-20221208205253487" style="zoom:67%;" />

```C
typedef int int32_t;
int32_t n = 123;
printf("n = %d\n", n);  //output:123
```

<img src="images/image-20221208205259443.png" alt="image-20221208205259443" style="zoom:67%;" />

<img src="images/image-20221208205305482.png" alt="image-20221208205305482" style="zoom:67%;" />

<img src="images/image-20221208205310976.png" alt="image-20221208205310976" style="zoom:67%;" />

这种**不需要加struct**

### typedef和#define的区别

**#define可以为值设置一个别名**，但typedef不行

#define由**预处理器处理**，并且修改替换代码

typedef不受预处理影响，**在编译时由编译器处理**

<img src="images/image-20221208205317316.png" alt="image-20221208205317316" style="zoom:67%;" />

<img src="images/image-20221208205322953.png" alt="image-20221208205322953" style="zoom:80%;" />

而**用typedef定义就不会出现这样的情况**

### 提高整型可移植性

<img src="images/image-20221208205328488.png" alt="image-20221208205328488" style="zoom:80%;" />

**整型类型的别名无需自己定义**，编译器会根据本平台的整型范围大小，设置对应的别名，只需要**包含头文件stdint.h**

<img src="images/image-20221208205334243.png" alt="image-20221208205334243" style="zoom:67%;" />

![image-20221208205340623](images/image-20221208205340623.png)

**printf函数参数如何保证可移植性？**

<img src="images/image-20221208205345126.png" alt="image-20221208205345126" style="zoom:67%;" />

需要另一个**头文件  inttypes.h**

![image-20221208205351048](images/image-20221208205351048.png)

<img src="images/image-20221208205355525.png" alt="image-20221208205355525" style="zoom:67%;" />

<img src="images/image-20221208205401188.png" alt="image-20221208205401188" style="zoom:67%;" />

