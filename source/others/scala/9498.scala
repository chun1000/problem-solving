//브론즈

object Main {
  def main(args: Array[String]): Unit = {
    var inputs = (scala.io.StdIn.readLine() split " " take 1 map (_.toInt))
    val score = inputs(0)

    if(score < 60) println("F")
    else if (score == 100) println("A")
    else println(('A'.toInt + 9 - (score / 10)).toChar)
  }
}