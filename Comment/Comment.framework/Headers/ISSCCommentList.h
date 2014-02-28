//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "ISSCComment.h"

/**
 *	@brief	更新评论列表返回事件
 */
typedef void(^SSCUpdateCommentListResultEvent) (SSResponseState state, NSError *error);

/**
 *	@brief	获取评论详情返回事件
 */
typedef void(^SSCGetCommentDetailResultEvent) (SSResponseState state, NSError *error);

/**
 *	@brief	评论列表
 */
@protocol ISSCCommentList <NSObject>

/**
 *	@brief	获取列表数据
 *
 *	@return	评论数组
 */
- (NSArray *)data;

/**
 *	@brief	获取排序规则
 *
 *	@return	排序规则
 */
- (NSComparator)order;

/**
 *	@brief	设置列表排序规则
 *
 *	@param 	order 	排序规则
 */
- (void)setOrder:(NSComparator)order;

/**
 *	@brief	从服务器请求新的评论列表（只包含ID和部分信息）
 *
 *	@param 	result 	返回事件
 */
- (void)update:(SSCUpdateCommentListResultEvent)resultHandler;

/**
 *	@brief	根据评论ID列表获取评论详情
 *
 *	@param 	ids 	评论ID列表
 *  @param  resultHandler  返回事件回调
 */
- (void)getCommentsDetailWithIds:(NSArray *)ids
                          result:(SSCGetCommentDetailResultEvent)resultHandler;

@end
