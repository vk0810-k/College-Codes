function outtype = findargtype ( inputarg)
[r c] = size(inputarg) ;
if r==1 && c==1
outtype = 'scalar' ;
elseif r == 1
outtype = 'row vector';
elseif c == 1
outtype = 'col vector';
else
outtype = 'matrix' ;
end
end