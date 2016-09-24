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

/**
 \brief Função da biblioteca "gtest.h" que será usada como ferramenta para automatizar os testes das DEZENAS.
*/

TEST(retorna_n_arabico, DEZENAS)
{
	EXPECT_EQ(13,retorna_n_arabico("XIII")); // Dada a entrada "XIII", espera-se obter o retorno de 13.
	EXPECT_EQ(15,retorna_n_arabico("XV")); // Dada a entrada "XV", espera-se obter o retorno de 15.
	EXPECT_EQ(19,retorna_n_arabico("XIX")); // Dada a entrada "XIX", espera-se obter o retorno de 19.
	EXPECT_EQ(14,retorna_n_arabico("XIV")); // Dada a entrada "XIV", espera-se obter o retorno de 14.
	EXPECT_EQ(20,retorna_n_arabico("XX")); // Dada a entrada "XX", espera-se obter o retorno de 20.
	EXPECT_EQ(36,retorna_n_arabico("XXXVI")); // Dada a entrada "XXXVI", espera-se obter o retorno de 36.
	EXPECT_EQ(39,retorna_n_arabico("XXXIX")); // Dada a entrada "XXXIX", espera-se obter o retorno de 39.
	EXPECT_EQ(44,retorna_n_arabico("XLIV")); // Dada a entrada "XLIV", espera-se obter o retorno de 44.

}
/**
 \brief Função da biblioteca "gtest.h" que será usada como ferramenta para automatizar os testes das DEZENAS.
*/
TEST(retorna_n_arabico, DEZENAS_2)
{
	EXPECT_EQ(80,retorna_n_arabico("LXXX")); // Dada a entrada "LXXX", espera-se obter o retorno de 80.
	EXPECT_EQ(69,retorna_n_arabico("LXIX")); // Dada a entrada "LXIX", espera-se obter o retorno de 69.
	EXPECT_EQ(59,retorna_n_arabico("LIX")); // Dada a entrada "LIX", espera-se obter o retorno de 59.
	EXPECT_EQ(55,retorna_n_arabico("LV")); // Dada a entrada "LV", espera-se obter o retorno de 55.
	EXPECT_EQ(65,retorna_n_arabico("LXV")); // Dada a entrada "LXV", espera-se obter o retorno de 65.
	EXPECT_EQ(79,retorna_n_arabico("LXXIX")); // Dada a entrada "LXXIX", espera-se obter o retorno de 79.
	EXPECT_EQ(78,retorna_n_arabico("LXXVIII")); // Dada a entrada "LXXVIII", espera-se obter o retorno de 78.

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