use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).expect("Failed to readline");

    let n: i64 = input.trim().parse().expect("Failed to parse");
    let mut total_sum = 0;

    for i in 1..n + 1 {
        total_sum += n / i * i;
    }

    println!("{}", total_sum);
}
