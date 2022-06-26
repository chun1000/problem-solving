//스칼라 기초 문법 브론즈
object Main {
  def main(args: Array[String]): Unit = {
    val inputs1 = scala.io.StdIn.readLine() split " " take 2 map (_.toInt)
    val L = inputs1(0)
    val P = inputs1(1)

    val inputs2 = scala.io.StdIn.readLine() split " " take 5 map (_.toInt)

    for(i <- inputs2) {
      print((i - L*P).toString + " ")
    }
  }
}