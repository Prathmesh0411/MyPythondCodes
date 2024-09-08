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

def multiplication(rows, columns, matrix1, matrix2):
    print('Multiplication of the matrix is:')
    matrix = []
    for i in range(rows):
        row = []
        for j in range(columns):
            n = 0
            for k in range(columns):
                n += matrix1[i][k] * matrix2[k][j]
            row.append(n)
        matrix.append(row)
    return matrix

def transpose(matrix, rows, columns):
    print('Transpose of the matrix is:')
    transposed = []
    for i in range(columns):
        row = []
        for j in range(rows):
            row.append(matrix[j][i])
        transposed.append(row)
    return transposed

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

for element in range(rows):
    print(matrix2[element])


print("\n\n--------------------MENU--------------------\n")
print("1.Addition of two matrices:")
print("2.Subtraction of two matrices:")
print("3.Multiplication of two matrices:")
print("Transpose of matrix:")

flag=1
while flag==1:
    ch=int(input("Enter your Choice (from 1 to 5) :"))

    if ch==1:
         print(addition(rows,columns,matrix1,matrix2))
        a = input("Do you want to continue (yes/no) :")
        if a == "yes":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program!")

    elif ch==2:
        print(subtraction (rows,columns,matrix1,matrix2))
        a = input("Do you want to continue (yes/no) :")
        if a == "yes":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program!")

    elif ch==3:
        print(multiplication (rows,columns,matrix1,matrix2))
        a = input("Do you want to continue (yes/no) :")
        if a == "yes":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program!")

    elif ch==4:
        print(transpose(matrix,rows,columns))
        a = input("Do you want to continue (yes/no) :")
        if a == "yes":
            flag = 1
        else:
            flag = 0
            print("Thanks for using this program!")

    elif ch==5:
        flag=0
        print("Thanks for using this program!")

    else:
          print("Enter the correct number")