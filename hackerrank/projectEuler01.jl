function sumToNDigits(x)
    return x*(x+1)/2
end

t = parse(UInt128, strip(readline(stdin)))

for t_itr = 1:t
    n = parse(UInt128, strip(readline(stdin)))
    d3 = div(n-1, 3)
    d5 = div(n-1, 5)
    d15 = div(n-1, 15)
    sum3 = 3*sumToNDigits(d3)
    sum5 = 5*sumToNDigits(d5)
    sum15 = 15*sumToNDigits(d15)
    sum = sum3 + sum5 - sum15 
    println(sum)   
    # println(UInt128(sum))
end

exit()