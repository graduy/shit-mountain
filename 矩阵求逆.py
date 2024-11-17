# coding=gbk
from fractions import Fraction
import numpy as np
np.set_printoptions(formatter={'all':lambda x: str(Fraction(x).limit_denominator())})
 
m = int(input("输入矩阵行数:\n"))
A = [[]for i in range(m)] 
print("请输入矩阵元素，同一行使用空格进行分隔，输入回车切换到下一行:")
 
for i in range(m):
    a=input().split()
    for j in range(len(a)):
        A[i].append(a[j])
 
array_before = np.array(A)  
array_before = np.array(array_before,dtype = 'float')
#这一行是必须的，否则矩阵在计算的过程中类型会变成object，无法求逆
array_after = np.linalg.inv(array_before)
print("逆矩阵为:\n",array_after)