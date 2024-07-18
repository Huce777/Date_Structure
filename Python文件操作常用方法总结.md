# Python文件操作常用方法总结

## 一. 文件操作的作用

总结：文件操作的作用就是把一些内容(数据)存储存放起来，可以让程序下一次执行的时候直接使用，而不必重新制作一份，省时省力。

## 二. 文件的基本操作

### 2.1 文件操作步骤

1. 打开文件
2. 读写等操作
3. 关闭文件

注意：可以只打开和关闭文件，不进行任何读写操作。

#### 2.1.1 打开

在python，使用open函数，可以打开一个已经存在的文件，或者创建一个新文件，语法如下：

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image002.png)

name：是要打开的目标文件名的字符串(可以包含文件所在的具体路径)。

mode：设置打开文件的模式(访问模式)：只读、写入、追加等。

##### 2.1.1.1 打开文件模式

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image004.png)

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image006.png)

##### 2.1.1.2 快速体验

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image008.png)

注意：此时的`f`是`open`函数的文件对象。

#### 2.1.2 文件对象方法

###### 2.1.2.1 写

·    语法

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image010.png)

###### 2.1.2.2 读

·    read()

 

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image012.png)

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image014.png)

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image016.png)

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image018.png)

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image020.png)

2. 规划备份文件名

2.1 提取目标文件后缀

2.2 组织备份的文件名，xx[备份]后缀

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image022.png)

3. 备份文件写入数据

3.1 打开源文件 和 备份文件

3.2 将源文件数据写入备份文件

3.3 关闭文件

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image024.png)

### 3.3 思考

如果用户输入`.txt`，这是一个无效文件，程序如何更改才能限制只有有效的文件名才能备份？

答：添加条件判断即可。

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image026.png)

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image028.png)

## 四. 文件和文件夹的操作

在Python中文件和文件夹的操作要借助os模块里面的相关功能，具体步骤如下：

1. 导入os模块

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image030.png)

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image032.png)

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image034.png)

## 五.应用案例

需求：批量修改文件名，既可添加指定字符串，又能删除指定字符串。

·    步骤

1. 设置添加删除字符串的的标识
2. 获取指定目录的所有文件
3. 将原有文件名添加/删除指定字符串，构造新名字
4. os.rename()重命名

·    代码

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image036.png)

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image038.png)

![img](file:///C:/Users/ASUS/AppData/Local/Temp/msohtmlclip1/01/clip_image040.png)