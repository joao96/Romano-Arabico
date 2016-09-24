#include <stdio.h>
#include "funcao.h"
#include <gtest/gtest.h>

/**
 \brief Função da biblioteca "gtest.h" que será usada como ferramenta para automatizar os testes das UNIDADES.
*/

TEST(retorna_n_arabico, UNIDADES)
{
	EXPECT_EQ(1,retorna_n_arabico("I")); // Dada a entrada "I", espera-se obter o retorno de 1.
	EXPECT_EQ(2,retorna_n_arabico("II")); // Dada a entrada "II", espera-se obter o retorno de 2.
	EXPECT_EQ(3,retorna_n_arabico("III")); // Dada a entrada "III", espera-se obter o retorno de 3.
	EXPECT_EQ(4,retorna_n_arabico("IV")); // Dada a entrada "IV", espera-se obter o retorno de 4.
	EXPECT_EQ(5,retorna_n_arabico("V")); // Dada a entrada "V", espera-se obter o retorno de 5.
	EXPECT_EQ(6,retorna_n_arabico("VI")); // Dada a entrada "VI", espera-se obter o retorno de 6.
	EXPECT_EQ(7,retorna_n_arabico("VII")); // Dada a entrada "VII", espera-se obter o retorno de 7.
	EXPECT_EQ(8,retorna_n_arabico("VIII")); // Dada a entrada "VIII", espera-se obter o retorno de 8.
	EXPECT_EQ(9,retorna_n_arabico("IX")); // Dada a entrada "IX", espera-se obter o retorno de 9.
	EXPECT_EQ(10,retorna_n_arabico("X")); // Dada a entrada "X", espera-se obter o retorno de 10.
}

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