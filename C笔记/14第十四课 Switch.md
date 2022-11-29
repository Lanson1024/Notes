# Switch

### 用法

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20220926140419827.png" alt="image-20220926140419827" style="zoom: 50%;" />

若没有与之匹配的case，则跳转到**default**

**==switch 只能判断整型==**

```c
int letter;
scanf("%c", &letter);
switch(letter)
{
    case 'a':
        printf("alpha");
        break;
    case 'b':
        pritnf("bravo");
        break;
    default:
        printf("no");//此处不用加break；
}
```

**default语句不用加break**

switch语句后的括号内只能填一个==整型表达式==，**可以没有default**

**如果case后没有break，则从匹配的case开始往下依次执行，且执行到default，除非遇到下方某个case有break语句**

<img src="C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20220926141048384.png" alt="image-20220926141048384" style="zoom:50%;" />

### 多余量解决办法

```c
char c;
while(1)
{
    scanf("%c", &c);
    switch(c)
    {
        case 'a':
            printf("alpha\n");
            break;
        case 'b':
            printf("bravo\n");
            break;
        default:
            printf("no\n");
    }		//若没加下行，且输入a，则输出alpha & no（default），原因是输入时需输入a和回车
			//而回车是\n，scanf先获取a，再获取\n（default）
    getchar();//清除未被吸收的输入
}
```

### break和continue到底属于谁？

```c
char c;
while(1)
{
    scanf("%c", &c);
    switch(c)
    {
        case 'a':
            printf("alpha\n");
            break;
        case 'b':
            printf("continue\n");
            getchar();
            continue;
            printf("bravo");
            break;
        default:
            printf("no\n");
    }
    getchar();
}  //输入b，输出continue，由此可见continue以下语句不会被执行，且continue跳回while循环而不是switch
```

**break只对父级（上一级）产生影响**

**continue对switch不产生影响，只对while循环起作用**

### switch也可表示范围

表示方法一：

**0...199 表示 0 <= x <= 199 **    **注意边界条件**

**注意这里...周围要打空格**

```c++
switch(x){
    case 0 ... 199:
        xxxx;
}
```

表示方法二：做商

```c
switch(x / 10){
    case 9:   //90~99
        xxx;
}
```

