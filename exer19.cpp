#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float n1,n2,n3,soma,media,prod;
	

		
	cout << "Informe 3 valores: " << endl;
	cin >> n1 >> n2 >> n3;

	soma = n1+n2+n3;
	media = (n1+n2+n3)/3;
	prod = n1*n2*n3;

	//LER O MAIOR VALOR	
	if (n1>=n2 && n1>=n3)
	{
		cout << n1 << " é o maior valor" << endl;
	}
	
	else if (n2>=n1 && n2>=n3)
	{
		cout << n2 << " é o maior valor" << endl;
	}

	else if (n3>=n1 && n3>=n2)
	{
		cout << n3 << " é o maior valor" << endl;
	}

	else
		
	{
		return 0;
	}

	//LER O MENOR VALOR	
	if (n1<=n2 && n1<=n3)
	{
		cout << n1 << " é o menor valor" << endl;
	}
	
	else if (n2<=n1 && n2<=n3)
	{
		cout << n2 << " é o menor valor" << endl;
	}

	else if (n3<=n1 && n3<=n2)
	{
		cout << n3 << " é o menor valor" << endl;
	}

	else
		
	{
		return 0;
	}

	
	

	cout << "A soma dos valores é: ";
	cout << soma << endl;
	
	cout << "A média dos valores é: ";
	cout << media << endl;

	cout << "O produto dos valores é: ";
	cout << prod << endl;

	


	return 0;
}
