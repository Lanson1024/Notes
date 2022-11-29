# goto 语句

### 跳转到标记的位置

```c++
int main(){
    cout<<"1"<<endl;
    goto FLAG;
    cout<<"2"<<endl;
    cout<<"3"<<endl;
    FLAG:   //此处是冒号：  不是分号;
    cout<<"4"<<endl;
}
```

==FLAG是冒号：==