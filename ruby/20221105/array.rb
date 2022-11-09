ary1 = Array.new(3)
p(ary1)
ary2 = Array.new(3, "Red")
p(ary2)
puts(ary1.length)
ary3 = ["赤", nil, "青"]
puts(ary3.length)
puts(ary3.count{|item| !item.nil?})
ary3[3] = "緑"
p(ary3)
ary3[6] = "黄"
p(ary3)
