# new和delete操作符

堆区开辟的数据，由程序员**手动释放**，利用操作符 **delete**

```c++
int *p = new int(10);
delete p;
```

### new 创建数组

```c++
int *parr = new int[10];
```

```c++
int *p = new int(10);
```

**注意差别**

### delete 释放数组

```c++
int *p = new int[10];
delete[] p;
```

==**释放数组时要加一个 []**== 才可以