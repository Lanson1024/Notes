# set/multiset  容器

### 所有元素都会在插入时自动被排序

二叉树实现

### set和multiset的区别

**set** ==不允许==容器中==有重复==的元素

**multiset** ==允许==容器中==有重复==的元素

### 构造

**set\<int> s**

**set(const set &s)**

### 赋值

重载=

### 插入和删除数据

**无push与pop front和back**

insert(elem)

clear()

erase(pos)	删除迭代器指向的元素，返回下一个元素的迭代器

erase(begin, end)	删除**[beg, end==）==**区间的所有元素，返回下一元素迭代器

erase(elem)		删除容器中值为elem的元素

```c++
set<int> s;
s.insert(10);
s.insert(40);
s.insert(20);
s.insert(30);
打印   10 20 30 40
而后将其改为
set<int> s;
s.insert(10);
s.insert(40);
s.insert(30);
s.insert(20);
s.insert(30);
打印还是 10 20 30 40
```

set容器不允许插入重复值

### 大小和交换

size()

**不允许resize()**

empty()

swap(set)

### 查找和统计

find(key)		//查找key是否存在，若存在则返回元素迭代器，若不存在，则返回

set.end()

```c++
set<int> s;
set<int>::iterator pos = s.find(10);
if(pos != s.end())
    cout << "找到元素：" << *pos;
```

count(key)  统计元素个数  **对于set容器，要么是0，要么是1**

## 排序

**利用仿函数**，改变排序规则

#### set存放内置数据类型

**默认从小到大**

若**指定排序规则为从大到小**

需**在插入数据之前**就让他从大到小排序

```c++
class Mycompare{
public:
    bool operator()(int v1, int v2){
        return v1 > v2;
    }
};
set<int, Myconmpare> s2;
s2.insert(10);
s2.insert(30);
s2.insert(40);
s2.insert(20);
for(set<int, Mycompare>::iterator it = s2.begin(); it != s2.end(); it++){
    cout << *it << " ";  //40 30 20 10
}
```

#### set存放自定义数据类型

==**需指定排序规则**==

```c++
class compareperson{
public:
    bool operator()(const person &p1, const person &p2){
        return p1.m_age > p2.m_age;
    }
};
class person{
public:
    person(string name, int age){
        this->m_name = name;
        this->m_age = age;
    }
    string m_name;
    int m_age;
    
};
void test01(){
    set<person, compareperson> s;
    person p1("张三", 24);
    person p2("李四", 28);
    person p3("王五", 25);
    person p4("老六", 21);
    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);
    for(set<person, compare>::iterator it = s.begin(); it= s.end();it++){
        cout << it->m_name << it->m_age;
    }
}
```

