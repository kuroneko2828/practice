s1 = 'こんにちは'
s2 = "Hello"
print(s1)
puts(s2)
puts('-----')
print(s1,s2,"\n")
puts(s1+s2)
puts(s1,s2)
puts('-----')
puts("こんにちは\nHello")
puts('こんにちは\nHello')
puts('\'こんにちは\'')
puts('-----')
puts(%Q{こんにちは\n"Hello"})
puts(%q{こんにちは\n"Hello"})
puts('-----')
s = <<"EOS"
こんにちは
Hello\nNiHao
EOS
puts(s)
s = <<'EOS'
こんにちは
Hello\nNiHao
EOS
puts(s)
puts(<<"EOS")
こんにちは
Hello
NiHao
EOS
puts("-----")
name = "kuroneko"
puts("名前は#{name}です。")
puts("12-5=#{12-5}")
puts("-----")
s1 = "こんにちは"
s2 = "Hello"
puts(s1+s2)
puts("-----")
puts("Hello"*3)
puts("-----")
s = "こんにちは"
puts(s)
puts(s.object_id)
s << "Hello"
puts(s)
puts(s.object_id)
s.concat("NiHao")
puts(s)
puts(s.object_id)