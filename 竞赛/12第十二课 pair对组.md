# pair对组

set容器在插入数据时，会返回是否插入成功

```c++
set<int> s;
pair<set<int>::iterator, bool> result = s.insert(10);
if(result.second)
    cout << "插入成功";
```

### 创建

**返回两个数据，利用对组**

pair<type, type> p (value1, value2)

pair<type, type> p = make_pair(value1, value2);

```c++
pair<string, int> p ("Lanson", 18);
cout << p.first << p.second;
```

