### *python内置的高级函数*

### 1. `map(function, iterable, ...)`

`map()`函数接受一个函数和一个可迭代对象作为参数，将函数应用于可迭代对象的每个元素，并返回一个包含结果的迭代器。

```
# 将列表中的每个元素加1
numbers = [1, 2, 3, 4, 5]
result = map(lambda x: x + 1, numbers)
print(list(result))  # 输出 [2, 3, 4, 5, 6]

```

### 2. `filter(function, iterable)`

`filter()`函数接受一个函数和一个可迭代对象作为参数，将函数应用于可迭代对象的每个元素，并返回一个包含满足条件的元素的迭代器。

```
# 过滤出列表中的偶数
numbers = [1, 2, 3, 4, 5]
result = filter(lambda x: x % 2 == 0, numbers)
print(list(result))  # 输出 [2, 4]

```

### 3. `reduce(function, iterable[, initializer])`

`reduce()`函数接受一个函数和一个可迭代对象作为参数，递归地将函数应用于可迭代对象的元素，返回一个单一的结果值。

```
from functools import reduce

# 计算列表中所有元素的乘积
numbers = [1, 2, 3, 4, 5]
result = reduce(lambda x, y: x * y, numbers)
print(result)  # 输出 120

```

### 4. `sorted(iterable, key=None, reverse=False)`

`sorted()`函数接受一个可迭代对象作为参数，返回一个新的排好序的列表。可选参数`key`用于指定排序关键字函数，`reverse`用于指定是否降序排序。

```
# 对列表进行排序
fruits = ["apple", "banana", "cherry", "date"]
result = sorted(fruits)
print(result)  # 输出 ['apple', 'banana', 'cherry', 'date']

# 根据字符串长度进行排序
result = sorted(fruits, key=lambda x: len(x))
print(result)  # 输出 ['date', 'apple', 'banana', 'cherry']

# 降序排序
result = sorted(fruits, reverse=True)
print(result)  # 输出 ['date', 'cherry', 'banana', 'apple']

```

### 5. `zip(*iterables)`

`zip()`函数接受多个可迭代对象作为参数，返回一个包含元组的迭代器，每个元组包含来自各个可迭代对象的元素。

```
# 合并两个列表
names = ["Alice", "Bob", "Charlie"]
scores = [85, 92, 78]
result = zip(names, scores)
print(list(result))  # 输出 [('Alice', 85), ('Bob', 92), ('Charlie', 78)]

```

### 6. `enumerate(iterable, start=0)`

`enumerate()`函数接受一个可迭代对象作为参数，返回一个包含元组的迭代器，每个元组包含元素的索引和值。

```
# 枚举列表中的元素
fruits = ["apple", "banana", "cherry"]
result = enumerate(fruits)
print(list(result))  # 输出 [(0, 'apple'), (1, 'banana'), (2, 'cherry')]

```

### 7. `all(iterable)`

`all()`函数接受一个可迭代对象作为参数，如果可迭代对象的所有元素都为真，则返回`True`，否则返回`False`。

```
# 检查列表中的元素是否都大于0
numbers = [1, 2, 3, 4, 5]
result = all(x > 0 for x in numbers)
print(result)  # 输出 True

# 检查列表中的元素是否都为真
values = [True, True, False, True]
result = all(values)
print(result)  # 输出 False

```

### 8. `any(iterable)`

`any()`函数接受一个可迭代对象作为参数，如果可迭代对象的任何元素为真，则返回`True`，否则返回`False`。

```
# 检查列表中是否有元素大于10
numbers = [1, 2, 3, 4, 5]
result = any(x > 10 for x in numbers)
print(result)  # 输出 False

# 检查列表中是否有元素为真
values = [True, False, False, False]
result = any(values)
print(result)  # 输出 True

```

### 9. `max(iterable, *args, key=None, default=None)`

`max()`函数接受一个可迭代对象作为参数，返回可迭代对象中的最大元素。可选参数`key`用于指定比较的关键字函数，`default`用于指定可迭代对象为空时的默认返回值。

```
# 获取列表中的最大值
numbers = [1, 3, 2, 4, 5]
result = max(numbers)
print(result)  # 输出 5

# 根据字符串长度获取最长的字符串
fruits = ["apple", "banana", "cherry", "date"]
result = max(fruits, key=lambda x: len(x))
print(result)  # 输出 'banana'

# 设置默认返回值
result = max([], default="No elements")
print(result)  # 输出 'No elements'

```

### 10. `min(iterable, *args, key=None, default=None)`

`min()`函数接受一个可迭代对象作为参数，返回可迭代对象中的最小元素。可选参数`key`用于指定比较的关键字函数，`default`用于指定可迭代对象为空时的默认返回值。

```
# 获取列表中的最小值
numbers = [1, 3, 2, 4, 5]
result = min(numbers)
print(result)  # 输出 1

# 根据字符串长度获取最短的字符串
fruits = ["apple", "banana", "cherry", "date"]
result = min(fruits, key=lambda x: len(x))
print(result)  # 输出 'date'

# 设置默认返回值
result = min([], default="No elements")
print(result)  # 输出 'No elements'

```

### 11. `sum(iterable, start=0)`

`sum()`函数接受一个可迭代对象作为参数，返回可迭代对象中所有元素的总和。可选参数`start`用于指定总和的初始值。

```
# 计算列表中所有元素的总和
numbers = [1, 2, 3, 4, 5]
result = sum(numbers)
print(result)  # 输出 15

# 指定初始值并计算总和
result = sum(numbers, start=10)
print(result)  # 输出 25

```

### 12. `any(iterable)`

`any()`函数接受一个可迭代对象作为参数，如果可迭代对象的任何元素为真，则返回`True`，否则返回`False`。

```
# 检查列表中是否有元素大于10
numbers = [1, 2, 3, 4, 5]
result = any(x > 10 for x in numbers)
print(result)  # 输出 False

# 检查列表中是否有元素为真
values = [True, False, False, False]
result = any(values)
print(result)  # 输出 True

```

### 13. `iter(obj, sentinel)`

`iter()`函数返回一个迭代器对象，该迭代器会不断调用可迭代对象的`__next__()`方法，直到达到指定的`sentinel`值为止。

```
# 使用 iter() 创建一个迭代器
iterator = iter(lambda: input("Enter 'stop' to quit: "), 'stop')
for item in iterator:
    print(item)

```

### 14. `next(iterator, default)`

`next()`函数接受一个迭代器对象和一个默认值作为参数，返回迭代器的下一个元素。如果迭代器耗尽，将返回默认值。

```
# 获取迭代器的下一个元素
numbers = [1, 2, 3]
iterator = iter(numbers)
result = next(iterator)
print(result)  # 输出 1

# 迭代器耗尽时返回默认值
result = next(iterator, None)
print(result)  # 输出 None

```

### 15. `len(s)`

`len()`函数返回对象的长度，例如列表、字符串、元组等。

```
# 获取列表的长度
fruits = ["apple", "banana", "cherry"]
result = len(fruits)
print(result)  # 输出 3

# 获取字符串的长度
text = "Hello, World!"
result = len(text)
print(result)  # 输出 13

```

### 16. `reversed(seq)`

`reversed()`函数接受一个序列作为参数，返回一个逆序的迭代器。

```
# 反转列表
fruits = ["apple", "banana", "cherry"]
result = list(reversed(fruits))
print(result)  # 输出 ['cherry', 'banana', 'apple']

```

### 17. `slice(start, stop, step)`

`slice()`函数返回一个切片对象，该对象可以用于切片操作。`start`表示起始位置，`stop`表示结束位置，`step`表示步长。

```
# 创建一个切片对象
my_slice = slice(1, 5, 2)

# 使用切片对象进行切片操作
numbers = [0, 1, 2, 3, 4, 5, 6]
result = numbers[my_slice]
print(result)  # 输出 [1, 3]

```

### 18. `sorted(iterable, key=None, reverse=False)`

`sorted()`函数接受一个可迭代对象作为参数，返回一个新的排好序的列表。可选参数`key`用于指定排序关键字函数，`reverse`用于指定是否降序排序。

```
# 对列表进行排序
fruits = ["apple", "banana", "cherry", "date"]
result = sorted(fruits)
print(result)  # 输出 ['apple', 'banana', 'cherry', 'date']

# 根据字符串长度进行排序
result = sorted(fruits, key=lambda x: len(x))
print(result)  # 输出 ['date', 'apple', 'banana', 'cherry']

# 降序排序
result = sorted(fruits, reverse=True)
print(result)  # 输出 ['date', 'cherry', 'banana', 'apple']

```

### 19. `eval(expression, globals=None, locals=None)`

`eval()`函数用于执行一个字符串表达式，并返回表达式的结果。可选参数`globals`和`locals`用于指定全局和局部命名空间，如果未提供，则使用当前命名空间。

```
# 执行字符串表达式
result = eval("3 + 5")
print(result)  # 输出 8

# 在自定义命名空间中执行表达式
x = 10
result = eval("x + 5", globals(), locals())
print(result)  # 输出 15
```

需要谨慎使用`eval()`函数，因为它可以执行任意的Python代码，可能存在安全风险。

### 20. `exec(object, globals=None, locals=None)`

`exec()`函数用于执行一个字符串或代码块，并返回`None`。它可以用于执行包含Python代码的字符串或文件内容。可选参数`globals`和`locals`用于指定全局和局部命名空间。

```
# 执行包含Python代码的字符串
code = """
x = 10
y = 20
result = x + y
print(result)
"""
exec(code)  # 输出 30

# 在自定义命名空间中执行代码块
x = 5
exec("x = x * 2", globals(), locals())
print(x)  # 输出 10
```

与`eval()`函数类似，需要谨慎使用`exec()`函数，以避免安全风险。