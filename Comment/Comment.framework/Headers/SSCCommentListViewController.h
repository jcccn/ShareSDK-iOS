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
#import "SSCShareDesc.h"
#import "SSCViewDesc.h"

/**
 *	@brief	评论列表视图控制器
 */
@interface SSCCommentListViewController : UIViewController

/**
 *	@brief	分享操作相关的设置
 */
@property (nonatomic,retain) SSCShareDesc *shareDesc;

/**
 *	@brief	视图相关描述
 */
@property (nonatomic,retain) SSCViewDesc *viewDesc;

/**
 *	@brief	初始化评论列表视图控制器
 *
 *	@param 	contentId 	内容标识
 *  @param  title   标题
 *  @param  contentView 内容视图
 *
 *	@return	视图控制器对象
 */
- (id)initWithContentId:(NSString *)contentId
                  title:(NSString *)title
            contentView:(UIView *)contentView;

/**
 *	@brief	设置帐号来源，表示允许用户使用哪些平台进行登录授权来进行评论。默认为nil，表示使用ShareSDK中初始化的平台作为帐号来源。
 *
 *	@param 	platforms 	平台列表，由ShareType组成。
 */
- (void)setAccountSources:(NSArray *)platforms;

/**
 *	@brief	设置返回事件
 *
 *	@param 	handler 	事件处理器
 */
- (void)setBackEvent:(SSCCommentListPageBackEvent)handler;

@end
