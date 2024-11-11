def prime(n)
  return false if n == 0 or n == 1
  (2..n-1).each { |i|
    return false if n % i == 0
  }
  true
end

def factorization(n)
  factor = 2
  factors = Array.new
  while n > 1
    while n % factor == 0
      factors.push(factor)
      n /= factor
    end
    factor += 1
  end
  factors
end

n = gets.to_i
if prime(factorization(n).sum)
  puts "tak"
else
  puts "nie"
end
