//  (C) Copyright Gennadiy Rozental 2001-2015.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at 
//  http://www.boost.org/LICENSE_1_0.txt)
//
//  See http://www.boost.org/libs/test for the library home page.
//

//[snippet15
#define __BOOST_TEST_MODULE__ const_string test
#include <boost/test/unit_test.hpp>

__BOOST_AUTO_TEST_CASE__( constructors_test )
{
  const_string cs0( "" );                                                 // 1 //
  __BOOST_CHECK_EQUAL__( cs0.length(), (size_t)0 );
  __BOOST_CHECK__( cs0.is_empty() );

  const_string cs01( NULL );                                              // 2 //
  BOOST_CHECK_EQUAL( cs01.length(), (size_t)0 );
  BOOST_CHECK( cs01.is_empty() );

  const_string cs1( "test_string" );                                      // 3 //
  BOOST_CHECK_EQUAL( std::strcmp( cs1.data(), "test_string" ), 0 );
  BOOST_CHECK_EQUAL( cs1.length(), std::strlen("test_string") );

  std::string s( "test_string" );                                         // 4 //
  const_string cs2( s );
  BOOST_CHECK_EQUAL( std::strcmp( cs2.data(), "test_string" ), 0 );

  const_string cs3( cs1 );                                                // 5 //
  BOOST_CHECK_EQUAL( std::strcmp( cs3.data(), "test_string" ), 0 );

  const_string cs4( "test_string", 4 );                                   // 6 //
  BOOST_CHECK_EQUAL( std::strncmp( cs4.data(), "test", cs4.length() ), 0 );

  const_string cs5( s.data(), s.data() + s.length() );                    // 7 //
  BOOST_CHECK_EQUAL( std::strncmp( cs5.data(), "test_string", cs5.length() ), 0 );

  const_string cs_array[] = { "str1", "str2" };                           // 8 //
  BOOST_CHECK_EQUAL( cs_array[0], "str1" );
  BOOST_CHECK_EQUAL( cs_array[1], "str2" );
}
//]