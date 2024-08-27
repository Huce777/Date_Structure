#初始化栈
#Python 没有内置的栈类，可以把 list 当作栈来使用
stack:list[int]=[]

#元素入栈
stack.append(1)
stack.append(3)
stack.append(2)
stack.append(5)
stack.append(4)

#访问栈顶元素
peek:int = stack[-1]

#元素出栈
pop:int = stack.pop()

#获取栈的长度
size:int = len(stack)

#判断是否为空
is_empty:bool = len(stack) ==0
