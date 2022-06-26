//브론즈, 스트링 포맷팅과 for문 학습.
object Main {
  def main(args: Array[String]): Unit = {
    val T = scala.io.StdIn.readLine().toInt
    for (i <- 1 to T) {
      val inputs = scala.io.StdIn.readLine() split " " map (_.toInt)
      val A = inputs(0)
      val B = inputs(1)
      println("Case #%d: %d" format(i, (A + B)))
    }
  }
}