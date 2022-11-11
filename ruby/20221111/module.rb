module Greeting
    def hello
        puts("hello")
    end
end

class Hello
    include Greeting
    def dispGreeting
        hello
    end
end

hello = Hello.new
hello.dispGreeting

puts("-----")

module CalcModule
    def getMinValue(x, y)
        if x < y
            return x
        else
            return y
        end
    end
    module_function :getMinValue
end
puts(CalcModule.getMinValue(10,8))

puts("-----")

include CalcModule
puts(getMinValue(2,5))

puts("-----")

module CalcModule
    def getMinValue(x, y)
        if x < y
            return x
        else
            return y
        end
    end
    module_function :getMinValue
    def heikin(x, y)
        return (x+y)/2
    end
end

class Dentaku
    include CalcModule
    def dispValue(x, y)
        num = heikin(x, y)
        puts("平均は"+num.to_s)
    end
end

dentaku = Dentaku.new
dentaku.dispValue(10, 4)