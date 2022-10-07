function output=mymatmin(matrix)
[r, c]=size(matrix);
output=zeros(1,c);
for j=1:c
    output(1,j)=min(matrix(:,j));
end