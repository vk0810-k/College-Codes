function fofx = eqfn(x) 
if any(any(x==0))
    fofx = -99;
else
    fofx = x.^2 + 1./x;
end
end