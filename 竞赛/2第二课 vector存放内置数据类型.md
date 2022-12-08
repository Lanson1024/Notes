# vector存放数据类型

### 存放内置数据类型

容器：`vector`

算法：`for_each`

迭代器：`vector<int>::iterator`

**容器名.end()** 指向容器中最后一个元素的==**下一个位置**==

for_each() 需引入头文件algorithm

```c++
void func(int a){
	cout << a;
}
int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	vector<int>::iterator itBegin = v.begin();
	vector<int>::iterator itEnd = v.end();
	while(itBegin != itEnd){
		cout << *itBegin;
		itBegin++;
	}
    for_each(v.begin(),v.end(),func);
}
```

### 存放自定义数据类型

```c++
class person{
public:
    person(string name, int age){
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
    
};
int main(){
    person p1("Lanson", 18);
    person p2("yl", 18);
    vector<person> p;
    p.push_back(p1);
    p.push_back(p2);
    for(vector<person>::iterator it = v.begin(); it != v.end(); it++){
        cout << (*it).m_age << (*it).m_name;
        cout << it->m_name << it->m_age;
    }
}
```

### 存放指针

```c++
class person{
public:
    person(string name, int age){
        m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};
int main(){
    person p1("Lanson", 18);
    person p2("yl", 18);
    vector<person*> p;
    p.push_back(&p1);
    p.push_back(&p2);
    for(vector<person*>::iterator it = v.begin(); it != v.end(); it++){
        cout << (*it)->m_age << (*it)->m_name;
    }
}
```

