graph TD    

 A[开始] --> B[初始化 ProblemSize = 1000]

 B --> C[打印标题 "Problem Size", "Iterations"]    

 C --> D[初始化 count = 0]    

 D --> E[判断 count < 5]    

 E --> |是| F[执行算法]    

 E --> |否| G[结束]    

 F --> H[初始化 number = 0]    

 F --> I[初始化 work = 1]   

 I --> J[for j in range(ProblemSize)]    

 J --> K[for k in range(ProblemSize)]    

 K --> L[增加 number]    

 K --> M[work += 1, 然后 work -= 1]    

 M --> N[判断内层循环是否结束]    

 N --> |是| O[退出内层循环]    

 N --> |否| K    

 O --> P[打印 ProblemSize, number]    

 P --> R[ProblemSize *= 2]    

 R --> S[增加 count]    

 S --> E[回到循环判断]