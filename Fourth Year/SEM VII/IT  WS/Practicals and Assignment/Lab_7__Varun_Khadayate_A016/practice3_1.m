% This script calculates the circumference of a circle
% It prompts the user for the radius

%Prompt the user for the radius and calculate the area based on that radius
fprintf('Note: the units will be inches. \n')
radius = input('Please enter the radius: ');
area = 2 * pi * radius ;

%Print all variables in a sentence format
fprintf('For a circle with a radius of %.2f inches, \n' ,radius)
fprintf('the Circle is %.2f inches \n' , area)