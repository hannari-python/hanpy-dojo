N = gets.chomp.to_i
a = gets.chomp.split.map(&:to_i)
b = gets.chomp.split.map(&:to_i)

killCount = 0
(0...N).each do |i|
  enableKill = b[i]

  if a[i] <= enableKill
    killCount += a[i]
    remain = enableKill - a[i]
    a[i] = 0

    if a[i+1] <= remain
      killCount += a[i+1]
      a[i+1] = 0
    else
      killCount += remain
      a[i+1] -= remain
    end

  else 
    killCount += enableKill
  end
end

puts killCount
