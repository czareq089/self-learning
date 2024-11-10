def prime(n)
  return false if n == 0 or n == 1
  for i in 2..n-1 do
    return false if n % i == 0
  end
  true
end

a = gets.to_i
b = gets.to_i

if b - a == 2 and prime(b) and prime(a)
  puts "tak"
else
  puts "nie"
end

