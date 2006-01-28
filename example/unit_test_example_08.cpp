//  (C) Copyright Gennadiy Rozental 2005.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at 
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.

// Boost.Test
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

//____________________________________________________________________________//

// this way we could specify a number of expected failures in automatically registered test case
BOOST_AUTO_TEST_CASE_EXPECTED_FAILURES( test1, 1 )

BOOST_AUTO_TEST_CASE( test1 )
{
    BOOST_CHECK( 2 == 1 );
}

//____________________________________________________________________________//

// EOF