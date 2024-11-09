def prime(n)
  return false if n == 0 or n == 1
  for i in 2..n-1 do
    return false if n % i == 0
  end
  true
end

n = gets.to_i

for i in 1..n do
  if n % i == 0
    if prime(i)
      print i, " "
    end
  end
end