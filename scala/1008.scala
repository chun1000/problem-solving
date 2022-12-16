//Bronze 문제.
//스칼라의 스트링 포맷팅과 캐스팅 학습.

object Main {
  def main(args: Array[String]): Unit = {
    var input = (scala.io.StdIn.readLine() split " " take 2 map (_.toInt));
    var ans = input(0).toDouble / input(1)
    println("%.20f".format(ans))
  }
}
