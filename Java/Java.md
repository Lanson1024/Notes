[toc]

# 前言

![image-20230714162722156](C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20230714162722156.png)

## 特点

![image-20230714162829712](C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20230714162829712.png)

![image-20230714163500036](C:\Users\Lanson\AppData\Roaming\Typora\typora-user-images\image-20230714163500036.png)

![image-20230714164029891](images/image-20230714164029891.png)

## jvm：java虚拟机

![image-20230714164150968](images/image-20230714164150968.png)

![image-20230714164502232](images/image-20230714164502232.png)

## 什么是 JDK JRE

![image-20230714164605488](images/image-20230714164605488.png)

![image-20230714170213527](images/image-20230714170213527.png)

# 第一章 Hello World(注意事项)

![image-20230714172613026](images/image-20230714172613026.png)![image-20230714172618944](images/image-20230714172618944.png)

**src中存放.java文件，out中存放.class文件**

![image-20230714172649837](images/image-20230714172649837.png)

**这两个名字要一样**

![image-20230714173147859](images/image-20230714173147859.png)

![image-20230714173432980](images/image-20230714173432980.png)

![image-20230714173601132](images/image-20230714173601132.png)

<img src="images/image-20230714173839868.png" alt="image-20230714173839868" style="zoom:67%;" /><img src="images/image-20230714173907291.png" alt="image-20230714173907291"  />

**一个源文件中最多==只能有一个public类==。**其它类的个数不限，也可以将main方法写在非public类里，然后指定运行非public类，这样入口方法就是非public的main方法

![image-20230714174243327](images/image-20230714174243327.png)

![image-20230714175257528](images/image-20230714175257528.png)

回车后光标移到最前，即韩，再将韩替换北，顺替换京

## 注释

<img src="images/image-20230715101545182.png" alt="image-20230715101545182" style="zoom:67%;" />

![image-20230715101629881](images/image-20230715101629881.png)

**类、方法的注释，要以javadoc的方式注释**

# 第二章 DOS Java API  类的组织形式 和 IDEA

## DOS

![image-20230715102344102](images/image-20230715102344102.png)

<img src="images/image-20230715102625811.png" alt="image-20230715102625811" style="zoom:67%;" />

![image-20230715102653396](images/image-20230715102653396.png)

## Java API

![image-20230715152629848](images/image-20230715152629848.png)

## 类的组织形式

![image-20230715152901514](images/image-20230715152901514.png)

## IDEA

### 快捷键

<img src="images/image-20230719163536228.png" alt="image-20230719163536228" style="zoom:67%;" />

![image-20230719163900234](images/image-20230719163900234.png)

![image-20230719164032596](images/image-20230719164032596.png)

### 模板

![image-20230719164950057](images/image-20230719164950057.png)

# 第三章 变量

**声明字符串：  String 不是 string**

<img src="images/image-20230715103617244.png" alt="image-20230715103617244" style="zoom: 67%;" />

**运算顺序从左到右**

![image-20230715103710962](images/image-20230715103710962.png)

![image-20230715104234254](images/image-20230715104234254.png)

![image-20230715104414760](images/image-20230715104414760.png)

![image-20230715104643479](images/image-20230715104643479.png)

**浮点数由符号位+指数位+尾数位构成，尾数部分可能丢失，造成精度损失**

![image-20230715110133710](images/image-20230715110133710.png)

## 浮点数陷阱

![image-20230715110341368](images/image-20230715110341368.png)

![image-20230715110317702](images/image-20230715110317702.png)

**当我们对运算结果是小数的进行相等判断时，要小心**

**应该以两个数的差值的绝对值在某个精度范围内判断**

### Math.abs API

![image-20230715152313580](images/image-20230715152313580.png)

返回绝对值

## 编码

![image-20230715153942090](images/image-20230715153942090.png)

![image-20230715154313356](images/image-20230715154313356.png)

![image-20230715154345793](images/image-20230715154345793.png)

## 布尔类型  boolean

**==不可以==0或非0的整数替代false和true,这点和C语言不同**

## 自动类型转换

![image-20230715163736494](images/image-20230715163736494.png)

![image-20230715164154873](images/image-20230715164154873.png)

这么写错的

这么写就是对的

![image-20230715164303973](images/image-20230715164303973.png)

**(byte, short) 和 char 之间不发生类型转换**

![image-20230715164912329](images/image-20230715164912329.png)

**boolean不参与转换**

![image-20230715165119768](images/image-20230715165119768.png)

## 强制类型转换

![image-20230715165746842](images/image-20230715165746842.png)

**只对10进行了转换**

<img src="images/image-20230715170205806.png" alt="image-20230715170205806" style="zoom:67%;" />

## 基本数据类型和String的转换

<img src="images/image-20230715170336856.png" alt="image-20230715170336856" style="zoom: 67%;" />![image-20230715170353752](images/image-20230715170353752.png)

<img src="images/image-20230715170428550.png" alt="image-20230715170428550" style="zoom: 80%;" />

<img src="images/image-20230715170438617.png" alt="image-20230715170438617" style="zoom:80%;" />

![image-20230715194920809](images/image-20230715194920809.png)

# 第四章 运算符

## 取模

![image-20230715200836116](images/image-20230715200836116.png)

**==a % b = a - (a / b) * b==**    

## instanceof

![image-20230715202204998](images/image-20230715202204998.png)

## 逻辑运算符

![image-20230715221102788](images/image-20230715221102788.png)

![image-20230715223108390](images/image-20230715223108390.png)

![image-20230715223242681](images/image-20230715223242681.png)

## 命名规范

![image-20230715223756031](images/image-20230715223756031.png)

![image-20230715223801605](images/image-20230715223801605.png)

# 第五章 键盘输入和进制

## 输入

![image-20230715224017437](images/image-20230715224017437.png)

![image-20230715224420465](images/image-20230715224420465.png)

![image-20230715224450208](images/image-20230715224450208.png)

![image-20230715224652291](images/image-20230715224652291.png)

## 进制

![image-20230717100802738](images/image-20230717100802738.png)

### 八转十

![image-20230717101428886](images/image-20230717101428886.png)

### 十六转十

![image-20230717101533815](images/image-20230717101533815.png)

### 十转二

![image-20230717101644945](images/image-20230717101644945.png)

但一个字节有8bit，所以还得在前面补两个0 		**0B00100010**

### 十转八  十转16

形同十转二，只不过  **除8 除16 而不是  除2**

### 二转八

![image-20230717102225241](images/image-20230717102225241.png)

### 二转十六

![image-20230717102349137](images/image-20230717102349137.png)

### 八转二（二转八逆向）

![image-20230717102528652](images/image-20230717102528652.png)

### 十六转二（二转十六逆向）

![image-20230717102705476](images/image-20230717102705476.png)

## 原码 反码 补码

![image-20230717102954639](images/image-20230717102954639.png)

计算机运算的时候，都是以==**补码方式运算**==             **结果以==原码==方式展现**

## 位运算

![image-20230717103533990](images/image-20230717103533990.png)

![image-20230717103949567](images/image-20230717103949567.png)

**重点**	**反码和按位取反不同**  反码是符号位不变，其他取反，而按位取反是每一位都取反

![image-20230717104114592](images/image-20230717104114592.png)

![image-20230717104532448](images/image-20230717104532448.png)

![image-20230717104801093](images/image-20230717104801093.png)

**所以 二分，快排里的mid = l + r >> 1  本质就是 (l + r) / 2，只不过位运算更快**

# 第六章 分支与循环

**和C C++一模一样**							<img src="images/image-20230717110012744.png" alt="image-20230717110012744" style="zoom:80%;" />

## switch细节

![image-20230717110141541](images/image-20230717110141541.png)

## Math.random()

Math.random()  **返回[0, 1)的数**

![image-20230717110909781](images/image-20230717110909781.png)

**返回 [0，99] 的整数**

## break 和 continue注意事项

![image-20230717111149348](images/image-20230717111149348.png)

**label1 label2名字并不固定，满足命名规范即可**

<img src="images/image-20230717111422747.png" alt="image-20230717111422747" style="zoom:67%;" />

# 第七章 数组

**数组是引用类型**，所以是引用传递，引用赋值

## 定义数组

### 一维数组

`int[] arr = {0, 2, 4, 6, 8};`

![image-20230717112311504](images/image-20230717112311504.png)

**int arr[] 和 int[] arr   一样** 

![image-20230717112617845](images/image-20230717112617845.png)

### 二维数组

<img src="images/image-20230717113225242.png" alt="image-20230717113225242" style="zoom:80%;" />

<img src="images/image-20230717113258422.png" alt="image-20230717113258422" style="zoom: 67%;" />

Java 二维数组比较灵活，列数可以不确定，可以这样

<img src="images/image-20230717113423105.png" alt="image-20230717113423105" style="zoom:80%;" />

# 第八章 类与对象

## 定义与实例化

**定义：**			<img src="images/image-20230717114206922.png" alt="image-20230717114206922" style="zoom:67%;" />

**实例化：**		<img src="images/image-20230717114240107.png" alt="image-20230717114240107" style="zoom:67%;" />

## 内存中对象的存在形式

**如果是基本数据类型，直接存在堆里，否则，存入方法区的常量池中**

![image-20230717114446809](images/image-20230717114446809.png)

**成员变量=属性=field(字段)**

![image-20230717162347388](images/image-20230717162347388.png)

## 对象内存分配机制

![image-20230717162658556](images/image-20230717162658556.png)

![image-20230717162835061](images/image-20230717162835061.png)

## 成员方法（方法）

<img src="images/image-20230719104024613.png" alt="image-20230719104024613" style="zoom:67%;" />

**调用**      ![image-20230719104143979](images/image-20230719104143979.png)

### 方法调用机制

<img src="images/image-20230719124729228.png" alt="image-20230719124729228" style="zoom:67%;" />

### 访问修饰符

![image-20230719125046609](images/image-20230719125046609.png)

**方法不能嵌套定义**

### 同一类中的方法调用

![image-20230719130425239](images/image-20230719130425239.png)

### 跨类调用方法

<img src="images/image-20230719130609041.png" alt="image-20230719130609041" style="zoom: 67%;" />

### 汉诺塔

![image-20230719132524115](images/image-20230719132524115.png)

### 方法重载（要求形参列表不一致）

<img src="images/image-20230719132857152.png" alt="image-20230719132857152" style="zoom: 67%;" />

### 可变参数

![image-20230719134532653](images/image-20230719134532653.png)

![image-20230719134738914](images/image-20230719134738914.png)

类似于ES6的	**...解构**

**可以将nums当作数组使用**

**一个形参列表中只能出现一个可变参数，且在形参列表最后**

**全局变量可以加修饰符，局部变量不可以加修饰符**

## 构造方法/构造器

<img src="images/image-20230719142726137.png" alt="image-20230719142726137" style="zoom:80%;" />

**构造器==没有返回值==**		new的时候会调用构造器

**作用：完成对新对象的初始化**

![image-20230719143141948](images/image-20230719143141948.png)

**构造器可以重载**

<img src="images/image-20230719144133448.png" alt="image-20230719144133448" style="zoom: 67%;" />

![image-20230719144336530](images/image-20230719144336530.png)

<img src="images/image-20230719144422293.png" alt="image-20230719144422293" style="zoom:67%;" />

<img src="images/image-20230719144612667.png" alt="image-20230719144612667" style="zoom: 67%;" />

![image-20230719144604264](images/image-20230719144604264.png)

定义完构造器后，默认的无参构造器就失效了，不传参数会报错，除非显式定义一下无参构造器			public可以不写

<img src="images/image-20230719144707060.png" alt="image-20230719144707060" style="zoom: 67%;" />

## this

![image-20230719154610999](images/image-20230719154610999.png)

**this.name  ->  当前对象的属性**

### 注意事项

![image-20230719155021111](images/image-20230719155021111.png)

<img src="images/image-20230719155155636.png" alt="image-20230719155155636" style="zoom:67%;" />

具体区别详见  继承

**4.只能在构造器中访问另一个构造器**

![image-20230719155418612](images/image-20230719155418612.png)

先无参构造器，又this调用了有参构造器

![image-20230719155659575](images/image-20230719155659575.png)

### String.equals()方法

![image-20230719160311085](images/image-20230719160311085.png)

# 第九章 包

<img src="images/image-20230720111747951.png" alt="image-20230720111747951" style="zoom:67%;" />

**com一级目录 hspedu 二级目录**  以此类推  以 **.** 分割

## 包的本质 

<img src="images/image-20230720111850867.png" alt="image-20230720111850867" style="zoom: 67%;" />

<img src="images/image-20230720112631230.png" alt="image-20230720112631230" style="zoom:67%;" />

## 调用不同包下的相同类

![image-20230720112730526](images/image-20230720112730526.png)

## 命名规范

![image-20230720132801611](images/image-20230720132801611.png)

## 常用包

![image-20230720132955379](images/image-20230720132955379.png)

**需要用到哪个类，就导入哪个类，不建议导入全部类**

<img src="images/image-20230720133453489.png" alt="image-20230720133453489" style="zoom:67%;" />

需要引入array包

<img src="images/image-20230720133507487.png" alt="image-20230720133507487" style="zoom:67%;" />

## 注意事项

![image-20230720133612838](images/image-20230720133612838.png)

![image-20230720133710668](images/image-20230720133710668.png)

## 访问修饰符

![image-20230720134352590](images/image-20230720134352590.png)

![image-20230720134627218](images/image-20230720134627218.png)

**只有默认和public** 才能修饰类

**同包：**

![image-20230720135521425](images/image-20230720135521425.png)

**修饰符可以用来修饰类中的属性，成员方法以及类**

## 封装（encapsulation）

把抽象出的数据[**属性**]和对数据的操作[**方法**]封装在一起，数据被保护在内部，程序的其他部分只有通过被授权的操作[**方法**]才能对数据进行操作

**优点：隐藏实现细节，可以对数据进行验证，保证安全合理**

### 步骤：

**1.将属性私有化 private   让外部不能直接修改**

**2.提供一个公共的（public）set方法，用于对属性判断并赋值**

```java
public void setXxx(){
    //加入数据验证的业务逻辑
    属性 = 参数名
}
```

**3.提供一个公共的（public）get方法，用于获取属性的值**

```java
public XX getXxx(){
    return xx;
}
```

### 案例：

![image-20230720142435200](images/image-20230720142435200.png)

<img src="images/image-20230720142137756.png" alt="image-20230720142137756" style="zoom:67%;" />

<img src="images/image-20230720142144295.png" alt="image-20230720142144295" style="zoom:67%;" />

自己写太慢，我们用快捷键alt + insert

<img src="images/image-20230720142345847.png" alt="image-20230720142345847" style="zoom: 80%;" />

限制都在get和set里写

### 封装与构造器

![image-20230720143320517](images/image-20230720143320517.png)

![image-20230720143403322](images/image-20230720143403322.png)

<img src="images/image-20230720143408456.png" alt="image-20230720143408456" style="zoom:67%;" />

防护机制失效

**我们可以将set方法写在构造器中，这样仍然可以验证**

![image-20230720143521196](images/image-20230720143521196.png)

## 继承（Extends）

**提高代码复用性**

### 基本语法

**class 子类 extends 父类{}**

![image-20230720151004622](images/image-20230720151004622.png)

![image-20230720151104037](images/image-20230720151104037.png)

![image-20230720151128063](images/image-20230720151128063.png)

### 细节

**父类private**

![image-20230720151504466](images/image-20230720151504466.png)

 非private的属性可以直接访问

**公共方法访问私有变量**

<img src="images/image-20230720152251898.png" alt="image-20230720152251898" style="zoom:67%;" />

<img src="images/image-20230720152442926.png" alt="image-20230720152442926" style="zoom: 67%;" />

**子类必须调用父类的构造器，完成父类的初始化**

<img src="images/image-20230720152923738.png" alt="image-20230720152923738" style="zoom:80%;" />

```java
public class Base{
    public Base(){
        System.out.println("父类Base()构造器被调用....");
    }
}
```

```java
public class Sub extends Base{
    public Sub(){
        System.out.println("子类Sub()构造器被调用....");
    }
}
```

![image-20230720153009533](images/image-20230720153009533.png)

**默认加了一个 super()   默认调用父类构造器**

![image-20230720153834278](images/image-20230720153834278.png)

如果父类没有提供无参构造器，则必须在  **子类的构造器**  中**用super去指定  父类的哪个构造器**  完成对父类的初始化工作

![image-20230720154638195](images/image-20230720154638195.png)

![image-20230720154840029](images/image-20230720154840029.png)

**super 和 this 必须放在第一行**

**Object 是所有类的父类**

输入 ctrl + h 可以看到所有类的子类

**父类构造器的调用将一直往上追溯到 Object 类**

**子类最多只能继承一个父类（直接继承），在java中是单继承机制**

![image-20230720160324746](images/image-20230720160324746.png)

![image-20230720160338757](images/image-20230720160338757.png)

### 继承的本质

**当子类对象创建好后，建立查找的关系**

![image-20230720160925244](images/image-20230720160925244.png)

#### 访问属性的关系

![image-20230720161016560](images/image-20230720161016560.png)

特别注意，不仅要求有属性，**还得要求可以访问**

### 案例：

![image-20230720161549013](images/image-20230720161549013.png)

a , b name , b

**要特别注意隐藏的super！**

### super

可以访问父类的属性，==**但不能访问父类的private属性**==        super.属性名

![image-20230720163920034](images/image-20230720163920034.png)

**super不限于父类，是上级类，一旦找到就break**

#### super 和 this 的比较

![image-20230720164654736](images/image-20230720164654736.png)

### 方法重写（override）

子类某个方法和父类（上级类）某个方法一样，覆盖

<img src="images/image-20230721161533717.png" alt="image-20230721161533717" style="zoom:67%;" />

#### 注意事项

![image-20230721162316349](images/image-20230721162316349.png)

**子类方法不能缩小父类方法的访问权限**

### 重载和重写的比较

<img src="images/image-20230721162856014.png" alt="image-20230721162856014"  />

## 多态（polymorphic）

**提高代码复用性**		方法或对象具有多种形态

**方法的多态：重写/重载**

### 对象的多态

一个对象的**编译类型和运行类型可以不一致**

编译类型在定义对象时，就确定了，不能改变

运行类型时可以变化的

编译类型看定义时 = 号 的左边，运行类型看 = 号 的右边

前提：两个类存在继承关系

![image-20230721165129918](images/image-20230721165129918.png)

父类在等号左边，子类在等号右边，**父类的一个引用可以指向子类的一个对象**

### 案例：

<img src="images/image-20230721165624842.png" alt="image-20230721165624842" style="zoom: 67%;" />

<img src="images/image-20230721165642583.png" alt="image-20230721165642583" style="zoom:67%;" />

<img src="images/image-20230721165648828.png" alt="image-20230721165648828" style="zoom:67%;" />

![image-20230721165723756](images/image-20230721165723756.png)

### 向上转型

![image-20230721170019706](images/image-20230721170019706.png)

**本质：父类的引用指向了子类的对象**

**如  Animal dog = new dog();**

特别注意：向上转型，调用时 可以调用父类中所有成员，但**不能调用==子类特有==**的成员    		(catchMouse为cat特有)

<img src="images/image-20230721170617260.png" alt="image-20230721170617260" style="zoom: 67%;" />

![image-20230721170447546](images/image-20230721170447546.png)

<img src="images/image-20230721170741582.png" alt="image-20230721170741582" style="zoom:67%;" />

**运行阶段从运行类型开始看**，此处运行类型为  **cat**

### 向下转型

语法：  子类类型  引用名  =  （子类类型）   父类引用

**只能强转父类的引用，不能强转父类的对象**

**要求父类的引用必须指向的是当前目标类型的对象**

​		即 向上和向下转型的双方都是一样的，一方 animal 一方  cat	

```java
Animal animal = new Cat();
Cat cat = (Cat) animal;
```

向下转型后 **可以调用子类类型中所有的成员**

![image-20230721171507443](images/image-20230721171507443.png)

**编译和运行类型都是  cat**

**属性没有重写！ ==属性的值看编译类型==**

![image-20230721195536993](images/image-20230721195536993.png)

与方法不同！

![image-20230721200159585](images/image-20230721200159585.png)

### **（！非常重要！）动态绑定机制**

详见韩顺平Java p315

![image-20230721200524790](images/image-20230721200524790.png)

<img src="images/image-20230721200721464.png" alt="image-20230721200721464" style="zoom: 40%;" /><img src="images/image-20230721200741040.png" alt="image-20230721200741040" style="zoom: 47%;" />

**当调用对象==方法==的时候，该方法会和该对象的内存地址/==运行类型==绑定**

**当调用对象==属性==时，==没有动态绑定==，哪里声明，哪里使用**

### 多态数组

**数组的定义类型为父类类型，里面保存的实际元素类型为子类类型**

![image-20230721201842383](images/image-20230721201842383.png)

![image-20230721202252446](images/image-20230721202252446.png)

![image-20230721202452925](images/image-20230721202452925.png)

如此操作

![image-20230721202531158](images/image-20230721202531158.png)

### 多态的应用——多态参数

**方法定义的形参类型为父类类型，实参类型允许为子类类型**

![image-20230721202838544](images/image-20230721202838544.png)

## Object 类方法

#### == 和 equals 的区别

![image-20230723194009444](images/image-20230723194009444.png)

<img src="images/image-20230723194145184.png" alt="image-20230723194145184" style="zoom:67%;" />

bObj 和 c 地址指向相同，所以是 true

**equals 只能判断引用类型**

**默认判断的是地址是否相等，子类中往往重写该方法，用于判断内容是否相等**

![image-20230723195256220](images/image-20230723195256220.png)

因为是new Integer 所以 == 比较的是两个对象，即地址是否相同

而因为Integer子类重写了equals方法（比较值），所以为true

<img src="images/image-20230723195410515.png" alt="image-20230723195410515" style="zoom: 67%;" />

String 同理  == 比较地址， 重写后equals 比较内容

#### hashCode

返回该对象的哈希码值，提高哈希表性能

![image-20230723204736910](images/image-20230723204736910.png)

![image-20230723205018579](images/image-20230723205018579.png)

<img src="images/image-20230723205022441.png" alt="image-20230723205022441" style="zoom:67%;" />

#### toString

默认返回  **全类名+@+哈希值的十六进制**

![image-20230723205217245](images/image-20230723205217245.png)

子类往往重写toString方法，返回对象的属性信息

![image-20230723205506602](images/image-20230723205506602.png)

##### 快捷键重写toString

<img src="images/image-20230723205644506.png" alt="image-20230723205644506" style="zoom:67%;" />

直接输出对象，等价于toString

![image-20230723205920632](images/image-20230723205920632.png)

#### finalize

当对象被回收时，自动调用该对象的finalize方法，子类可重写

当某个对象没有任何引用时，jvm就认为这个对象是垃圾，将其回收，销毁对象前会调用finalize

![image-20230723210357927](images/image-20230723210357927.png)

直接 fina + tab 补全		↓默认

<img src="images/image-20230723210456656.png" alt="image-20230723210456656" style="zoom: 67%;" />

特别注意，**并不是一置空就回收**，当然也可以主动调用  System.gc()

<img src="images/image-20230723210840561.png" alt="image-20230723210840561" style="zoom:67%;" />

实战中几乎不会运用finalize，多用于应付面试

## 断点调试

==断点调试中，以对象的**运行类型**执行的==

![image-20230723211117838](images/image-20230723211117838.png)

![image-20230723211151740](images/image-20230723211151740.png)

![image-20230723211411501](images/image-20230723211411501.png)

# 第十章 面向对象高级

## 类变量（静态变量）和类方法

<img src="images/image-20230724170702421.png" alt="image-20230724170702421" style="zoom:67%;" />

![image-20230724170715436](images/image-20230724170715436.png)

![image-20230724170744260](images/image-20230724170744260.png)

<img src="images/image-20230724170939351.png" alt="image-20230724170939351" style="zoom:50%;" />

<img src="images/image-20230724172946665.png" alt="image-20230724172946665" style="zoom:67%;" />

jdk8以前，static存在方法区中的静态域中，jdk8后，存在堆中

static **类变量 在类加载时候生成**

语法：   访问修饰符 static 数据类型 变量名

当需要让**某个类的所有对象都共享一个变量**时，就可以使用类变量

静态方法访问静态属性

<img src="images/image-20230724175806475.png" alt="image-20230724175806475" style="zoom: 67%;" />

<img src="images/image-20230724175912885.png" alt="image-20230724175912885" style="zoom:67%;" />

**开发自己的工具类时，可以将方法做成静态的，这样不需要实例化一个对象，就能直接使用**

<img src="images/image-20230724180340622.png" alt="image-20230724180340622" style="zoom:67%;" />

<img src="images/image-20230724180527492.png" alt="image-20230724180527492" style="zoom:67%;" />

### 注意事项

==**类方法中不能用this 和super  	类方法只能访问类变量类方法**==

![image-20230724180439255](images/image-20230724180439255.png)

## main方法

**java虚拟机调用main()**，所以必须是public

不必创建对象，所以是static

String[] args:  java 执行的程序 后面的参数

![image-20230724223816013](images/image-20230724223816013.png)

<img src="images/image-20230724223909336.png" alt="image-20230724223909336" style="zoom:67%;" />

**静态main方法不可以访问本类的非静态成员**

```java
public class Main{
    private int n = 10;
    public static void main(String[] args){
        System.out.println(n); //错
    }
}
```

如果想访问非静态成员，要先创建一个对象 再调用

## 代码块

![image-20230724224649496](images/image-20230724224649496.png)

语法：   	[修饰符]{				

​						代码

​				   }

**修饰符要么不写（普通代码块），要么只能写static（静态代码块）**

![image-20230724224858774](images/image-20230724224858774.png)

### 普通代码块

![image-20230724225030806](images/image-20230724225030806.png)

**代码块的调用优先于构造器**

### 静态代码块

**static代码块**，作用是对类进行初始化，随着类的加载而执行，且**只执行一次**，但如果是**普通代码块，则每创建一个对象就执行**

![image-20230724230907105](images/image-20230724230907105.png)

**如果只是使用类的静态成员时，只会调用静态代码块，普通代码块==不会==执行**

总而言之，==**普通代码块**==在==**创建（new）对象时**==调用，且每创建一个就调用一次

而==**static静态代码块**==，在==**加载对象（3种情况）时**==调用，且只会调用一次

#### 类什么时候被加载？

创建对象实例（new）时

创建子类对象实例，父类也会被加载，而且父类先被加载，子类后加载

```java
public class test{
    public static void main(String[] args){
        AA aa = new AA();    //out:BB被加载\n  AA被加载
    }
}
class BB{
    static{
        System.out.println("BB被加载");
    }
}
class AA extends BB{
    static{
        System.out.println("AA被加载");
    }
}
```

使用类的静态成员（属性、方法）时

```java
public class test{
    public static void main(String[] args){
        System.out.println(Cat.n);  //out:Cat被加载 10
    }
}
class Cat{
    private static int n = 10;
    static{
        System.out.println("Cat被加载");
    }
    
}
```

### **（！非常重要！）创建对象时在==一个类==中的调用顺序**

**先调用静态代码块和静态属性初始化，且他们调用优先级一样，按定义顺序调用**

<img src="images/image-20230724231739798.png" alt="image-20230724231739798" style="zoom:67%;" />

new A() 时，先将n1初始化，所以先调用getN1，再调用静态代码块

**再调用普通代码块和普通属性初始化，且他们调用优先级一样，按定义顺序调用**

**最后调用构造方法**

助于理解：构造器的最前面隐含了super()和调用普通代码块，所以静态相关的代码块和静态属性初始化是优先于构造器和普通代码块执行的

<img src="images/image-20230724232555932.png" alt="image-20230724232555932" style="zoom: 67%;" />

### **（！非常重要！）创建对象时在==继承类==中的调用顺序**

![image-20230724233054149](images/image-20230724233054149.png)

先加载（1、2），再创建对象（3-6）创建对象从子类构造器开始

```java
public class test{
    public static void main(String[] args){
		new BB();        
        //out: getVal1  AA的一个静态代码块被加载 
        //	   getVal3  BB的一个静态代码块被加载
        //	   AA的一个普通代码块被加载  getVal2  AA的构造器
        //	   getVal4  BB的一个普通代码块被加载  BB的构造器
    }
}
class AA{
    private static int n1 = getVal1();
    static{
        System.out.println("AA的一个静态代码块被加载");
    }
    {
        System.out.println("AA的一个普通代码块被加载");
    }
    public int n2 = getVal2();
    public static int getVal1(){
        System.out.println("getVal1");
        return 10;
    }
    public int getVal2(){
        System.out.println("getVal2");
        return 10;
    }
    public AA(){
        //隐藏了super()
        //隐藏了普通代码块
        System.out.println("AA的构造器");
    }
}
class BB extends AA{
    private static int n3 = getVal3();
    static{
        System.out.println("BB的一个静态代码块被加载");
    }
    public int n4 = getVal4();
    {
        System.out.println("BB的一个普通代码块被加载");
    }
    public static int getVal3(){
        System.out.println("getVal3");
        return 10;
    }
    public int getVal4(){
        System.out.println("getVal4");
        return 10;
    }
    public BB(){
        //隐藏了super()
        //隐藏了普通代码块
        System.out.println("BB的构造器");
    }
}
```

**静态代码块只能直接调用静态成员，普通代码块可以调用任意成员**

## 单例设计模式

单例：单个实例

两种模式：饿汉式  懒汉式

### 饿汉式单例模式

步骤：

1.**将构造器私有化**   防止直接new一个对象，保证只能创建一个对象

2.**类的内部创建对象**

3.**向外暴露一个静态的公共方法**  getInstance

```java
public class Single{
    public static void main(String[] args){
        //GirlFriend xiaohong = new GrilFriend("小红");
        //GirlFriend xiaobai = new GrilFriend("小白"); //再创建这个小白那么就不是单例了
        //这么实例化:
        GirlFriend xiaohong = GrilFriend.getInstance();
    }
}
class GirlFriend{
    private String name;
    private int n1 = 10;
    private GirlFrined(String name){
        this.name = name;
    }
    //类的内部直接创建   static 静态 保证下面的静态方法能直接访问
    //只要类加载就会被创建，无论是否使用
    private static GirlFriend gf = new GirlFriend("小红");
    public static GirlFriend getInstance(){
        return gf;
    }
}
```

![image-20230726161917240](images/image-20230726161917240.png)

### 懒汉式单例模式

使用时才创建实例

步骤：

1.仍然构造器私有化

2.**定义一个static静态属性对象(不去new！！！)**

3.**提供一个public的static方法，返回一个Cat对象**

```java
public class Single{
    public static void main(String[] args){
        //这么实例化:
        Cat miao = Cat.getInstance();
    }
}
class Cat{
    private String name;
    private static Cat cat;
    private Cat(String name){
        this.name = name;
    }
    public static Cat getInstance(){
        if(cat == null){
            cat = new Cat("miao");
        }
        return cat;
    }
}
```

## final关键字

可以修饰类、属性、方法和局部变量

使用场景：

1.不想**类被继承**（最终类，无子类）

2.不想**父类的某个方法被子类重写**

<img src="images/image-20230726164602599.png" alt="image-20230726164602599" style="zoom:67%;" />

3.不想**类的某个属性的值**被修改

<img src="images/image-20230726164707570.png" alt="image-20230726164707570" style="zoom:67%;" />

<img src="images/image-20230726164700697.png" alt="image-20230726164700697" style="zoom:67%;" />

4.不想**某个局部变量**被修改   （局部常量）

<img src="images/image-20230726164732093.png" alt="image-20230726164732093" style="zoom:67%;" />

### 注意事项

final修饰属性必须赋初值，且不能再修改，赋值可以在 

​			定义时、构造器中、代码块中

<img src="images/image-20230726165306966.png" alt="image-20230726165306966" style="zoom:67%;" />

final修饰==**静态**==属性则初始化的位置只能在 定义时或在静态代码块中，**不能在构造器中赋值**		（原因：构造器是在类创建时才调用，而静态final属性是在类加载时就要定义并赋值的）

<img src="images/image-20230726165402800.png" alt="image-20230726165402800" style="zoom:67%;" />

一般来说，如果一个类已经是final类了，那么没必要将方法修饰成final方法

**final不能修饰构造器**

**final往往和static搭配使用，效率更高（不会导致类加载）**

![image-20230726170015859](images/image-20230726170015859.png)

out: 10000，不会导致类加载，即静态代码块被执行

**包装类（Integer,Double,Float,Boolean,String）都是final类**

## 抽象类

当父类的某些方法需要声明，但是又不确定如何实现

比如动物都有eat的方法，但一般要子类去重写他们，那么父类的eat方法怎么定义？    =》抽象类			特别注意：没有方法体！

![image-20230726170717264](images/image-20230726170717264.png)

但这么写之后，类也要相应地变为抽象类

![image-20230726170753318](images/image-20230726170753318.png)

### 注意事项

**抽象类不能被实例化**

**抽象类可以没有abstract方法**

abstract**只能修饰类和方法**

如果一个类继承了抽象类，则它**必须实现抽象类的所有抽象方法**，除非自己也声明为abstract类

**抽象方法==不能使用private final static修饰==**，因为这些关键字都和重写违背

### 模板设计模式

![image-20230726172446132](images/image-20230726172446132.png)

![image-20230726172433203](images/image-20230726172433203.png)

![image-20230726172602625](images/image-20230726172602625.png)

![image-20230726172649910](images/image-20230726172649910.png)

<img src="images/image-20230726172749129.png" alt="image-20230726172749129" style="zoom:67%;" />

## 接口

<img src="images/image-20230726215823915.png" alt="image-20230726215823915" style="zoom:67%;" />

<img src="images/image-20230726215921384.png" alt="image-20230726215921384" style="zoom:67%;" />

<img src="images/image-20230726220202796.png" alt="image-20230726220202796" style="zoom:67%;" />

<img src="images/image-20230726220419342.png" alt="image-20230726220419342" style="zoom:67%;" />

语法：

<img src="images/image-20230726220827745.png" alt="image-20230726220827745" style="zoom: 67%;" />

![image-20230726220924297](images/image-20230726220924297.png)

接口内部方法不需要加abstract修饰抽象方法

<img src="images/image-20230726221228551.png" alt="image-20230726221228551" style="zoom:67%;" />

<img src="images/image-20230726221237461.png" alt="image-20230726221237461" style="zoom:67%;" />

<img src="images/image-20230726221258846.png" alt="image-20230726221258846" style="zoom:67%;" />

应用场景：

![image-20230726221959409](images/image-20230726221959409.png)

命名无法统一    =>     接口    =>    统一名字

### 注意事项

接口不能被实例化

接口中所有方法都是public方法，如果是抽象方法，可以不用加abstract修饰

**一个普通类实现接口，必须实现接口的所有抽象方法**

**抽象类实现接口，可以不用实现接口的方法**

​								**快捷键alt + enter快速实现重写接口方法**

<img src="images/image-20230726224542149.png" alt="image-20230726224542149" style="zoom:67%;" />

**一个类可以同时实现多个接口**

**==接口中的属性，是public static final的==**  

![image-20230726231547565](images/image-20230726231547565.png)

**一个接口不能继承其他类，但是可以继承多个别的接口**  

​	`interface A extends B,C{}`

**接口的修饰符只能是public或默认**，这点**和类的修饰符一样**

### 实现接口 vs 继承类

<img src="images/image-20230727163619821.png" alt="image-20230727163619821" style="zoom:67%;" />

小猴子继承老猴子，但是要想实现小鸟，鱼的话就要用接口实现

<img src="images/image-20230727165655891.png" alt="image-20230727165655891" style="zoom:67%;" />

![image-20230727165717641](images/image-20230727165717641.png)

![image-20230727165729722](images/image-20230727165729722.png)

**子类继承父类，就自动拥有父类的功能，如果子类要扩展功能，用实现接口的方式扩展**

继承的价值在于  解决代码的复用性和可维护性

接口的价值在于  设计好各种方法，让其他类去实现这些方法

### 接口的多态

#### 多态参数

<img src="images/image-20230726220202796.png" alt="image-20230726220202796" style="zoom:67%;" />

<img src="images/image-20230727170835064.png" alt="image-20230727170835064" style="zoom:67%;" />

#### 多态数组

<img src="images/image-20230727171336435.png" alt="image-20230727171336435" style="zoom:67%;" />

#### 接口的多态传递

**接口类型的变量可以指向实现该接口的类的对象实例**

<img src="images/image-20230727205930826.png" alt="image-20230727205930826" style="zoom:67%;" />

<img src="images/image-20230727210013714.png" alt="image-20230727210013714" style="zoom:67%;" />

## 内部类

![image-20230727210609692](images/image-20230727210609692.png)

<img src="images/image-20230727210830526.png" alt="image-20230727210830526" style="zoom:67%;" />

==**匿名内部类很重要！**==

### 局部内部类

可以访问外部类的所有成员，**包括private**

<img src="images/image-20230727211204261.png" alt="image-20230727211204261" style="zoom:67%;" />

**局部内部类不能加修饰符，但可以用final**

内部类访问外部类 直接访问，而**外部类访问内部类，要创建对象再访问**

```java
class Test{
    
    Test test = new Test();
    test.f1();
}
```

如果外部类和局部内部类的成员重名时，默认遵循就近原则，如果想访问外部类的成员，则可以使用（**外部类名.this.成员**）去访问

```java
class Fa{
    private int n1 = 10;
    public void f1(){
        class Son{
            private int n1 = 80;
            public void f2(){
                sout(n1);  //80
            	sout(Fa.this.n1) //10
            }
    	}
    }
}
```

**外部类名.this  本质就是外部类的对象，哪个对象调用f1，那么外部类名.this就指向哪个对象，如果不加外部类名，直接this.成员，那么就指向内部类**

### **（！！非常重要！！）匿名内部类**

**定义在外部类的局部位置，比如方法中**，**且没有类名**，同时还**是一个对象**

==**放在方法中！！！**==

语法：				new 类或接口（参数列表）{

​									类体

​							}

<img src="images/image-20230727213707690.png" alt="image-20230727213707690" style="zoom:67%;" />

<img src="images/image-20230727213727299.png" alt="image-20230727213727299" style="zoom: 67%;" />

tiger的编译类型 => IA  			运行类型  =>  匿名内部类

<img src="images/image-20230727213855361.png" alt="image-20230727213855361" style="zoom:67%;" />

基于类的匿名内部类也是一样

![image-20230727220929364](images/image-20230727220929364.png)

还能这么直接调用（本质是个对象）

![image-20230727222258549](images/image-20230727222258549.png)

### 应用：

当作实参直接传递，简洁高效

<img src="images/image-20230727222929859.png" alt="image-20230727222929859" style="zoom:67%;" />

### 成员内部类

嵌套class

<img src="images/image-20230728153528261.png" alt="image-20230728153528261" style="zoom:67%;" />

可以直接访问外部类所有属性，**包括私有的**

可以加任何修饰符（本质是成员）

成员内部类访问外部类  =>  直接访问        而  

外部类访问成员内部类  =>  创建对象再访问

外部其他类访问成员内部类：

<img src="images/image-20230728154222236.png" alt="image-20230728154222236" style="zoom:80%;" />

方法一

<img src="images/image-20230728154316889.png" alt="image-20230728154316889" style="zoom: 67%;" />

方法三

<img src="images/image-20230728154606082.png" alt="image-20230728154606082" style="zoom:67%;" />

方法二其实就是方法一

<img src="images/image-20230728154800763.png" alt="image-20230728154800763" style="zoom:67%;" />

如果外部类和内部类的成员重名时，默认遵循就近原则，如果想访问外部类的成员，则可以使用（**外部类名.this.成员**）去访问

### 静态内部类

定义在外部类的成员位置，并且有**static修饰**

可以直接访问外部类 的**所有静态成员**，**包含私有的**，但**不能访问非静态成员**

可以添加任意修饰符

如果外部类和内部类的成员重名时，默认遵循就近原则，如果想访问外部类的成员，则可以使用（**==外部类名.成员==**）去访问

## 类的五大成员

属性，方法，构造器，代码块，内部类

# 第十一章 枚举 注解

## 自定义类实现枚举

![image-20230728163305687](images/image-20230728163305687.png)

步骤：

1.构造器私有化，防止直接new

2.去掉setter，防止修改

3.类内部直接创建固定对象

![image-20230728163636971](images/image-20230728163636971.png)

4.优化  加final，防止类加载

![image-20230728163758480](images/image-20230728163758480.png)

## enum关键字实现枚举

![image-20230728164017378](images/image-20230728164017378.png)

使用enum 替代 class，**用逗号间隔**

![image-20230728164412975](images/image-20230728164412975.png)

==**常量对象写在最前面！！！**==

<img src="images/image-20230728164508423.png" alt="image-20230728164508423" style="zoom:67%;" />

enum默认继承Enum类，且都是public static final

**如果使用无参构造器创建常量对象，可以这么简化(省去参数列表和小括号)**

```java
enum Season{
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER;
    private Season(){}
}
```

### 常用方法

![image-20230728170043732](images/image-20230728170043732.png)

valueOf:

![image-20230728170714657](images/image-20230728170714657.png)

```java
Season autumn = Season.SPRING;
sout(autumn.name());  //out:SPRING
sout(autumn.ordinal()); //out:2     
sout(autumb.values());  //values返回值是个数组
Season autumn1 = Season.valueOf("AUTUMN");
sout(autumn1);  
sout(Season.AUTUMN.compareTo(Season.SUMMER)); //out:1,将前面的编号-后面的编号
```

values方法返回的数组：

<img src="images/image-20230728170452402.png" alt="image-20230728170452402" style="zoom:67%;" />

autumn1:

![image-20230728170632964](images/image-20230728170632964.png)

**enum不能继承其他类，但可以实现接口**

enum 类名 implements 接口1, 接口2{}

## JDK内置的基本注解类型

![image-20230728172206526](images/image-20230728172206526.png)

## 元注解：对注解进行注解

![image-20230728172311946](images/image-20230728172311946.png)

# 第十二章 异常

## 概念

快捷键： ctrl+alt+t

![image-20230728214931799](images/image-20230728214931799.png)

![image-20230728215026061](images/image-20230728215026061.png)

![image-20230728215139232](images/image-20230728215139232.png)

## **体系图**

<img src="images/image-20230728215412195.png" alt="image-20230728215412195" style="zoom:80%;" />

![image-20230728215706521](images/image-20230728215706521.png)

## 常见异常

![image-20230728220325100](images/image-20230728220325100-16905530082362.png)

1.<img src="images/image-20230728220428661.png" alt="image-20230728220428661" style="zoom: 80%;" />

4.<img src="images/image-20230728220542914.png" alt="image-20230728220542914" style="zoom: 67%;" />

5.<img src="images/image-20230728220626266.png" alt="image-20230728220626266" style="zoom:60%;" />

## 异常处理分类

![image-20230801102052069](images/image-20230801102052069.png)

<img src="images/image-20230730182219609.png" alt="image-20230730182219609" style="zoom:67%;" />**所以通常将释放资源放在finally中**

![image-20230801102254521](images/image-20230801102254521.png)

一旦发生异常，try中剩下代码就不执行了

![image-20230801102522204](images/image-20230801102522204.png)

**对一段代码（可能有多个异常）用不同的catch处理不同异常**

**要求：子类异常写前面，父类异常写后面**

![image-20230801102712104](images/image-20230801102712104.png)

### throws

![image-20230801103257077](images/image-20230801103257077.png)

**抛出异常，让调用f1方法的调用者（方法）处理**

或者这么写也可以

![image-20230801103347815](images/image-20230801103347815.png)

运行异常程序中如果没有处理那么默认throws出去

#### throws父子类异常

![image-20230801103629498](images/image-20230801103629498.png)

**子类异常必须为父类异常子类型或相同类型**

#### 同类中调用其他方法throws出的==编译==异常

![image-20230801103923118](images/image-20230801103923118.png)

此时编译无法通过，需要在f1方法也进行异常处理

![image-20230801104001248](images/image-20230801104001248.png)

或者

<img src="images/image-20230801104019834.png" alt="image-20230801104019834" style="zoom:67%;" />

**特别注意，如果方法抛出的是运行异常，则不需要如此处理**

![image-20230801104223013](images/image-20230801104223013.png)

## 自定义异常

**自定义异常类名，继承Exception(编译异常)或RunTimeException(运行异常)**

![image-20230801104534487](images/image-20230801104534487.png)

**一般我们都继承RunTimeException**

### 例题：

![image-20230801110020896](images/image-20230801110020896.png)

**finally优先于throw return等**

## throw和throws的对比

![image-20230801110226874](images/image-20230801110226874.png)

# 第十三章 常用类

## 包装类 Wrapper

<img src="images/image-20230801110818310.png" alt="image-20230801110818310" style="zoom:67%;" />.

黄色的都对应如下图

<img src="images/image-20230801111126856.png" alt="image-20230801111126856" style="zoom: 67%;" />

### 包装类和基本数据类型的转换

例：int <=> Integer

![image-20230801111335215](images/image-20230801111335215.png)

#### int => Integer  (JDK5以后，底层使用valueOf方法)

```java
int i = 10;
Integer m = i;
```

#### Integer => int   (JDK5以后，底层使用intValue方法)  

```java
Integer n = new Integer(99);
int n2 = n;
```

<img src="images/image-20230801111726883.png" alt="image-20230801111726883" style="zoom:67%;" />

#### 例题：

#### **三元运算符要看做一个整体**

精度最高的是Double 所以结果是1.0

![image-20230801112149650](images/image-20230801112149650.png)

<img src="images/image-20230801112301225.png" alt="image-20230801112301225" style="zoom:67%;" />

### 包装类型和String类型的转换

<img src="images/image-20230801112442288.png" alt="image-20230801112442288" style="zoom:67%;" />

​									Integer j3 = Integer.parseInt(s3);

### Integer类和Character类的常用方法

![image-20230801112827746](images/image-20230801112827746.png)

### Integer类例题

![image-20230801113348074](images/image-20230801113348074.png)

![image-20230801113141018](images/image-20230801113141018.png)

![image-20230801113245880](images/image-20230801113245880.png)

==**只要有基本数据类型，判断的就是值是否相等**==

<img src="images/image-20230801113535188.png" alt="image-20230801113535188"  />

## String

### String结构及原理（内存分布图）

![image-20230801113840382](images/image-20230801113840382.png)

串行化：可以在网络上传输

![image-20230801114129292](images/image-20230801114129292.png)

<img src="images/image-20230801114427691.png" alt="image-20230801114427691" style="zoom:67%;" />

#### 例题1：

![image-20230801114816522](images/image-20230801114816522.png)

**intern指向常量池，返回池的地址**

![image-20230801114921828](images/image-20230801114921828.png)

<img src="images/image-20230801114913800.png" alt="image-20230801114913800" style="zoom:67%;" />

#### 例题2：

![image-20230801115309448](images/image-20230801115309448.png)

<img src="images/image-20230801115343237.png" alt="image-20230801115343237" style="zoom:80%;" />

<img src="images/image-20230801115357148.png" alt="image-20230801115357148" style="zoom:80%;" />

#### 例题3：

![image-20230801214137121](images/image-20230801214137121.png)

#### 例题4：

**c指向堆中的value数组**

![image-20230801214608062](images/image-20230801214608062.png)

#### 例题5：

<img src="images/image-20230801215146136.png" alt="image-20230801215146136"  />

**特别注意：final不能修改char数组的地址，而非内容**

#### **方法会新开一个栈**

new String("hsp") 指的堆中的value，是final的，只能重新在池中开一个Java，并指向它

![image-20230801215747295](images/image-20230801215747295.png)

### String类的常见方法

![image-20230803140300368](images/image-20230803140300368.png)

![image-20230803140545835](images/image-20230803140545835.png)

**不能用str[0]来获取字符，用charAt来取**

![image-20230803141020201](images/image-20230803141020201.png)

#### concat

![image-20230803141101958](images/image-20230803141101958.png)

**replace不会影响原字符串，返回拷贝**

#### split

![image-20230803141447694](images/image-20230803141447694.png)

#### compareTo

![image-20230803141901663](images/image-20230803141901663.png)

#### format

![image-20230803142022813](images/image-20230803142022813.png)

## StringBuffer

![image-20230803142335236](images/image-20230803142335236.png)

![image-20230803142541977](images/image-20230803142541977.png)

![image-20230803142943008](images/image-20230803142943008.png)

**特别注意：value数组不是final，所以存放在堆中**

#### String vs StringBuffer

![image-20230803142856347](images/image-20230803142856347.png)

#### 构造器

![image-20230803143303653](images/image-20230803143303653.png)

![image-20230803143626119](images/image-20230803143626119.png)

<img src="images/image-20230803143722621.png" alt="image-20230803143722621" style="zoom: 80%;" />

### 常用方法

<img src="images/image-20230803143837861.png" alt="image-20230803143837861" style="zoom:67%;" />

**删改都是左闭右开区间**

![image-20230803144512122](images/image-20230803144512122.png)

如果append null，将null转成字符串null

<img src="images/image-20230803144938261.png" alt="image-20230803144938261" style="zoom:67%;" />

![image-20230803145157302](images/image-20230803145157302.png)

如果new一个null的StringBuffer，那么会抛异常

![image-20230803145145307](images/image-20230803145145307.png)

## StringBuilder

![image-20230803145703315](images/image-20230803145703315.png)

**只能用于单线程！**

![image-20230803145851476](images/image-20230803145851476.png)

![image-20230803150404360](images/image-20230803150404360.png)

**单线程下使用，无线程安全，存放堆中**

#### String StringBulider StringBuffer的比较

![image-20230803151136129](images/image-20230803151136129.png)

**如果对String做大量修改，不要用String！**

## Math

<img src="images/image-20230803151656084.png" alt="image-20230803151656084" style="zoom:67%;" />

**Math.random() 返回[0, 1) 的随机数**

## Date、Calendar、LocalDate

<img src="images/image-20230803195720198.png" alt="image-20230803195720198" style="zoom:67%;" />

### 第一代日期类 Date

![image-20230803200028289](images/image-20230803200028289.png)

最后两行，将格式化的日期字符串转成Date

### 第二代日期类 Calendar

![image-20230803200755025](images/image-20230803200755025.png)

![image-20230803201056236](images/image-20230803201056236.png)

**不能new！只能用getInstance**

如果要改成24小时，要这么改 <img src="images/image-20230803201539621.png" alt="image-20230803201539621" style="zoom:67%;" />

### 第三代日期类

**LocalDate、LocalTime、LocalDateTime （JDK8加入）**

![image-20230803201704874](images/image-20230803201704874.png)

![image-20230803201922672](images/image-20230803201922672.png)

**同样不能用new**

![image-20230803202049142](images/image-20230803202049142.png)

<img src="images/image-20230803202059973.png" alt="image-20230803202059973" style="zoom:67%;" />

#### DateTimeFormatter格式日期

![image-20230803202147518](images/image-20230803202147518-16910653101862.png)

![image-20230803202307654](images/image-20230803202307654.png)

#### Instant 时间戳

<img src="images/image-20230803202355343.png" alt="image-20230803202355343" style="zoom:67%;" />

## System

### 常见方法

![image-20230803194308492](images/image-20230803194308492.png)

**一般是 System.exit(0)   0表示返回的状态**

#### arraycopy

![image-20230803194640486](images/image-20230803194640486.png)

## Arrays

![image-20230803151925000](images/image-20230803151925000.png)

<img src="images/image-20230803152001475.png" alt="image-20230803152001475" style="zoom:80%;" />

### toString

![image-20230803152407763](images/image-20230803152407763.png)

```java
sout(Arrays.toString(integers)); //out: [1, 20, 90]
```

### sort

![image-20230803153204481](images/image-20230803153204481.png)

<img src="images/image-20230803153156955.png" alt="image-20230803153156955" style="zoom:67%;" />

### binarySearch

要求数组有序，如果不存在该元素返回-1，如果没找到，返回

**-（应该在的位置+1）**

### copyOf

![image-20230803193033642](images/image-20230803193033642.png)

如果超出，则用null占位

### fill

![image-20230803193336371](images/image-20230803193336371.png)

### asList

![image-20230803193431907](images/image-20230803193431907.png)

## BigInteger、BigDecimal

![image-20230803194859753](images/image-20230803194859753.png)

![image-20230803195109021](images/image-20230803195109021.png)

**BigDecimal 的 divide可能会抛出异常（当除不尽陷入无限循环时）**

![image-20230803195522688](images/image-20230803195522688.png)

解决办法：指定精度即可  加上BigDecimal.ROUND_CEILING

![image-20230803195603047](images/image-20230803195603047.png)

# 第十四章 集合

## 集合框架体系

![image-20230804200211800](images/image-20230804200211800.png)

![image-20230804200310751](images/image-20230804200310751.png)

**集合主要分为单列集合（Collection）和双列集合(Map)**

## Collection

![image-20230804200753378](images/image-20230804200753378.png)

### List

**List都是有序的，可重复**

#### 接口方法

**add**，addAll同理

![image-20230804205550761](images/image-20230804205550761.png)

indexOf lastIndexOf remove set **subList(返回子集合，左闭右开)**

![image-20230804205835719](images/image-20230804205835719.png)

#### 遍历：

##### **iterator迭代器**

<img src="images/image-20230804203030909.png" alt="image-20230804203030909" style="zoom:67%;" />

<img src="images/image-20230804204010799.png" alt="image-20230804204010799" style="zoom:67%;" />

快捷键：**itit**补全

当退出while循环后，迭代器指向最后的元素，再调用next会报错

如果想再次遍历，要重置迭代器 **`iterator = col.iterator();`**

##### **增强for循环遍历**   **快捷键  I 大写的i补全**

<img src="images/image-20230804204443484.png" alt="image-20230804204443484" style="zoom:67%;" />

##### 普通for + get()

**get可以获取对应位置的某个元素  `sout(list.get(4));`**

#### ArrayList

**添加的元素本质是Object而不是基本数据类型了**

```java
List list = new ArrayList();
list.add("jack");
list.add(10);
list.add(true);
sout(list); //out:[jack, 10, true]
list.remove(0);  //out: [10, true];
lsit.remove("jack");
sout(list.contains("jack"));
sout(list.size()); //out:2
sout(lsit.isEmpty());
list.clear(); 
ArrayList list2 = new ArrayList();
list2.add("1313");
list2.add("adad");
list.addAll(list2);  //添加多个元素
list.containsAll(list2);
removeAll(list2);
```

<img src="images/image-20230804202529051.png" alt="image-20230804202529051" style="zoom:67%;" />

##### 注意事项

可以放null，ArrayList基本等同于Vector，**ArrayList是线程不安全的，但效率高**

在多线程情况下，不建议使用ArrayList

##### 扩容机制

![image-20230805131635936](images/image-20230805131635936.png)

**transient  表示该属性不会被序列化**

#### LinkedList

<img src="images/image-20230805134041677.png" alt="image-20230805134041677" style="zoom:67%;" />

##### 底层

![image-20230805134231307](images/image-20230805134231307.png)

<img src="images/image-20230805134655704.png" alt="image-20230805134655704" style="zoom:67%;" />

<img src="images/image-20230805134829970.png" alt="image-20230805134829970" style="zoom: 67%;" />

<img src="images/image-20230805134936130.png" alt="image-20230805134936130" style="zoom:67%;" />

##### LinkedList增删改查

<img src="images/image-20230805135111721.png" alt="image-20230805135111721" style="zoom: 80%;" />

<img src="images/image-20230805135544894.png" alt="image-20230805135544894" style="zoom:67%;" />

#### Vector

![image-20230805133422756](images/image-20230805133422756.png)

##### 和ArrayList比较

![image-20230805133605859](images/image-20230805133605859.png)

### Set

<img src="images/image-20230805135642718.png" alt="image-20230805135642718" style="zoom:67%;" />

![image-20230805135826624](images/image-20230805135826624.png)

**特别注意：不能用索引方式遍历**

<img src="images/image-20230805140542541.png" alt="image-20230805140542541" style="zoom: 80%;" />

![image-20230805140555544](images/image-20230805140555544.png)

**添加数据顺序和结果数据顺序不一定一样**

#### HashSet

实际上是HashMap

<img src="images/image-20230805141338873.png" alt="image-20230805141338873" style="zoom:67%;" />

###### 例题：

<img src="images/image-20230805141549927.png" alt="image-20230805141549927" style="zoom:67%;" />

![image-20230805141534659](images/image-20230805141534659.png)

![image-20230805141643550](images/image-20230805141643550.png)

HashMap**底层是数据+链表+红黑树**

##### **（！！非常重要！！）HashSet底层**

<img src="images/image-20230805143111946.png" alt="image-20230805143111946" style="zoom:80%;" />

<img src="images/image-20230805144128642.png" alt="image-20230805144128642" style="zoom:67%;" />

**即底层先调用hashCode()方法进行比较，如果该位置没元素，放进去，有元素，要用equals循环判断，如果相等，则不添加，不相等，加入链表尾部**

##### 重写底层比较方法

<img src="images/image-20230805144902937.png" alt="image-20230805144902937" style="zoom:80%;" />

![image-20230805144931100](images/image-20230805144931100.png)

![image-20230805144948872](images/image-20230805144948872.png)

![image-20230805145005112](images/image-20230805145005112.png)

#### LinkedHashSet

是HashSet的子类，底层是LinkedHashMap，维护了一个数组+双向链表

![image-20230805192710801](images/image-20230805192710801.png)

![image-20230805201604155](images/image-20230805201604155.png)

**保证有序，也可重写equals和hashCode方法来判断是否重复**

#### TreeSet

**可以排序，底层还是TreeMap**

```java
TreeSet treeset = new TreeSet();
treeset.add("lanson");
```

<img src="images/image-20230806195203238.png" alt="image-20230806195203238" style="zoom:67%;" />

**可以用匿名内部类重写排序**

<img src="images/image-20230806195330186.png" alt="image-20230806195330186" style="zoom: 67%;" />

如果两个字符串相等，就不会加入treeset中，

同理，如果比较两个字符串长度，如果两个字符串长度一样，也不会加入进去

## Map

![image-20230805202034224](images/image-20230805202034224.png)

<img src="images/image-20230805202730303.png" alt="image-20230805202730303" style="zoom: 80%;" />

特别注意：这里**是 put 而不是 add，无序！**

**当有相同的key时，相当于替换**

**map.get(key)  传入key，返回对应的value**

### 底层：

![image-20230805203833285](images/image-20230805203833285.png)

一对 key value 放在HashMap的Node里，而后面的Set是引用，指向Node中的key，Collection也是引用，指向Node中的value

![image-20230805204104828](images/image-20230805204104828.png)

![image-20230805204822066](images/image-20230805204822066.png)

**单独获取key集合或value集合**

<img src="images/image-20230805205216846.png" alt="image-20230805205216846" style="zoom:80%;" />

### map常用方法

<img src="images/image-20230805205332687.png" alt="image-20230805205332687" style="zoom:80%;" />

### 遍历方法

<img src="images/image-20230805210702756.png" alt="image-20230805210702756" style="zoom: 67%;" />

<img src="images/image-20230805210825393.png" alt="image-20230805210825393" style="zoom:67%;" />

![image-20230805211153213](images/image-20230805211153213.png)

![image-20230805211203998](images/image-20230805211203998.png)

### 底层

![image-20230805213057433](images/image-20230805213057433.png)

**每个键值对都是一个HashMapNode，而HMN又实现了MapEntry这个接口**

**扩容机制和HashSet一模一样**

### HashMap

没有实现同步，线程不安全

### Hashtable

**键值对都不能是null**

**线程安全**

### LinkedHashMap

### TreeMap

<img src="images/image-20230806200029575.png" alt="image-20230806200029575" style="zoom:67%;" />

![image-20230806200037833](images/image-20230806200037833.png)

**和TreeSet同理，只不过按key顺序排序**

### Properties

![image-20230805214855255](images/image-20230805214855255.png)

<img src="images/image-20230805215807963.png" alt="image-20230805215807963" style="zoom:67%;" />

**键值都不可以为空**

```java
sout(properties.get("lic")); //out:88
sout(properties.put("lic", 150));
```

## 如何选择集合实现类？

![image-20230805224946632](images/image-20230805224946632.png)

## Collections工具类

![image-20230807135338470](images/image-20230807135338470.png)

<img src="images/image-20230807135535349.png" alt="image-20230807135535349" style="zoom:67%;" />

![image-20230807135950462](images/image-20230807135950462.png)

### copy注意事项

**不能直接`Collections.copy(dest, list);`，会抛异常**

**原因：要保证list的长度小于等于dest的长度**

所以先将dest赋初值

![image-20230807141001649](images/image-20230807141001649.png)

# 第十五章 泛型

**使用泛型，放入和取出时不需要类型转换，提高效率**

## 语法

特别注意：**这里的E只能是引用类型，不能是基本数据类型**

<img src="images/image-20230807150341473.png" alt="image-20230807150341473" style="zoom:67%;" />

E可以是String Integer Double等等

![image-20230807151022488](images/image-20230807151022488.png)

![image-20230807151344932](images/image-20230807151344932.png)

![image-20230807151952350](images/image-20230807151952350.png)

### 简写

![image-20230807152144495](images/image-20230807152144495.png)

如果不加泛型，默认加\<Object>

![image-20230807152546946](images/image-20230807152546946.png)

### entrySet迭代器遍历

**不需要向下转型了**

![image-20230807151603924](images/image-20230807151603924.png)

## 自定义泛型

<img src="images/image-20230807205622633.png" alt="image-20230807205622633" style="zoom: 80%;" />

### 注意事项

**普通成员可以使用泛型（属性，方法）**

**使用泛型的数组不能初始化**

![image-20230807210149779](images/image-20230807210149779.png)

**静态方法中不能使用类的泛型**

![image-20230807210254575](images/image-20230807210254575.png)

**因为在类加载时，对象还没创建**

**泛型类的类型是在创建对象时确定的**

如果在创建对象时，没有指定类型，默认为Object

![image-20230807205837185](images/image-20230807205837185.png)

![image-20230807210857195](images/image-20230807210857195.png)

### 自定义泛型接口

<img src="images/image-20230807212159622.png" alt="image-20230807212159622" style="zoom: 80%;" />

**静态成员也不可以使用泛型，接口类型在继承接口或实现接口时确定**

<img src="images/image-20230807212453507.png" alt="image-20230807212453507" style="zoom:67%;" />

**接口成员都是final static的，所以会报错**

![image-20230807212551057](images/image-20230807212551057.png)

**alt+enter快速生成**

![image-20230807212748320](images/image-20230807212748320.png)

![image-20230807213007246](images/image-20230807213007246.png)

### 自定义泛型方法

![image-20230807214438273](images/image-20230807214438273.png)

#### 注意事项

**泛型方法可以定义在普通类中，也可以定义在泛型类中**

![image-20230807214745974](images/image-20230807214745974.png)

<img src="images/image-20230807214849092.png" alt="image-20230807214849092" style="zoom: 80%;" />

**当泛型方法被调用时，类型会被确定**

![image-20230807215152184](images/image-20230807215152184.png)

**public void eat(E e){} 修饰符后没有<T, R...> eat方法不是泛型方法，只是使用了泛型**

**泛型方法可以使用类声明的泛型，也可以使用自己声明的泛型**

<img src="images/image-20230807215337475.png" alt="image-20230807215337475" style="zoom: 67%;" />

## 泛型继承和通配符

**泛型不具备继承性**

![image-20230807220424257](images/image-20230807220424257.png)

![image-20230807220545354](images/image-20230807220545354.png)

<img src="images/image-20230807220604215.png" alt="image-20230807220604215" style="zoom:67%;" />

# 第十六章 坦克大战

## java绘图坐标体系

## java绘图技术

## java事件处理机制

