#include <iostream>

using namespace std;

int main() {
	unsigned char unsigned_char{ 53u };

	// 2 Bytes
	short short_var{ -32765 };
	short int short_int{455};
	signed short signed_short{122};
	signed short int signed_short_int{ -456 };
	unsigned short int unsigned_short_int{ 5678U };

	// 4 Bytes
	const int int_var{ 55 };
	signed signed_var{ 66 };
	signed int signed_int{ 77 };
	unsigned int unsigned_int{ 555U };

	// 4 or 8 Bytes
	long long_var{ 88L };
	long int long_int{ 33L };
	signed long signed_long{ 44l };
	signed long int signed_long_int{ 44l };
	unsigned long int unsigned_long_int{ 555ul };

	long long long_long{ 888ll };
	long long int long_long_int{ 999ll };
	signed long long signed_long_long{ 444ll };
	signed long long int signed_long_long_int{ 1234ll };

	unsigned int prize{ 1'500'00'0u };
	cout << "The prize is : " << prize << endl;

	cout << "signed_long_long_int : " << signed_long_long_int << endl;

	//unsigned char distance{ 555u };
	//unsigned int game_score{ -20 };

	//unsigned char distance{ 555u };
	//unsigned int game_score{ -20 };

	unsigned int hex_number{ 0x22BU };
	int hex_number2{ 0x400 };
	cout << "The hex number is : " << hex_number << endl;
	cout << "The hex number2 is : " << hex_number2 << endl;

	int black_color{ 0xffffff };
	cout << "Black color is : " << black_color << endl;





	return 0;
}

