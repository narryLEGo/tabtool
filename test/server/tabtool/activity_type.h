﻿//THIS FILE IS GENERATED BY tabtool, DO NOT EDIT IT!
//GENERATE TIME [2018/1/19 15:42:21]
#pragma once
namespace activity_type {
	enum activity_type {
		success = 0, //成功-通用
		failed = 1, //失败-通用
	};
	inline char const* activity_type_to_string(int val) {
		switch(val) {
			case success:{ return "success";}
			case failed:{ return "failed";}
			default:{ return "";}
		}
	};
}