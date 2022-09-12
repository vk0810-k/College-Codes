% Create a function M-file called quadRoots to find the roots of quadratic 
% polynomials of the form y=ax2+bx+c Its inputs will be the coefficients 
% a, b and c. Its outputs will be the two roots, r1 and r2 and calculated 
% by the formula:
% r1,r2=(−b±√(b^2−4ac))/2a
% Varun Khadayate A016 
% 13th Sep 2022
function r = quadRoots(a,b,c)
r1 = (-b + sqrt(b^2 - 4*a*c)) / (2*a);
r2 = (-b - sqrt(b^2 - 4*a*c)) / (2*a);
r = [r1 ; r2];