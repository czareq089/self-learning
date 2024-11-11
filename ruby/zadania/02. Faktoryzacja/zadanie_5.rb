def prime(n)
  return false if n == 0 or n == 1
  (2..n-1).each { |i|
    return false if n % i == 0
  }
  true
end

def digit_sum(n)
  sum = 0
  while n > 0
    remainder = n % 10
    sum += remainder
    n /= 10
  end
  sum
end

def factorization(n)
  sum = 0
  factor = 2
  while n > 1
    while n % factor == 0
      sum += digit_sum(factor)
      n /= factor
    end
    factor += 1
  end
  sum
end


n = gets.to_i
(!prime(n) and digit_sum(n) == factorization(n)) ? puts("tak") : puts("nie")