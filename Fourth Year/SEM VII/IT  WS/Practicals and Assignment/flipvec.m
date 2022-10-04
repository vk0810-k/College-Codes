function out = flipvec(vec)
% Flips it if it's a vector, otherwise
% returns the input argument unchanged
% Format of call: flipvec(vec)
% Returns flipped vector or unchanged 
[r, c] = size(vec);
if r == 1 && c > 1
    out = fliplr(vec); 
elseif c == 1 && r > 1 
    out = flipud(vec);
else
    out = vec;
end
end