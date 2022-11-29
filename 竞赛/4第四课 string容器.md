# string容器

### 构造函数

string本质是一个**类**，类中封装了 char*

### string构造函数

原型：

string();		//创建一个空字符串 如string str;

string(const char * s);		//使用字符串s初始化

string(const string &str);	//使用一个string对象初始化另一个string对象

string(int n , char c);		//使用n个字符c初始化

```c++
void test01(){
    string s1;
    const char * str = "HelloWorld";
    string s2(str);
	string s3(s2); //拷贝构造
    string s4(10, 'a');
}
```

### 赋值

```c++
void test01(){
    string str1 = "HelloWorld";
    string str2;
    str2.assign("helloworld");
    string str3;
    str3.assign("hello C++", 5); //output:hello
    
}
```

assign("xxx", int n);  	//输出字符串的前n个字符
