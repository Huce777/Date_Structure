## 		***Python编程基础***

##### ***项目集合***

01 ：《学生信息管理软件》
02 ：《酒店管理系统设计》
03 ：《CRM汽车销售管理》
04 ：《天气预报系统设计》
05 ：《俄罗斯方块游戏》
06 ：《飞机大战设计游戏》
07 ：《五子棋经典游戏》
08 ：《局域网聊天室系统》
09 ：《汽车3D中控仪表盘》
10 ：《Qt时间服务器架构》
11 ：《TCP_UDP编程实战》
12 ：《迷你版QQ聊天软件》
13 ：《MP3播放器搜索引擎》
14 ：《Qt网络编程客户端项目》
15 ：《Android电池充电架构》
16 ：《腾讯QQ图像剪切技术》

##### ***时程安排***

第一周：熟悉Python
第一天：基本概念（4 小时）：print，变量，输入，条件语句
第二天：基本概念（5 小时）：列表，for 循环，while 循环，函数，导入模块
第三天：简单编程问题（5 小时）：交换两个变量值，将摄氏度转换为华氏温度，求数字中各位数之和，判断某数是否为素数，生成随机数，删除列表中的重复项等等
第四天：中级编程问题（6 小时）：反转一个字符串（回文检测），计算最大公约数，合并两个有序数组，猜数字游戏，计算年龄等等
第五天：数据结构（6 小时）：栈，队列，字典，元组，树，链表。
第六天：面向对象编程（OOP）（6 小时）：对象，类，方法和构造函数，面向对象编程之继承
第七天：算法（6 小时）：搜索（线性和二分查找）、排序（冒泡排序、选择排序）、递归函数（阶乘、斐波那契数列）、时间复杂度（线性、二次和常量）

第二周：
软件开发第一天：熟悉一种 IDE （5 小时）：IDE是你在编写大型项目时的操作环境，所以你需要精通一个IDE。在软件开发的初期，我建议你在VS code中安装Python扩展或使用Jupyter notebook.
第二天：Github（6 小时）：探索 Github，并创建一个代码仓库。尝试提交（Commit）、查看变（Diff）和上推（Push）你的代码。另外，还要学习如何利用分支工作，如何合并（merge）不同分支以及如何在一个项目中创建拉取请求（pullrequest）。
第三天：第一个项目—简单计算器（4 小时）：熟悉 Tkinter，创建一个简单的计算器
第四、五、六天：个人项目（每天 5 小时）：选定一个项目并完成它。如果你不知道你该做什么，可以查看下面的清单
第七天：托管项目（5 小时）：学习使用服务器和 hosting 服务来托管你的项目。创建一个 Heroku 设置并部署你构建的应用程序。

第三周：
成为程序员第一天：数据库基础（6 小时）：基本 SQL 查询（创建表、选择、Where 查询、更新）、SQL 函数（Avg、Max、Count）、关系数据库（规范化）、内连接、外连接等
第二天：使用 Python 数据库（5 小时）：利用一种数据库框架（SQLite 或 panda），连接到一个数据库，在多个表中创建并插入数据，再从表中读取数据。
第三天：API（5 小时）如何调用 API。学习 JSON、微服务（micro-service）以及表现层应用程序转换应用程序接口（Rest API)。第四天：Numpy（4 小时）：熟悉 Numpy
第五、六天：作品集网站（一天 5 小时）：学习 Django，,使用 Django 构建一个作品集网站,也要了解一下 Flask 框架。
第七天：单元测试、日志、调试（5 小时）：学习单元测试（PyTest），如何设置和查看日志，以及使用断点调试。

第四周：
认真考虑工作第一天：准备简历（5 小时）：制作一份一页的简历。把你的技能总结放在最上面，必须在写项目的同时附上 Github 链接。
第二天：作品集网站（6 小时）写几个博客，将它们添加到你之前开发的作品集网站中。
第三天：LinkedIn 简介（4 小时）：创建一个 LinkedIn 个人简介，把简历上的所有内容都放到 Linkedin上。
第四天：面试准备（7 小时）：准备一些谷歌常见的面试问题，练习白皮书中的 10个面试编程问题。在GlassdoorCareercup等网站中查看前人遇到的面试问题。
第五天：社交（~小时）：走出房门，开始参加聚会、招聘会，与其他开发人员和招聘人员见面。
第六天：工作申请（~小时）：搜索「Python Job」，查看 LinkedIn Job 和本地求职网站。
第七天：在拒绝中学习（~小时）

#### *例题*

1.财务部门在文本文件里保存了所有员工在每个工资周期里的信息列表。文件中每一行的格式如下:
<last name> <hourly wage> <hours worked>
请编写一个程序，让用户可以输入文件的名称，并在终端上打印出给定时间内支付给每个员工的工资报告。这个报告是一个有合适标题的表,其中每行都应该包含员工的姓名工作时长以及给定时间内所支付的工资。

```python
def calculate_pay(last_name,hourly_wage,hours_worked):
    return hourly_wage * hours_worked

def print_pay_report(filename):
    #打印工资报告的函数
    try:
        with open(filename,'r') as file:
            print("工资报告：")
            print("-"*30)
            print(f"{'姓名':<15}{'工作时长':<10}{'支付工资':<10}")
            print("-"*30)
            
            for line in file:
                parts = line.strip().split()
  #将当前行去除首尾空白字符后，使用空格作为分隔符分割字符串。
  # strip() 这是一个字符串方法，用于移除字符串
  #     首尾的空白字符，包括空格、制表符、换行符等。
  # split() 这也是一个字符串方法，用于将字符串分割成一个列表。默认情况下，
  #     .split()会根据任意的空白字符（空格、制表符、换行符等）来分割字符串。
  #     这意味着如果一行文本中的字段是通过空格分隔的，.split()会将这些字段分割成列表的元素。
                if len(parts) ==3:
                    last_name,hourly_wage,hours_worked = parts
                    pay = calculate_pay(last_name, float(hourly_wage),float(hours_worked))
                    print(f"{last_name:<15}{hours_worked:<10}{pay:<10.2f}")
                else:
                    print("文件格式错误，每行应包含三个字段。")
    except FileNotFoundError:
        print(f"文件 {filename} 未找到。")
    except Exception as e:
        print(f"发生错误：{e}")
        
def main():
    #主函数，获取用户的输入并打印工资报告
    filename = input("请输入文件名:")
    print_pay_report(filename)
    
if __name__=="__main__":
    main()
    
```

```
请输入文件名:employees.txt
工资报告：
------------------------------
姓名             工作时长      支付工资      
------------------------------
Smith          40        800.00    
Johnson        20        600.00    
Williams       30        750.00    
```

*注意：输入文件 employees.txt 要与代码文件在同一个文件夹下*

2.统计学家希望使用一组函数计算数字列表的 **中位数(median)** 和 **众数(mode)**。中位是指如果对列表进行排序将会出现在列表中点的数字，众数是指列表中最常出现的字。把这些功能定义在名叫 stats.py的模块中。除此之外，模块还应该包含一个名叫 mean 的函数，用来计算一组数字的平均值。每个函数都会接收一个数字列表作为参数并返回一个数字。

- 求均值和中位数均可以使用numpy库的方法：

- ```
  import numpy as np
   
  #均值
  np.mean(nums)
  #中位数
  np.median(nums)
  
  ```

  - 求众数方法一：

  在numpy中没有直接的方法，但是也可以这样实现：

  ```
  import numpy as np
   
  counts = np.bincount(nums)
  #返回众数
  np.argmax(counts)
  ```

    其中 np.bincount 方法返回了一个长度为 nums最大值的列表，列表中的每个值代表其索引位数值出现在nums中的次数，例如
  返回[2,1,0]，代表0在nums中出现2次，而1在nums中出现1次，3在nums中没有出现。

      然后再使用np.argmax就能得到众数啦。但是，由于索引值是从0开始的，所以这种求众数的方法只能用在非负数据集。
  - 求众数方法二——直接利用scipy下stats模块【推荐】：

  - ```python
    from scipy import stats
     
    stats.mode(nums)[0][0]
    ```

    

3.编写程序，让用户可以浏览文件里的文本行。这个程序会提示用户输入文件名，然后把文本行都输入列表。接下来，这个程序会进入一个循环，在这个循环里打印出文件的总行数，并提示用户输入行号。这个行号的范围应当是1到文件的总行数。如果输入是0那么程序退出;否则，程序将打印出行号所对应的文本行。

```python
def read_lines_from_file(filename):
    """从文件中读取所有行到列表"""
    try:
        with open(filename,'r') as file:
            return file.readlines()
    """file.readlines()是一个文件对象的方法，它读取
    整个文件的内容，并将其作为字符串列表返回。"""
    except FileNotFoundError:
        print(f"文件{filename}未找到，请确保文件路径正确")
        return []
    
def display_line(lines, line_number):
    """打印指定行号的文本行"""
    if 1 <= line_number <= len(lines):
        print(lines[line_number - 1].strip())  # 使用strip()去除可能的换行符
    else:
        print("输入的行号超出范围，请重新输入。")
        
def main():
    print("请输入文件名（包括扩展名）：")
    filename = input()
    lines = read_lines_from_file(filename)
    if not lines:
        return  # 如果文件为空或未找到，退出程序

    while True:
        print(f"文件共有 {len(lines)} 行。")
        print("请输入要查看的行号（输入0退出）：")
        line_number = input()

        if line_number == '0':
            break  # 如果输入0，退出循环

        try:
            line_number = int(line_number)  # 尝试将输入转换为整数
            display_line(lines, line_number)
        except ValueError:
            print("请输入有效的数字。")
if __name__=="__main__":
    main()
```

4.有一个简单的课程管理系统，它通过使用名字和一组考试分数来模拟学生的信息。这个系统应该能够创建一个具有给定名字和分数(起初均为0)的学生对象。系统应该能够访问和替换指定位置处的分数(从0开始计数)、得到学生有多少次考试、得到的最高分、得到的平均分以及学生的姓名。除此之外，在打印学生对象的时候，应该像下面这样显示学生的姓名和分数:
Name :  Ken Lambert

Score 1 : 88

Score 2 : 7

Score 3 : 100
请定义一个支持这些功能和行为的 Student 类，并且编写一个创建 Student 对象并运行其方法的简短的测试函数。

```
class Student:
    def __init__(self, name):
        self.name = name
        self.scores = []

    def add_score(self, score):
        """添加一个分数到成绩列表"""
        self.scores.append(score)

    def get_score(self, index):
        """获取指定位置的分数"""
        return self.scores[index]

    def set_score(self, index, score):
        """设置指定位置的分数"""
        if 0 <= index < len(self.scores):
            self.scores[index] = score
        else:
            print("错误：索引超出范围。")

    def get_number_of_exams(self):
        """获取考试次数，即分数列表的长度"""
        return len(self.scores)

    def get_highest_score(self):
        """获取最高分"""
        return max(self.scores) if self.scores else None

    def get_average_score(self):
        """获取平均分"""
        return sum(self.scores) / len(self.scores) if self.scores else 0

    def __str__(self):
        """定义打印学生信息的方式"""
        result = f"Name: {self.name}\n"
        for i, score in enumerate(self.scores, start=1):
            result += f"Score {i}: {score}\n"
        return result

# 测试函数
def test_student():
    # 创建一个名为Ken Lambert的学生对象
    student = Student("Ken Lambert")
    
    # 添加一些分数
    student.add_score(88)
    student.add_score(7)
    student.add_score(100)
    
    # 打印学生信息
    print(student)
    
    # 访问和替换分数
    print("原始分数：", student.get_score(0))
    student.set_score(0, 90)
    print("替换后的分数：", student.get_score(0))
    
    # 获取考试次数、最高分和平均分
    print("考试次数：", student.get_number_of_exams())
    print("最高分：", student.get_highest_score())
    print("平均分：", student.get_average_score())

# 运行测试函数
test_student()
```

结果：

```
runfile('D:/Python/Python_Code/try/未命名2.py', wdir='D:/Python/Python_Code/try')
Name: Ken Lambert
Score 1: 88
Score 2: 7
Score 3: 100

原始分数： 88
替换后的分数： 90
考试次数： 3
最高分： 100
平均分： 65.66666666666667
```

