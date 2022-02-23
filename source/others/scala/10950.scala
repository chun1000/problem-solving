object Main {
  def main(args: Array[String]): Unit = {
    val T = scala.io.StdIn.readLine().toInt

    for(i <- 0 until T) {
      val inputs = scala.io.StdIn.readLine() split " " map (_.toInt)
      val A = inputs(0)
      val B = inputs(1)
      println(A+B)
  }
  }
}