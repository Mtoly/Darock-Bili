//
//
//  ArticleView.swift
//  MeowBili
//
//  Created by memz233 on 2024/2/10.
//
//===----------------------------------------------------------------------===//
//
// This source file is part of the MeowBili open source project
//
//  Copyright (c) 2024 Darock Studio and the MeowBili project authors
// Licensed under GNU General Public License v3
//
// See https://darock.top/LICENSE.txt for license information
//
//===----------------------------------------------------------------------===//

import SwiftUI
import DarockKit
import SwiftSoup
#if !os(watchOS)
import WebKit
#endif

#if !os(watchOS)
struct ArticleView: View {
    var cvid: String
    var body: some View {
        WebView(url: URL(string: "https://www.bilibili.com/read/cv\(cvid)")!)
    }
}

struct ArticleView_Previews: PreviewProvider {
    static var previews: some View {
        ArticleView(cvid: "24554473")
    }
}
#endif