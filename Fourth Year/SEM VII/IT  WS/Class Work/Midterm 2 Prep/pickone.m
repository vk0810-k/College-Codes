function elem = pickone(invec)
% pickone(x) returns a random element from vector x
% Format of call: pickone(vector)
% Returns random element from the vector
len = length(invec); 
ran = randi([1, len]); 
elem = invec(ran); 
end