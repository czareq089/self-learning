a = gets.to_i
b = gets.to_i

def dividers(n)
  suma = 0
  for i in 1..n-1
    if n % i == 0
      suma += i
    end
  end
  suma
end

if a != b and dividers(a) == b and dividers(b) == a
  puts "tak"
else
  puts "nie"
end