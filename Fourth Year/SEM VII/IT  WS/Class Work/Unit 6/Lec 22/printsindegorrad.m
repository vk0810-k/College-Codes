% This script shows how to use an if-else statement

% Ask for the angle

ang = input('Enter the angle: ');

% Ask for the units

u = input('Enter d for degrees or r for radians: ','s');

% Test to select which sin function to use, sind or sin

if u == 'd'

res = sind(ang);

else

res = sin(ang);

end

% Display the answer

fprintf('sin(%.2f) = %.2f\n',ang,res)