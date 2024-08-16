## *排序方法（Python实现）*



#### 算法分类

##### 常见排序算法可以分为两大类：

- 非线性时间比较类排序：通过比较来决定元素间的相对次序，由于其时间复杂度不能突破O(n log n)，因此称为非线性时间比较类排序。

- 线性时间非比较类排序：不通过比较来决定元素间的相对次序，它可以突破基于比较排序的时间下界，以线性时间运行，因此称为线    性时间非比较类排序。 
  ![屏幕截图 2024-07-19 153820](D:\Picture\Camera Roll\屏幕截图 2024-07-19 153820.png)

- 稳定：如果a原本在b前面，而a=b，排序之后a仍然在b的前面。

- 不稳定：如果a原本在b的前面，而a=b，排序之后 a 可能会出现在 b 的后面。

- 时间复杂度：对排序数据的总的操作次数。反映当n变化时，操作次数呈现什么规律。

- 空间复杂度：是指算法在计算机内执行时所需存储空间的度量，它也是数据规模n的函数。 

  、

  ### *1.1 冒泡排序*

- 比较相邻的元素。如果第一个比第二个大，就交换它们两个；

- 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对，这样在最后的元素应该会是最大的数；

- 针对所有的元素重复以上的步骤，除了最后一个；

- 重复步骤1~3，直到排序完成。

  ![img](https://i-blog.csdnimg.cn/blog_migrate/1c5a0310611e033ed892b31ff0047fce.gif)

```python
def swap(lyst,i,j):
    lyst[i],lyst[j]=lyst[j],lyst[i]
    
def BubbleSorted(lyst):
    n=len(lyst)
    if n<=1:
        return lyst
    else:
        for i in range(n):
            for j in range(0,n-i-1):
                if lyst[j]>lyst[j+1]:
                    swap(lyst,j,j+1)
    return lyst
```

- 冒泡排序对n个数据操作n-1轮，每轮找出一个最大（小）值。
- 操作只对相邻两个数比较与交换，每轮会将一个最值交换到数据列首（尾），像冒泡一样。
- 每轮操作O(n)次，共O（n）轮，时间复杂度O(n^2)。
- 额外空间开销出在交换数据时那一个过渡空间，空间复杂度O(1)



### *1.2 快速排序*

- 从数列中挑出一个元素，称为 “基准”（pivot）；

- 重新排序数列，所有元素比基准值小的摆放在基准前面，所有元素比基准值大的摆在基准的后面（相同的数可以到任一边）。在这个分区退出之后，该基准就处于数列的中间位置。这个称为分区（partition）操作；
- 递归地（recursive）把小于基准值元素的子数列和大于基准值元素的子数列排序。

![img](https://i-blog.csdnimg.cn/blog_migrate/9047980d8549846914e9a044117fd3a0.gif)

```python
def swap(lyst,i,j):
    lyst[i],lyst[j]=lyst[j],lyst[i]
    
def quicksort(lyst):
    quicksortHelper(lyst,0,len(lyst)-1)
    
def quicksortHelper(lyst,left,right):
    if left < right:
        pivotLocation = partition(lyst,left,right)
        quicksortHelper(lyst, left, pivotLocation-1)
        quicksortHelper(lyst, pivotLocation+1, right)
        
def partition(lyst,left,right):
    # Find the pivot and exchange it with the last item
    middle =(left+right)//2
    pivot=lyst[middle]
    lyst[middle] = lyst[right]
    lyst[right] = pivot
    # Set boundary point to first position
    boundary = left
    # Move items less than pivot to the left
    for index in range(left,right):
        if lyst[index]<pivot:
            swap(lyst,index,boundary)
            boundary+=1
    # Exchange the pivot item and the boundary item
    swap(lyst,right,boundary)
    return boundary

# Earlier definition of the swap function goes here

import random
def main(size=20,sort=quicksort):
    lyst=[]
    for count in range(size):
        lyst.append(random.randint(1,size+1))
    print(lyst)
    sort(lyst)
    print(lyst)
    
if __name__=="__main__":
    main()
```

*快速排序代码（基础版）：*

```python
def QuickSort(num):
 if len(num) <= 1: #边界条件
  return num
 key = num[0] #取数组的第一个数为基准数
 llist,rlist,mlist = [],[],[key] #定义空列表，分别存储小于/大于/等于基准数的元素
 for i in range(1,len(num)): #遍历数组，把元素归类到3个列表中
  if num[i] > key:
   rlist.append(num[i])
  elif num[i] < key:
   llist.append(num[i])
  else:
   mlist.append(num[i])
 return QuickSort(llist)+mlist+QuickSort(rlist) #对左右子列表快排，拼接3个列表并返回

nums = [5,3,6,4,1,2,8,7]
print(QuickSort(nums))
```

*输出结果：*

```python
[1,2,3,4,5,6,7,8]
```

### *2 . 插入排序*

### *2.1 简单插入排序(Insert Sort)*

```
从第一个元素开始，该元素可以认为已经被排序；
取出下一个元素，在已经排序的元素序列中从后向前扫描；
如果该元素（已排序）大于新元素，将该元素移到下一位置；
重复步骤3，直到找到已排序的元素小于或者等于新元素的位置；
将新元素插入到该位置后；
重复步骤2~5。
```

- *简单插入排序同样操作n-1轮，每轮将一个未排序树插入排好序列。*

- *开始时默认第一个数有序，将剩余n-1个数逐个插入。插入操作具体包括：比较确定插入位置，数据移位腾出合适空位*

- *每轮操作O(n)次，共O（n）轮，时间复杂度O(n^2)。*

- *额外空间开销出在数据移位时那一个过渡空间，空间复杂度O(1)。*

![img](https://i-blog.csdnimg.cn/blog_migrate/ae7d32b27c8489100860e8df9601ecd1.gif)

```python
def InsertSort(lyst):
    if len(lyst)<=1:
        return lyst
    for i in range(1,len(lyst)):
        target=lyst[i]
        j=i
        while j>0 and target<lyst[j-1]:
            lyst[j]=lyst[j-1]
            j-=1
        lyst[j]=target
    return lyst

lyst=[14,45,62,12,32,78,95,14,2,3,14,12]
print(InsertSort(lyst))
```

#### *2.2.1 直接插入排序*

*它的工作原理是通过构建有序序列，对于未排序数据，在已排序序列中从前向后或从后向前扫描，找到相应位置并插入。*

![img](https://img-blog.csdnimg.cn/d5f15a97ec114e51bb10a1768cef2648.gif#pic_center)

```python
items = [10, 4, 5, 1, 3, 9, 7]


def s_insertSort(items):
    item = items.copy()
    number = len(items)
    for i in range(0,number):
        if i != 0:		# i相当于哨兵，记录每次插入到第几个数，即前i-1个数已经有序，这里判定是第一次插入，不需要交换位置，所以写了一个非的条件判定
            for j in range(0,i):	# 从前i-1个有序数列里查找，并完成插入
                if item[j] > item[i]:
                    item[j],item[i] = item[i],item[j]	# 在前几篇博客里对于数值的交换，我们设置了一个暂存变量temp，以此来完成两个数的交换，这是致敬C语言的数据结构代码实现，python实现两个数的交换更简单，如代码所示
        #print(item)    # 此处可打印每一遍的排序详情
    return item
    


print('选择排序已完成！',selectionSort(items))		# 选择排序已完成！ [1, 3, 4, 5, 7, 9, 10]
print(items)	# [10, 4, 5, 1, 3, 9, 7]

```

*时间复杂度：O(n^2)；*
*空间复杂度：O(1)；*
*稳定性：稳定；*
*应用场景：序列接近有序或者元素个数比较少*

### *2.2  [希尔排序](Shell Sort)*

*先将整个待排序的记录序列分割成为若干子序列分别进行直接插入排序，具体算法描述：*

```
选择一个增量序列t1，t2，…，tk，其中ti>tj，tk=1；
按增量序列个数k，对序列进行k 趟排序；
每趟排序，根据对应的增量ti，将待排序列分割成若干长度为m 的子序列，分别对各子表进行直接插入排序。仅增量因子为1 时，整个序列作为一个表来处理，表长度即为整个序列的长度。
```

- *希尔排序是插入排序的高效实现（大家可以比对一下插入排序和希尔排序的代码），对简单插入排序减少移动次数优化而来。*

- *简单插入排序每次插入都要移动大量数据，前后插入时的许多移动都是重复操作，若一步到位移动效率会高很多。*

- *若序列基本有序，简单插入排序不必做很多移动操作，效率很高。*

- *希尔排序将序列按固定间隔划分为多个子序列，在子序列中简单插入排序，先做远距离移动使序列基本有序；逐渐缩小间隔重复操作，最后间隔为1时即简单插入排序。*

- *希尔排序对序列划分O(n)次，每次简单插入排序O(logn)，时间复杂度O(nlogn)*

- *额外空间开销出在插入过程数据移动需要的一个暂存，空间复杂度O(1)*

![img](https://i-blog.csdnimg.cn/blog_migrate/335cc49a22a57429b01ae3d42187bb24.gif)

### 编辑未完，即将新开，请待续......

