#include <stdio.h>
#include "funcao.h"
#include <gtest/gtest.h>


TEST(checa_existencia_romanTESTE, Invalidez)
{

	EXPECT_EQ(-1,retorna_n_arabico("IIII")); // Dada a entrada "IIII", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("XXXX")); // Dada a entrada "XXXX", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("XXXXX")); // Dada a entrada "XXXX", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("CCCC")); // Dada a entrada "CCCC", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("VIIII")); // Dada a entrada "VIIII", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("IIX")); // Dada a entrada "IIX"", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("CMMXII")); // Dada a entrada "CMMXII", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("XIXIX")); // Dada a entrada "XIXIX", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("XIVIXI")); // Dada a entrada "XIVIXI", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("XIIXI")); // Dada a entrada "XIIXI", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("JHXXI")); // Dada a entrada "JHXXI", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("DXXWQV")); // Dada a entrada "DXXWQV", espera-se obter o retorno de -1.

}

int main(int argc, char**argv)
{

	::testing::InitGoogleTest(&argc, argv);

	return  RUN_ALL_TESTS();
}