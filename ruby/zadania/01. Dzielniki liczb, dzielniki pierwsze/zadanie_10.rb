def perfect(n)
  suma = 0
  for i in 1..n-1
    if n % i == 0
      suma += i
    end
  end
  return true if suma == n
  false
end

for i in 1..1000
  if perfect(i)
    puts i
  end
end