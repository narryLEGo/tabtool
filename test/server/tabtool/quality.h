﻿//THIS FILE IS GENERATED BY tabtool, DO NOT EDIT IT!
//GENERATE TIME [2018/1/19 15:42:21]
#pragma once
namespace quality {
	enum quality {
		blue_one = 1, //蓝+1
		blue_two = 2, //蓝+2
		blue_three = 3, //蓝+3
		blue_four = 4, //蓝+4
		xxxx = 5, //传说
	};
	inline char const* quality_to_string(int val) {
		switch(val) {
			case blue_one:{ return "blue_one";}
			case blue_two:{ return "blue_two";}
			case blue_three:{ return "blue_three";}
			case blue_four:{ return "blue_four";}
			case xxxx:{ return "xxxx";}
			default:{ return "";}
		}
	};
}
