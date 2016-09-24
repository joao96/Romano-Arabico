#include <stdio.h>
#include "funcao.h"
#include <gtest/gtest.h>


TEST(retorna_indice_maior_simbolo, checa_indice)
{
	EXPECT_EQ(0,retorna_n_arabico("MDL")); // Dada a entrada "MDL", espera-se obter o retorno de 0.
	EXPECT_EQ(1,retorna_n_arabico("CMIV")); // Dada a entrada "CMIV", espera-se obter o retorno de 1.
	EXPECT_EQ(1,retorna_n_arabico("XCIX")); // Dada a entrada "XCIX", espera-se obter o retorno de 1.
	EXPECT_EQ(0,retorna_n_arabico("LXXVI")); // Dada a entrada "LXXVI", espera-se obter o retorno de 0.
}

int main(int argc, char**argv)
{

	::testing::InitGoogleTest(&argc, argv);

	return  RUN_ALL_TESTS();
}