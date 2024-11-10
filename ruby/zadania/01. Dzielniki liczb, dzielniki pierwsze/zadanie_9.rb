def prime(n)
  return false if n == 0 or n == 1
  for i in 2..n-1
    return false if n % i == 0
  end
  true
end

for i in 3..1000
  if prime(i) and prime(i+2)
    print i, " ", i+2, "\n"
  end
end