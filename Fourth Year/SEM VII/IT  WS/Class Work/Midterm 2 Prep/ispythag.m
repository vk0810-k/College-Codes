function out = ispythag(a,b,c)
% Determines whether a, b, c are a Pythagorean triple or not
% Format of call: ispythag(a,b,c)
% Returns logical 1 if a Pythagorean triple
out = a^2 + b^2 == c^2; 
end