#!/bin/bash
#
# this file running tests.
#


TESTS=`find ./tst/ -executable -type f`

for test in ${TESTS}; 
do
	${test}   
done;

