﻿//THIS FILE IS GENERATED BY tabtool, DO NOT EDIT IT!
//GENERATE TIME [2018/1/19 15:42:21]
#pragma once
namespace resource_type {
	enum resource_type {
		rt_gold = 1, //金币
		rt_diamond = 2, //钻石
		rt_stamina = 3, //体力
		rt_exp = 4, //经验
	};
	inline char const* resource_type_to_string(int val) {
		switch(val) {
			case rt_gold:{ return "rt_gold";}
			case rt_diamond:{ return "rt_diamond";}
			case rt_stamina:{ return "rt_stamina";}
			case rt_exp:{ return "rt_exp";}
			default:{ return "";}
		}
	};
}
