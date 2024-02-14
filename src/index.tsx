const TestModule = require('./NativeTestModule').default;

export function multiply(a: number, b: number): number {
  return TestModule.multiply(a, b);
}
