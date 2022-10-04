function outsum = sumsteps2(n)
% sum from 1 to n in steps of 2
% Format of call: sumsteps2(n)
% Returns 1 + 3 + ... + n

outsum = 0; 
for i = 1:2:n
    outsum = outsum + i;
end
end