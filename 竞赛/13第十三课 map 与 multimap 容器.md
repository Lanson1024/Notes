# map 与 multimap 容器

map 中所有元素**都是pair**

pair中第一个元素为key(键值)，起索引作用，第二个元素为value(实值)

**高效率 高性能**

所有元素都会**根据元素的键值==key==自动排序**

本质属于关联式容器，底层使用二叉树

优点：可以根据key值快速找到value值

map 和 multimap 与之前一样，**是否允许有重复的==key值==**，**value值可重复**

## 构造

map<int, string> m;

拷贝构造

## 赋值

重载=

## 插入和删除

insert(elem)

```c++
m.insert(pair<int, int>(1, 10));
m.insert(pair<int, int>(2, 100));
m.insert(pair<int, int>(3, 1000));
for(map<int, int>::iterator it = m.begin(); it != m.end(); it++){
    cout << (*it).first << it -> second;
}
```

**匿名对组**

**四种插入方法**

```c++
m.insert(pair<int, int>(1, 100));
m.insert(make_pair(2, 200));
m.insert(map<int, int>::value_type(3, 300));
m[4] = 40;  //不建议！！！
cout << m[5];  //key为5  value为0
```

**[]不建议插入，但可以利用key访问到value**

若没有对应的key值，**会自动创建 key, 0 的对组**（value = 0）

clear()

erase(pos)

erase(begin, end)

erase(key)	**删除值为key的元素**

## 大小和交换

size()

empty()

swap()

## 查找和统计

find(key)	查找key是否存在，若存在，返回该键的元素的迭代器，若不存在，返回set.end()

```c++
map<int, int> m;
map<int, int>::iterator pos = m.find(key);
if(pos != m.end()){
    cout << "查到了元素" << (*it)first << it -> second;
}
```

count(key)	统计key的元素个数  **map容器中，不是 0 就是 1**

## 排序

map会默认**按key的值**从小到大**升序**排序

**仿函数**改变排序规则

```c++
class Mycompare{
public:
    bool operator()(int v1, int v2){
        return v1 > v2;
    }
};
map<int, int, Mycompare> m;
```

