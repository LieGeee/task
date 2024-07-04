# qt:

## 第一节

### 安装:

#### 	下载路径

​			Qt5.12下载网址: http://download.qt.io/archive/qt/5.12/5.12.2/

​			如果没有梯子.复制链接在迅雷下载

![image-20231116125215216](C:\Users\leizh\AppData\Roaming\Typora\typora-user-images\image-20231116125215216.png)



### 工程文件

### 入口文件:

```c++
#include "class_one.h"  //窗口头文件
    
#include <QApplication> //系统应用程序头文件


//程序的入口 argc :命令行变量的数量
//         	 argv:命令行具体的参数
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);		//a:应用程序对象 在qt中有且 仅有 一个
    class_one w;			//窗口对象
    w.show();				//窗口对象  默认不会显示 调							用show进行显示
    return a.exec();		//进入到消息循环(窗口不关)
}

```



## 		