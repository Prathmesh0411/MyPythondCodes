"""matrix1=[]
degree_of_matrix = int(input("enter the degree of matrix: "))

for i in range(0,degree_of_matrix)
     for j in range(0,degree_of_matrix)
          row1=[]"""

matrix1 =[]
degree_of_matrix = int(input("enter the degree of matrix: "))
rows = int(input("Enter the no. of rows: "))
columns = int(input("Enter the no. of columns: "))
for i in range(0,degree_of_matrix):
    a=[]
    for j in range(0,degree_of_matrix):
        element = int(input("enter "+ str(i+1) +" elemert of matrix:"))
        a.append(element)
    matrix1.append(a)

for element in range(rows):
    print(matrix1[element])



"""for i in range(0,rows):
    for j in range(0,columns):
        print(matrix1[i][j],end=" ")
    print()"""

matrix2 =[]
degree_of_matrix2 = int(input("enter the degree of matrix: "))
rows = int(input("Enter the no. of rows: "))
columns = int(input("Enter the no. of columns: "))
for i in range(0,degree_of_matrix2):
    a=[]
    for j in range(0,degree_of_matrix2):
        element = int(input("enter "+ str(i+1) +" elemert of matrix:"))
        a.append(element)
    matrix2.append(a)

"""for i in range(0,rows):
    for j in range(0,columns):
        print(matrix2[i][j],end=" ")
    print()"""

for element in range(rows):
    print(matrix2[element])


    