package boj2448

import java.util.*

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    val n = scanner.nextInt()
    var list = MutableList<String>(n, {""})
    var height = 3
    var k = (Math.log((n / 3).toDouble()) / Math.log(2.toDouble())).toInt()
    val indent = "   "

    list[0] = "  *  "
    list[1] = " * * "
    list[2] = "*****"

    for (i in 0 until k) {
        for (j in 0 until height) {
            list[height + j] = list[j] + " " + list[j]

            for (indentLoop in 0 until height / 3) {
                list[j] = indent + list[j] + indent
            }
        }

        height += height
    }

    list.forEach { println(it) }
}