//
//  SlideButton.h
//  SZCRM
//
//  Created by 曹世鑫 on 2018/12/19.
//  Copyright © 2018 曹世鑫. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^SlickBtnClick)(UIButton *sender);

NS_ASSUME_NONNULL_BEGIN
//吸附动画类型
typedef NS_ENUM(NSInteger, MNAssistiveTouchType) {
    MNAssistiveTypeNull = 0, //空设置，内部处理使用，外面不用设置此枚举，功能和MNAssistiveTypeNone一致
    MNAssistiveTypeNone,   //自动识别贴边
    MNAssistiveTypeNearLeft,   //拖动停止之后，自动向左贴边
    MNAssistiveTypeNearRight,  //拖动停止之后，自动向右贴边
};

@interface FBSlideButton : UIButton
//按钮点击事件
@property (nonatomic, copy)SlickBtnClick btnClick;


/**
 实例化对象

 @return 返回实例化对象
 */
+ (instancetype)shareSlideBtn;

/**
 设置吸附方式，默认不设置的话显示MNAssistiveTypeNone类型

 @param type 吸附类型
 */
+ (void)showWithType:(MNAssistiveTouchType)type;

//初始化的时候编写仅在Debug模式下显示，发布release环境就没有
+ (void)showDebugMode;

//任何模式都显示floatBtn
+ (void)show;

//移除floatBtn在界面显示
+ (void)hidden;
@end

NS_ASSUME_NONNULL_END
