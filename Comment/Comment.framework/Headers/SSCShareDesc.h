//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>

/**
 *	@brief	分享相关描述
 */
@interface SSCShareDesc : NSObject

/**
 *	@brief	分享平台列表，用于显示在菜单中的平台列表，默认为初始化的所有平台
 */
@property (nonatomic,retain) NSArray *menuItems;

/**
 *	@brief	分享内容实体
 */
@property (nonatomic,retain) id<ISSContent> contentEntity;

/**
 *	@brief	授权选项
 */
@property (nonatomic,retain) id<ISSAuthOptions> authOptions;

/**
 *	@brief	分享选项
 */
@property (nonatomic,retain) id<ISSShareOptions> shareOptions;

/**
 *	@brief	分享事件处理器
 */
@property (nonatomic,copy) SSPublishContentEventHandler shareEventHandler;


@end
