class Car
    def accele(time)
        puts(time.to_s+"秒間アクセルを踏みました")
    end
    def break
        puts("ブレーキを踏みました")
    end
end
class SportsCar < Car
    def openRoof
        puts("ルーフを開けました")
    end
    def accele(time)
        super(time)
        puts("加速しました")
    end
end
class FamilyCar < Car
    def reclining
        puts("シートをリクライニングしました")
    end
end
sc = SportsCar.new()
sc.openRoof
sc.accele(1)
fc = FamilyCar.new()
fc.reclining
fc.break