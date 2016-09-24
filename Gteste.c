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

/**
 \brief Função da biblioteca "gtest.h" que será usada como ferramenta para automatizar os testes das CENTENAS.
*/
TEST(retorna_n_arabico, CENTENAS)
{

	EXPECT_EQ(414,retorna_n_arabico("CDXIV")); // Dada a entrada "CDXIV", espera-se obter o retorno de 414.
	EXPECT_EQ(148,retorna_n_arabico("CXLVIII")); // Dada a entrada "CXLVIII", espera-se obter o retorno de 148.
	EXPECT_EQ(188,retorna_n_arabico("CLXXXVIII")); // Dada a entrada "CLXXXVIII", espera-se obter o retorno de 188.
	EXPECT_EQ(394,retorna_n_arabico("CCCXCIV")); // Dada a entrada "CCCXCIV", espera-se obter o retorno de 394.
	EXPECT_EQ(468,retorna_n_arabico("CDLXVIII")); // Dada a entrada "CDLXVIII", espera-se obter o retorno de 468.
	EXPECT_EQ(584,retorna_n_arabico("DLXXXIV")); // Dada a entrada "DLXXXIV", espera-se obter o retorno de 584.
	EXPECT_EQ(971,retorna_n_arabico("CMLXXI")); // Dada a entrada "DLXXXIV", espera-se obter o retorno de 971.
	EXPECT_EQ(896,retorna_n_arabico("DCCCXCVI")); // Dada a entrada "DLXXXIV", espera-se obter o retorno de 896.
	EXPECT_EQ(905,retorna_n_arabico("CMV")); // Dada a entrada "DLXXXIV", espera-se obter o retorno de 905.

}

/**
 \brief Função da biblioteca "gtest.h" que será usada como ferramenta para automatizar os testes de MILHARES.
*/
TEST(retorna_n_arabico, MILHARES)
{
	EXPECT_EQ(2000,retorna_n_arabico("MM")); // Dada a entrada "MM", espera-se obter o retorno de 905.
	EXPECT_EQ(1500,retorna_n_arabico("MD")); // Dada a entrada "MD", espera-se obter o retorno de 905.
	EXPECT_EQ(1537,retorna_n_arabico("MDXXXVII")); // Dada a entrada "MDXXXVII", espera-se obter o retorno de 905.
	EXPECT_EQ(1343,retorna_n_arabico("MCCCXLIII")); // Dada a entrada "MCCCXLIII", espera-se obter o retorno de 905.
	EXPECT_EQ(1492,retorna_n_arabico("MCDXCII")); // Dada a entrada "MCDXCII", espera-se obter o retorno de 905.
	EXPECT_EQ(2335,retorna_n_arabico("MMCCCXXXV")); // Dada a entrada "MMCCCXXXV", espera-se obter o retorno de 905.
	EXPECT_EQ(2549,retorna_n_arabico("MMDXLIX")); // Dada a entrada "MMDXLIX", espera-se obter o retorno de 905.
	EXPECT_EQ(2772,retorna_n_arabico("MMDCCLXXII")); // Dada a entrada "MMDCCLXXII", espera-se obter o retorno de 905.
	EXPECT_EQ(2913,retorna_n_arabico("MMCMXIII")); // Dada a entrada "MMCMXIII", espera-se obter o retorno de 905.

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