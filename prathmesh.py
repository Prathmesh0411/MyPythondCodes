def removeDuplicate(d):
    unique_lst=[]
    for i in d:
        if i not in unique_lst:
            unique_lst.append(i)
   return unique_lst

def union(d1,d2):
    union_lst=[]
    for i in d1:
        if i not in union_lst:
            union_lst.append(i)
   for j in d2:
       if j not in union_lst:
           union_lst.append(j)
   return union_lst

def diff(d1,d2):
    deff=[]
    for i in d1:
        if not in d2:
           diff.append(i)
