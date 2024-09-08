def  addition(rows,columns,matrix1,matrix2):
    print('addition of the matrix is:')
    matrix=[]
    for columns in range(0,degree_of_matrix):
        row =[]
        for rows in range(0,degree_of_matrix):
            n=matrix1[columns][rows] + matrix2[columns][rows]
            row.append(n)
        matrix.append(row)
    print(matrix)

def subtracton(rows,columns,matrix1,matrix2):
    print('subtracton of the matrix is:')
    matrix=[]
    for columns in range(0,degree_of_matrix):
        row =[]
        for rows in range(0,degree_of_matrix):
            n=matrix1[columns][rows] - matrix2[columns][rows]
            row.append(n)
        matrix.append(row)
    print(matrix)

def multiplication(rows,columns,matrix1,matrix2):
    print('multiplication of the matrix is:')
    matrix=[]
    for columns in range(0,degree_of_matrix):
        row =[]
        for rows in range(0,degree_of_matrix):
            n=matrix1[columns][rows] - matrix2[columns][rows]
            row.append(n)
        matrix.append(row)
    print(matrix)

matrix1 =[]
degree_of_matrix = int(input("enter the degree of matrix: "))
rows = int(input("Enter the no. of rows: "))
columns = int(input("Enter the no. of columns: "))
for i in range(0,degree_of_matrix):
    a=[]
    for j in range(0,degree_of_matrix):
        element = int(input("enter the elemert of matrix:"))
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
        element = int(input("enter the elemert of matrix:"))
        a.append(element)
    matrix2.append(a)

"""for i in range(0,rows):
    for j in range(0,columns):
        print(matrix2[i][j],end=" ")
    print()"""

for element in range(rows):
    print(matrix2[element])

print(addition(rows,columns,matrix1,matrix2))