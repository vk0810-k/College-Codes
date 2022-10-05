function outtype = findargtype_prac(inputarg)
% findargtype determines whether the input argument is
%a scalar, vector or matrix and returns a string
[r, c] = size(inputarg);
if r == 1 && c == 1
    outtype = 'scalar';
end
if r == 1 && c > 1
    outtype = 'vector';
end
if r > 1 && c > 1
    outtype = 'matrix';
end
end