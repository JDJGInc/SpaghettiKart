export function fib(n: i32): i32 {
  if (n <= 1) {
      return n;
  }
  return fib(n - 1) + fib(n - 2);
}
