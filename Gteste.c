#include <stdio.h>
#include "funcao.h"
#include <gtest/gtest.h>


TEST(retorna_n_arabico, para_simbolo_no_0)
{
	EXPECT_EQ(1550,retorna_n_arabico("MDL"));
	EXPECT_EQ(19,retorna_n_arabico("XIX")); 
	EXPECT_EQ(119,retorna_n_arabico("CXIX")); 
	EXPECT_EQ(76,retorna_n_arabico("LXXVI")); 
}

int main(int argc, char**argv)
{

	::testing::InitGoogleTest(&argc, argv);

	return  RUN_ALL_TESTS();
}