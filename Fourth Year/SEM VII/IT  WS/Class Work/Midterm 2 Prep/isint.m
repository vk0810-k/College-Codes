function out = isint(innum)
% Returns 1 for true if the argument is an integer
% Format of call: isint(number)
% Returns logical 1 iff number is an integer
out = innum == int32(innum); 
end