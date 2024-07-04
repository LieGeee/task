##  string 类

#### 	构造函数	

```c++
string(const char *s)://将string对象初始化为s指向的字符串
	string str("hello");

string(size_type n,char c)://创建一个包含n哥元素的string对象,其中每个元素都没初始化成字符c
	string str(10,'a');

string(const string &str)://将一个string对象初始化为string对象str(复制构造函数)
	string str1("hello!");
	string str2(str1);
//string类的设计允许程序自动调整string的大小,当创建长度为0,写入时会自动调节
	
string():创建一个默认的string对象,长度为0
	string str;
	
```

### 字符串操作

- ##### 获取string对象的长度:

  ```c++
  s.size()==s.length() ;//返回字符个数
  	//length是c语言风格
  	//size是为了兼容stl
  ```

- ##### 拼接和附加

  ```c++
  str1.append(str2);  //添加串
  str1.push_back('c'); // 添加字符
  ```

- ##### 比较

  ```c++
  str1.compare(str1要比较的起始位置,str1要比较的结束位置,str2(要比较的函数,str2要比较的起始位置,str2要比较的结束位置);
  ```

- ##### 查找

  ```c++
  //npos -1
  //若不指定pos的值,则默认从索引0处开始
  size_type find(const string& str,size_type pos=0) const; //查找字符串str,如果找到,则返回该字符串首次出现时首字符的索引
  
  size_type find(const char *s,size_type pos=0) const;//同上,不过使用指针类型
  
  
  
  size_type find(const char *s,size_type pos.size_type n); const;//查找s的前n个字符组成的字符串.如果找到,则返回该字符串首次出现时其首字符的索引
  
  size_type find(char ch,size_type pos=0); const;//查找字符ch.如果找到,则返回该字符首次出现的位置;
  ```

- ##### 其他查找

  ```c++
  str.rfind("ch");//查找最后一个ch出现的位置
  
  str.find_frist_of();//查找参数中任意一个字符首次出现的位置.
  
  str.find_last_of();//查找参数中任意一个字符最后一次出现的位置
  
  str.find_frist_not_of();//查找参数中第一个不包含在参数的字符
  
  str.find_last_not_of();// 类似同上
  ```

  

- ##### 获取子字符串

  ```c++
  string a=str.substr(起始位置,截取的长度); // 得到新字符串,原字符串的起始位置到终止位置
  
  ```

- ##### 访问字符串的元素

  ```c++
  str.at(1);
  ```

- ##### 插入

  ```c++
  s1.insert(1,"123");
  s1.insert(1,"123456",2,3);//参数从2的位置开始往后数3个插入
  s1.insert(1,"123456",2);//插入参数前2个
  s1.insert(1,10,"z");//在1的位置插入10个z
  ```

- 字符串转化为数字

  ```c++
   num= stoi(str);
  ```

- 删除

  ![image-20230921205352702](C:\Users\leizh\AppData\Roaming\Typora\typora-user-images\image-20230921205352702.png)

- replace

![image-20230921205559665](C:\Users\leizh\AppData\Roaming\Typora\typora-user-images\image-20230921205559665.png)

