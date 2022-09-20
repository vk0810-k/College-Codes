% takes the character and the number and prints them
a=input('Enter a character--->','s');
n=input('Enter a number--->');
% display the character in a field width of 3.
fprintf('%3c',a);
fprintf('\n')
% display the left-justified number in a field width of 8 with 3 decimal places.
fprintf('%-8.3f\n',n);
