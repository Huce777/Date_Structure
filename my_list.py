class MyList:
    def __init__(self):
        self._capacity:int = 10 #列表容量
        self._arr:list[int]=[0]*self._capacity
        self._size:int = 0 #列表长度（当前元素数量）
        self._extend_ratio:int = 2 #每次列表扩容的倍数

    def size(self)->int:
        return self._size
    
    def capacity(self)->int:
        return self._capacity
    
    def get(self,index:int)->int:
        if index<0 or index>=self._size:
            raise IndexError("索引越界")
        return self._arr[index]
    
    def set(self,num:int,index:int):
        if index<0 or index>=self._size:
            raise IndexError("索引越界")
        self._arr[index] = num

    def add(self,num:int):
        if self.size() == self.capacity():
            self.extend_capacity()
        self._arr[self._size] = num
        self._size += 1

    def insert(self,num:int,index:int):
        if index<0 or index>=self._size:
            raise IndexError("索引越界")
        if self._size == self.capacity():
            self.extend_capacity()
        for j in range(self._size-1,index-1,-1):
            self._arr[j+1] = self._arr[j]
        self._arr[index] = num
        self._size += 1
