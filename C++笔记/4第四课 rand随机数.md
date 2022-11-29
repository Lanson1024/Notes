# rand随机数

==rand() % 100==  生成**0 - 99的随机数**

但==每次随机数都一样==

### 添加随机数种子

**利用当前系统时间生产随机数**，防止每次随机数都一样

**srand**

```c++
#include <ctime>
srand((unsigned int)time(NULL));
```

