# The base installation of R comes with many useful packages as standard. 
# These packages will contain many of the functions you will use on a daily basis. 
# However, as you start using R for more diverse projects 
# (and as your own use of R evolves) you will find that there comes a time 
# when you will need to extend R's capabilities.

# These packages can be downloaded from a variety of sources 
# but the most popular is CRAN (https://cran.r-project.org/web/packages/index.html) 
# and Bioconductor (https://www.bioconductor.org/) and GitHub (https://github.com/).

# To install a package from CRAN you can use the install.packages() function
install.packages('remotes', dependencies = TRUE)

# It is good practice to occasionally update your previously 
# installed packages to get access to new functionality and bug fixes. 
update.packages(ask = FALSE)  #paketleri otomatik gunceller
update.packages(ask = TRUE)  #her bir paketin güncellemesi için onay ister

# Once you have installed a package onto your computer it is not immediately available for you 
# to use. To use a package you first need to load the package by using the library() 
# function. 
library(remotes)

# Get current working directory
getwd()

# Set working directory
setwd("/path/to/my/directory")

# Creating variable (assignment operator)
# R does not have a command for declaring a variable. 
# A variable is created the moment you first assign a value to it. 
# To assign a value to a variable, use the <- sign. 
# To output (or print) the variable value, just type the variable name:
name <- "John"
name

age <- 40
age

# Multiple Variables
# Assign the same value to multiple variables in one line
var1 <- var2 <- var3 <- "Orange"

# Print variable values
var1
var2
var3

# R does have a print() function available if you want to use it.
print("Hello World!")

age <- 40
print(age)

# Variable Names
# A variable can have a short name (like x and y) or a more descriptive name (age, carname, total_volume). 
# Rules for R variables are:
# -- A variable name must start with a letter and can be a combination of letters, digits, period(.) and underscore(_). 
#    If it starts with period(.), it cannot be followed by a digit.
# -- A variable name cannot start with a number or underscore (_)
# -- Variable names are case-sensitive (age, Age and AGE are three different variables)
# -- Reserved words cannot be used as variables (TRUE, FALSE, NULL, if...)

# Legal variable names:
myvar <- "John"
my_var <- "John"
myVar <- "John"
MYVAR <- "John"
myvar2 <- "John"
.myvar <- "John"

# Illegal variable names:
2myvar <- "John"
my-var <- "John"
my var <- "John"
_my_var <- "John"
my_v@ar <- "John"
TRUE <- "John"


# Data Types
# In programming, data type is an important concept.
# Variables can store data of different types, and different types can do different things.
# In R, variables do not need to be declared with any particular type, and can even change type after they have been set

# R has a variety of data types and object classes. You will learn much more about these as you continue to get to know R.
# Basic data types in R can be divided into the following types:
# - numeric - (10.5, 55, 787)
# - integer - (1L, 55L, 100L, where the letter "L" declares this as an integer)
# - complex - (9 + 3i, where "i" is the imaginary part)
# - character (a.k.a. string) - ("k", "R is exciting", "FALSE", "11.5")
# - logical (a.k.a. boolean) - (TRUE or FALSE)
# numeric
x <- 10.5
class(x)

# integer
# To create an integer variable, you must use the letter L after the integer value
x <- 1000L
class(x)

# complex
x <- 9i + 3
class(x)

# character/string
# Strings are used for storing text.
#A string is surrounded by either single quotation marks, or double quotation marks
x <- "R is exciting"
class(x)

# logical/boolean
x <- TRUE
class(x)

# Multiline Strings
str <- "Lorem ipsum dolor sit amet,
consectetur adipiscing elit,
sed do eiusmod tempor incididunt
ut labore et dolore magna aliqua."

str

# Escape Characters
# To insert characters that are illegal in a string, you must use an escape character.
# An escape character is a backslash \ followed by the character you want to insert.
str <- "We are the so-called "Vikings", from the north."
str
# Error: unexpected symbol in "str <- "We are the so-called "Vikings"

# To fix this problem, use the escape character \"
str <- "We are the so-called \"Vikings\", from the north."
str
cat(str)
# Other escape characters in R:
# \\ Backslash
# \n New Line
# \t Tab
# \b Backspace
str <- "This is a backslash: \\"
print(str)
cat(str)

str <- "This is the first line.\nThis is the second line."
print(str)
cat(str)

str <- "Column1\tColumn2\tColumn3"
print(str)
cat(str)

# R Arithmetic Operators
# At a basic level we can use R much as you would use a calculator.
2 + 2

# R follows the usual mathematical convention of order of operations.
2 + 3 * 4
2 + (3 * 4) 

# Subtraction
4 - 2

# Multiplication
5 * 2

# Divison
10 / 3

# Exponent
4 ^ 2

# Modulus (Remainder from division)
10 %% 3

# Integer Division
5 %/% 2

# R Comparison Operators
# Equal
5 == 2
5 == 5

# Not equal
5 != 5
5 != 2

# Greater than, Less than, Greater than or equal to, Less than or equal to
5 > 2
5 < 2
5 >= 5
5 <= 2

# R Logical Operators
# Element-wise Logical AND operator. Returns TRUE if both elements are TRUE
TRUE & TRUE

# Elementwise- Logical OR operator. Returns TRUE if one of the statements is TRUE
TRUE | FALSE


# Built-in R functions
max(5, 10, 15)
min(5, 10, 15)
sqrt(16)
abs(-4.7)
ceiling(1.4)
floor(1.4)

# Vectors in R
# A vector is simply a list of items that are of "the same type".
# To combine the list of items to a vector, use the c() function and separate the items by a comma.
# Vector of strings
fruits <- c("banana", "apple", "orange")
# Print fruits
fruits

# Vector of numerical values
numbers <- c(1, 2, 3)
# Print numbers
numbers

# To create a vector with numerical values in a sequence, use the : operator:
# Vector with numerical values in a sequence
numbers <- 1:10
numbers

# Matrices in R
# A matrix is a two dimensional data set with columns and rows.
# A column is a vertical representation of data, while a row is a horizontal representation of data.
# A matrix can be created with the matrix() function. Specify the nrow and ncol parameters to get the amount of rows and columns:

# Create a matrix
thismatrix <- matrix(c(1,2,3,4,5,6), nrow = 3, ncol = 2)
# Print the matrix
thismatrix

# You can also create a matrix with strings:
thismatrix <- matrix(c("apple", "banana", "cherry", "orange"), nrow = 2, ncol = 2)
thismatrix

# You can access the items by using [ ] brackets. 
# Indexing starts at 1 in R.
# The first number "1" in the bracket specifies the row-position, while the second number "2" specifies the column-position:
thismatrix <- matrix(c("apple", "banana", "cherry", "orange"), nrow = 2, ncol = 2)
thismatrix[1, 2]

# The whole row can be accessed if you specify a comma after the number in the bracket:
thismatrix <- matrix(c("apple", "banana", "cherry", "orange"), nrow = 2, ncol = 2)
thismatrix[2,]

# The whole column can be accessed if you specify a comma before the number in the bracket:
thismatrix <- matrix(c("apple", "banana", "cherry", "orange"), nrow = 2, ncol = 2)
thismatrix[,2]

# More than one row can be accessed if you use the c() function:
thismatrix <- matrix(c("apple", "banana", "cherry", "orange","grape", "pineapple", "pear", "melon", "fig"), nrow = 3, ncol = 3)
thismatrix
thismatrix[c(1,2),]

# More than one column can be accessed if you use the c() function:
thismatrix <- matrix(c("apple", "banana", "cherry", "orange","grape", "pineapple", "pear", "melon", "fig"), nrow = 3, ncol = 3)
thismatrix[, c(1,2)]

# Use the dim() function to find the number of rows and columns in a Matrix:
thismatrix <- matrix(c("apple", "banana", "cherry", "orange"), nrow = 2, ncol = 2)
dim(thismatrix)

# Use the length() function to find the dimension (number of elements) of a Matrix:
thismatrix <- matrix(c("apple", "banana", "cherry", "orange"), nrow = 2, ncol = 2)
length(thismatrix)

# Arrays
# Compared to matrices, arrays can have more than two dimensions.
# We can use the array() function to create an array, and the dim parameter to specify the dimensions:

# An array with one dimension with values ranging from 1 to 24
thisarray <- c(1:24)
thisarray

# An array with more than one dimension
multiarray <- array(thisarray, dim = c(4, 3, 2))
multiarray


# How does dim=c(4,3,2) work?
# The first and second number in the bracket specifies the amount of rows and columns.
# The last number in the bracket specifies how many dimensions we want.

# You can access the array elements by referring to the index position. 
# You can use the [] brackets to access the desired elements from an array:
thisarray <- c(1:24)
multiarray <- array(thisarray, dim = c(4, 3, 2))
multiarray[2, 3, 2]

# You can also access the whole row or column from a matrix in an array, by using the c() function:
thisarray <- c(1:24)

# Access all the items from the first row from matrix one
multiarray <- array(thisarray, dim = c(4, 3, 2))
multiarray[c(1),,1]

# Access all the items from the first column from matrix one
multiarray <- array(thisarray, dim = c(4, 3, 2))
multiarray[,c(1),1]

# Use the dim() function to find the amount of rows and columns in an array:
thisarray <- c(1:24)
multiarray <- array(thisarray, dim = c(4, 3, 2))
dim(multiarray)
  
# Use the length() function to find the dimension (number of elements) of an array:
thisarray <- c(1:24)
multiarray <- array(thisarray, dim = c(4, 3, 2))
length(multiarray)

# Lists in R
# A list in R can contain many "different data types" inside it.
# A list is a collection of data which is ordered and changeable (mutable).
# To create a list, use the list() function:

# List of strings
thislist <- list(TRUE, "banana", "cherry", 15)
# Print the list
thislist

# You can access the list items by referring to its index number, inside brackets. 
# The first item has index 1, the second item has index 2, and so on:
thislist[1]

# To change the value of a specific item, refer to the index number:
thislist[1] <- FALSE
# Print the updated list
thislist

# To find out how many items (elements) a list has, use the length() function:
length(thislist)

# To find out if a specified item is present in a list, use the %in% operator:
thislist <- list("apple", "banana", "cherry")
"apple" %in% thislist

# To add an item to the end of the list, use the append() function:
thislist <- list("apple", "banana", "cherry")
append(thislist, "orange")

# To add an item to the right of a specified index, add "after=index number" in the append() function:
thislist <- list("apple", "banana", "cherry")
append(thislist, "orange", after = 2)

# You can also remove list items. The following example creates a new, updated list without an "banana" item:
thislist <- list("apple", "banana", "cherry")
newlist <- thislist[-2]
# Print the new list
newlist


# There are several ways to join, or concatenate, two or more lists in R.
# The most common way is to use the c() function, which combines two elements together:
list1 <- list("a", "b", "c")
list2 <- list(1,2,3)
list3 <- c(list1,list2)

list3
  
# DataFrames in R
# Data Frames are data displayed in a format as a table.
# Data Frames can have different types of data inside it. 
# While the first column can be character, the second and third can be numeric or logical. 
# However, each column should have the same type of data.
# Use the data.frame() function to create a data frame:

# Create a data frame
Data_Frame <- data.frame (
  Training = c("Strength", "Stamina", "Other"),
  Pulse = c(100, 150, 120),
  Duration = c(60, 30, 45)
)

# Print the data frame
Data_Frame

# Use the summary() function to summarize the data from a Data Frame:
summary(Data_Frame)

# Use the dim() function to find the amount of rows and columns in a Data Frame:
dim(Data_Frame)

# You can also use the ncol() function to find the number of columns and nrow() to find the number of rows:
ncol(Data_Frame)
nrow(Data_Frame)

# Use the rbind() function to combine two or more data frames in R vertically:
Data_Frame1 <- data.frame (
  Training = c("Strength", "Stamina", "Other"),
  Pulse = c(100, 150, 120),
  Duration = c(60, 30, 45)
)

Data_Frame2 <- data.frame (
  Training = c("Stamina", "Stamina", "Strength"),
  Pulse = c(140, 150, 160),
  Duration = c(30, 30, 20)
)

New_Data_Frame <- rbind(Data_Frame1, Data_Frame2)
New_Data_Frame

# And use the cbind() function to combine two or more data frames in R horizontally:
Data_Frame3 <- data.frame (
  Training = c("Strength", "Stamina", "Other"),
  Pulse = c(100, 150, 120),
  Duration = c(60, 30, 45)
)

Data_Frame4 <- data.frame (
  Steps = c(3000, 6000, 2000),
  Calories = c(300, 400, 300)
)

New_Data_Frame1 <- cbind(Data_Frame3, Data_Frame4)
New_Data_Frame1

# Factors in R
# Factors are used to categorize data. Examples of factors are:
# - Demography: Male/Female
# - Music: Rock, Pop, Classic, Jazz
# - Training: Strength, Stamina
#To create a factor, use the factor() function and add a vector as argument:
  
# Create a factor
music_genre <- factor(c("Jazz", "Rock", "Classic", "Classic", "Pop", "Jazz", "Rock", "Jazz"))

# Print the factor
music_genre

# You can see from the example above that that the factor has four levels (categories): Classic, Jazz, Pop and Rock.

# class() function can print the type of the variable:
class(music_genre)

# To only print the levels, use the levels() function:
music_genre <- factor(c("Jazz", "Rock", "Classic", "Classic", "Pop", "Jazz", "Rock", "Jazz"))

levels(music_genre)

# You can also set the levels, by adding the levels argument inside the factor() function:
music_genre <- factor(c("Jazz", "Rock", "Classic", "Classic", "Pop", "Jazz", "Rock", "Jazz"), levels = c("Classic", "Jazz", "Pop", "Rock", "Other"))

levels(music_genre)
