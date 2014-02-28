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
 *	@brief	过滤事件，当条件达到时触发
 */
typedef void(^SSCFilteredEvent)();

/**
 *	@brief	内容过滤器，用于在提交评论内容时对内容进行过滤。
 */
@protocol ISSCContentFilter <NSObject>

/**
 *	@brief	过滤内容
 *
 *	@param 	content 	内容
 *
 *	@return	YES 表示被过滤内容，NO 表示允许提交内容
 */
- (BOOL)filteringContent:(NSString *)content;

/**
 *	@brief	设置过滤事件处理器
 *
 *	@param 	handler 	事件处理器
 */
- (void)setFilteredHandler:(SSCFilteredEvent)handler;

/**
 *	@brief	过滤事件，当达到过滤条件时触发
 */
- (void)onFiltered;

/**
 *	@brief	获取下一个内容过滤器
 *
 *	@return	内容过滤器
 */
- (id<ISSCContentFilter>)next;

/**
 *	@brief	设置下一个内容过滤器
 *
 *	@param 	next 	内容过滤器
 */
- (void)setNext:(id<ISSCContentFilter>)next;


@end
