#include <stdio.h>
#include "funcao.h"
#include <gtest/gtest.h>


TEST(retorna_n_arabico, para_simbolo_no_0)
{
	EXPECT_EQ(-1,retorna_n_arabico("XXXXX"));
	EXPECT_EQ(-1,retorna_n_arabico("XLXLXL")); 
	EXPECT_EQ(-1,retorna_n_arabico("CCCCII")); 
	EXPECT_EQ(-1,retorna_n_arabico("IIII")); 
}

int main(int argc, char**argv)
{

	::testing::InitGoogleTest(&argc, argv);

	return  RUN_ALL_TESTS();
}