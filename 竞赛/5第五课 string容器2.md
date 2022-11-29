# string容器2

### string字符串拼接

`string &operator+=(const char* str);`		重载+=操作符

`string &operator+=(const char c);`		重载+=操作符

`string &operator+=(const string &str);`		重载+=操作符

`string &append(const char *s)`		把字符串s连接到当前字符串结尾

`string &append(const char *s， int n)`	把字符串的前n个字符连接到当前字符串结尾

`string &append(const string &s)`	

`string &append(const string &s, int pos, int n)`	从pos开始的n个字符连接到字符串末尾

```c++
void test01(){
    string str1 = "我";
    str1 += "爱玩游戏";
}
```

### string查找和替换

### 查找

```c++
void test01(){
    string str1 = "abcdefg";
    cout << str1.find("de"); //output；3
}
```

**若匹配无结果，则返回-1**

##### find和rfind区别

**find从左往右查找，rfind从右往左查找**

### 替换

```c++
void test02(){
    string str2 = "HelloWorld";
    str2.replace(1, 3, "1111");//从1号位置起，替换3个元素，替换为1111  output:  H1111oWorld
}
```

如果替换元素个数小于要替换的字符串长度，那以要替换的字符串长度为准

### 比较

**str1.compare(str2);**

按ASCII码值进行比较

**=   返回0  	 >  返回1  		<  返回-1**

```c++
void test01(){
    string str1 = "HelloWorld";
    string str2 = "HelloWorld";
    if(str1.compare(str2) == 0){
        //相等
    }
}
```

### 字符读取

```c+
str1[i];
str1.at(i);
```

### 插入和删除

**`str.insert(1, "111");`**

**`str.erase(开始位置,删除数);`**

### string字串

**substr(起始位置，个数);**

```c++
string str = "HelloWorld";
string str2 = str.substr(1, 3); //ell
```

