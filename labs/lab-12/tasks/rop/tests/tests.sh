#!/bin/bash
# SPDX-License-Identifier: BSD-3-Clause

# shellcheck disable=SC1091
source ./graded_test.inc.sh

if test -z "$SRC_PATH"; then
    SRC_PATH=../support
fi

EXPLOIT="$SRC_PATH/exploit.sh"
BINARY="$SRC_PATH/rop"

test_payload()
{
    flag="HSI_{you_talking_to_me?}"

    output=$($EXPLOIT | $BINARY | grep "HSI")

    echo

    if [[ "$output" == "$flag" ]]; then
        res=0
    else
        res=1
    fi

    return $res
}

run_test test_payload 100
