% This script asks for user input for the number of rows
% and columns for a matrix. Then a matrix of that size is
% filled with random numbers and save in ASCII format to a

% file.
% Ask user for input
row = input('Enter the number of matrix rows: ');
col = input('Enter the number of matrix columns: ');

% Create the matrix of random numbers of specified size.
mat = randi(25, row,col)
% Save the matrix as an ASCII file.
save myMatrix.dat mat -ascii