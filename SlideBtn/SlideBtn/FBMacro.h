
//
//  FBMacro.h
//  JSbrige
//
//  Created by 曹世鑫 on 2018/5/16.
//  Copyright © 2018年 郭晓琳. All rights reserved.
//

#ifndef FBMacro_h
#define FBMacro_h


//状态栏的高度
#define STATUSBARHEIGHT  [UIApplication sharedApplication].statusBarFrame.size.height

//tabbar高度
#define W_TabBarHeight ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)
//屏宽
#define W_WIDTH [UIScreen mainScreen].bounds.size.width
//屏高
#define H_HIGH  [UIScreen mainScreen].bounds.size.height

//当前app的版本号，version不是build
#define APPVERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]

//定义本地存储
#define USER_DEFAULTS [NSUserDefaults standardUserDefaults]

//定义是否是iphonex设备
#define kDevice_Is_iPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

//定义尺寸比率
#define SCALE [UIScreen mainScreen].bounds.size.width/375

//字体的型号
#define FONT_OF_SIZE(size) [UIFont systemFontOfSize:size*SCALE]


//判断设备是否是iPad
#define iPadDevice (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)


//系统判定
#define  IOS_VERSION        [[UIDevice currentDevice]systemVersion]


// 屏幕判定(X和XS)
#define KIsiPhoneXOrXS ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
// 屏幕判定(XS Max)
#define KIsiPhoneXSMax ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) : NO)
// 屏幕判定(XR)
#define KIsiPhoneXR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) : NO)


// 宽高比例
#define HeightScale      (H_HIGH / 568)
#define WidthScale       (W_WIDTH / 320)

// 6宽高比例
#define HeightScale6      (H_HIGH / 667)
#define WidthScale6       (W_WIDTH / 375)

//appstore的appid号
#define APPID  @"1195316265"

#endif /* FBMacro_h */
