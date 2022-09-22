function out = isdivby4(inarg)
% Returns 1 for true if the input argument is
% divisible by 4 or 0 for false if not
% Format of call: isdivby4(input arg)
% Returns whether divisible by 4 or not
out = rem(inarg,4) == 0; 
end