//브론즈 문제

object Main {
  def main(args: Array[String]): Unit = {
    val N = scala.io.StdIn.readLine().toInt
    val inputs = scala.io.StdIn.readLine() split " " map (_.toInt)

    val M = inputs.max.toDouble

    var ans = 0.0;
    for(input <- inputs) {
      val new_score = input/M*100
      ans += new_score;
    }

    print(ans/N)
  }
}