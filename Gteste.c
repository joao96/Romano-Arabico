#include <stdio.h>
#include "funcao.h"
#include <gtest/gtest.h>


TEST(retorna_validez_de_caracteres, checa_todos_caracteres_validos)
{
	EXPECT_EQ(1,retorna_n_arabico("XX")); // Dada a entrada "XX", espera-se obter o retorno de 1.
	EXPECT_EQ(1,retorna_n_arabico("LX")); // Dada a entrada "LX", espera-se obter o retorno de 1.
	EXPECT_EQ(-1,retorna_n_arabico("AQX")); // Dada a entrada "AQX", espera-se obter o retorno de -1.
	EXPECT_EQ(-1,retorna_n_arabico("MDS")); // Dada a entrada "MDS", espera-se obter o retorno de -1.

}


int main(int argc, char**argv)
{

	::testing::InitGoogleTest(&argc, argv);

	return  RUN_ALL_TESTS();
}