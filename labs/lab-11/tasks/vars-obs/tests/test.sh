#!/bin/bash
# SPDX-License-Identifier: BSD-3-Clause

# shellcheck disable=SC1091
source graded_test.inc.sh


if test -z "$SRC_PATH"; then
    SRC_PATH=./../support
fi

if test -z "$TEST_PATH"; then
    TEST_PATH="${PWD}"
fi


test_vars-obs()
{
    cd "$SRC_PATH" || exit 1
    make clean > /dev/null 2>&1
    make > /dev/null
    ./main > main.out
    if grep -q "10" main.out && grep -q "33" main.out; then
        rm main.out
        make clean > /dev/null 2>&1
        exit 0
    else
        make clean > /dev/null 2>&1
        rm main.out
        exit 1
    fi
}


run_test test_vars-obs 100
