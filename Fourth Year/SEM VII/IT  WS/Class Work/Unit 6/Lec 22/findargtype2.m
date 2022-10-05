function type = findargtype2(X)
% findargtype2 finds if the input is a scalar, row vector,
% column vector, or matrix.
% Format of call: findargtype2(X)
% Returns a string
[r c] = size(X);
if r == 1 && c == 1
    type = 'scalar';
elseif r == 1
    type = 'row vector';
elseif c == 1
    type = 'column vector';
else
    type = 'matrix';
end
end