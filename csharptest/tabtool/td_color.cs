﻿//THIS FILE IS GENERATED BY tabtool, DO NOT EDIT IT!
//GENERATE TIME [2018/1/19 15:50:54]

using System.Collections;
using System.Collections.Generic;
using System.Data;

namespace game_data {
public class td_color_item {
	public int color_id;
};

public class td_color : TableManager<td_color_item, td_color> {
	public override bool Load() {
		TableReader tr = new TableReader();
		DataReader dr = new DataReader();
		DataTable dt = tr.ReadFile(MyConfig.WorkDir+"Color.txt");
		foreach(DataRow row in dt.Rows) {
			var item = new td_color_item();
			item.color_id = dr.GetValue<int>(row["color_id"].ToString());
			m_Items[item.color_id] = item;
		}
		return true;
	}
}
}

