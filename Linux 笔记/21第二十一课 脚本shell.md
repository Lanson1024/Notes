# 脚本shell

**echo 效果等于 printf**

**打开脚本(在文件夹下使用相对路径) 	./scriptname**

**新建脚本  vim scriptname**

**\#  注释**

`read county`

**必须以 ==#!== 开头**  后一般接 /bin/bash

```shell
#!/bin/bash
echo type your name
read country
echo my country name is &country
```

**在脚本外定义变量**

**export** 变量名=值



-eq 等于

-gt  大于

-ge 大等

-lt   小于

-le  小等

# if

![image-20221205164955217](images/image-20221205164955217.png)

else 改成 then

# case

![image-20221205165941518](images/image-20221205165941518.png)

*: 其他输入

# for

![image-20221205171147199](images/image-20221205171147199.png)

# until

![image-20221205173653300](images/image-20221205173653300.png)

# arguments 传参

![image-20221205180848783](images/image-20221205180848783.png)

# shift

**类似不断pop_front（）的vector**

![image-20221205180656081](images/image-20221205180656081.png)

