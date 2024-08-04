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
    return diff

def diff_lst(d1,d2):
    diff_lst=[]
    for i in d1:
        if i not in d2:
            diff_lst.append(i)
    for j in d2:
        if j not in d1:
            diff_lst.append(j)
    return diff_lst

def intersect(d1,d2):
    intersect_lst=[]
    for i in d1:
        if i in d2:
            intersect_lst.append(i)
    return intersect_lst
    
#taking number of students in se
no_of_std_se=int(input("Enter the number of student presentin SE: "))
se_students=[]
for i in range(0,no_of_std_se):
    temp=input("Enter name of "+ str(i+1) +" student: ")
    se_students.append(temp)
se_students=removeDuplicate(se_students)
print("following are the student who present in SE class: "+str(se_students))

#get the list of student who plays cricket
no_of_std_se_cricket=int(input("Enter the number of student who plays cricket: "))
se_crickrt_students=[]
for i in range(0,no_of_std_se_cricket):
    temp=input("Enter name of "+ str(i+1) +" student: ")
    se_cricket_students.append(temp)
se_cricket_students=removeDuplicate(se_cricket_students)
print("following are the student who plays cricket: "+str(se_cricket_students))

#get the list of student who plays badminton
no_of_std_se_badminton=int(input("Enter the number of student who plays badminton: "))
se_badminton_students=[]
for i in range(0,no_of_std_se_badminton):
    temp=input("Enter name of "+ str(i+1) +" student: ")
    se_badminton_students.append(temp)
se_badminton_students=removeDuplicate(se_badminton_students)
print("following are the student who plays badmintont: "+str(se_badminton_students))
    
no_of_std_se_football=int(input("Enter the number of student who plays football: "))
se_football_students=[]
for i in range(0,no_of_std_se_football):
    temp=input("Enter name of "+ str(i+1) +" student: ")
    se_football_students.append(temp)
se_football_students=removeDuplicate(se_football_students)
print("following are the student who plays football: "+str(se_football_students))
    
flag=1
while flag==1:
    print("1.List of student who play both cricket and badminton:")
    print("2.List of student who play either cricket or badminton but not both:")
    print("3.Number of student who play neither cricket nor badminton:")
    print("4.Number of student who play cricket and football but not badminton:")
    ch=int(input("Enter Choice number which you want to see: "))
    match ch:
        case 1:
            print(List of student who play both cricket and badminton: ", intersect(se_crickrt_students,se_badminton_students))
            temp=input("Do you want to continue (Yes/No)")
            if temp=='Yes' or temp=='yes':
                flag=1
            else:
                flag=0
        case 2:
            print("List of student who play either cricket or badminton but not both: ",diff_lst(se_crickrt_students,se_badminton_students))
            temp=input("Do you want to continue (Yes/No)")
            if temp=='Yes' or temp=='yes':
                flag=1
            else:
                flag=0
        case 3:
            print("Number of student who play neither cricket nor badminton: ",diff(se_students,union(se_cricket_students,se_badminton_students)))
            temp=input("Do you want to continue (Yes/No)")
            if temp=='Yes' or temp=='yes':
                flag=1
            else:
                flag=0
        case 4:
            print(".Number of student who play cricket and football but not badminton:",diff(se_badminton_students,intersect(se_cricket_students,se_football_students)))
            temp=input("Do you want to continue (Yes/No)")
            if temp=='Yes' or temp=='yes':
                flag=1
            else:
                flag=0
        case _:
            temp=input("Do you want to continue (Yes/No)")
            if temp=='Yes' or temp=='yes':
                flag=1
            else:
                flag=0
            

