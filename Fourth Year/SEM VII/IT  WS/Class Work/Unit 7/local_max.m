function [vals, locs]=local_max(v)
n=length(v);
vals=[];
locs=[];

for m=2:n
    if v(m)-v(m-1)>0 && v(m)-v(m+1)>0
        vals = [vals;v(m)];
        locs = [locs;m];
    end
end
figure; plot(v);
hold on;
plot(locs,vals,'ro');