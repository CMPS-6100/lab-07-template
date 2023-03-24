points=0

echo "Running cmdargs test (4 pts)"
echo

gcc -g ../src/cmdargs.c -o cmdargs
exit=$?
if [ $exit -eq 127 ] ; then
    echo "❌ cmdargs.c failed to compile"
fi

expected_output=`cat cmdargs_out.txt`
output=$(./cmdargs a b c)
exit=$?

if [ $exit -ne 0 ] ; then
  echo "❌ Program exited with exit status $exit"
fi

if [ "$output" == "$expected_output" ] ; then
  echo "✅ Output is correct"
  ((points=points+4))
  echo "Points: $points"
else
  echo "❌ Output doesn't match expected."
  echo "Expected:\n$expected_output"
  echo "Actual:\n$output"
  exit 1
fi

echo
echo "All tests passed."

exit 0
