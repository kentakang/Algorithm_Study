package boj14646

import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) {
    val bufferedReader = BufferedReader(InputStreamReader(System.`in`))
    val n = bufferedReader.readLine().toInt()
    val list = MutableList(n, {0})
    val inputs = bufferedReader.readLine().split(" ")
    var cnt = 0
    var maxCount = 0

    inputs.forEach {
        when (list[it.toInt() - 1]) {
            0 -> {
                list[it.toInt() - 1] = 1
                cnt++
            }
            1 -> {
                list[it.toInt() - 1] = 2
                cnt--
            }
        }

        if (cnt > maxCount) {
            maxCount = cnt
        }
    }

    println(maxCount)
}
