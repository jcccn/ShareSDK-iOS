//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SSCommentTypeDef.h"

/**
 *	@brief	视图描述
 */
@interface SSCViewDesc : NSObject

/**
 *	@brief	导航栏背景图
 */
@property (nonatomic,retain) UIImage *navigationBarBackgroundImage;

/**
 *	@brief	导航栏背景颜色
 */
@property (nonatomic,retain) UIColor *navigationBarBackgroundColor;

/**
 *	@brief	评论列表视图将要显示事件
 */
@property (nonatomic,copy) SSCViewWillDiplayEvent commentListViewWillDisplayHandler;

/**
 *	@brief	帐号视图将要显示事件
 */
@property (nonatomic,copy) SSCViewWillDiplayEvent accountViewWillDisplayHandler;

/**
 *	@brief	评论视图将要显示事件
 */
@property (nonatomic,copy) SSCViewWillDiplayEvent commentViewWillDisplayHandler;

@end
