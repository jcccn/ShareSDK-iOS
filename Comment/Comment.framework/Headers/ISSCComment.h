//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <ShareSDK/ShareSDK.h>
#import "SSCommentTypeDef.h"

/**
 *	@brief	评论信息
 */
@protocol ISSCComment <NSObject>

/**
 *	@brief	获取评论标识
 *
 *	@return	标识
 */
- (NSString *)Id;

/**
 *	@brief	获取社交平台类型
 *
 *	@return	平台类型
 */
- (ShareType)platType;

/**
 *	@brief	获取评论人性别, 0 男 1 女 2 未知
 *
 *	@return	性别。
 */
- (NSInteger)gender;

/**
 *	@brief	获取评论人名称
 *
 *	@return	评论人名称
 */
- (NSString *)nickname;

/**
 *	@brief	获取评论人头像
 *
 *	@return	评论人头像
 */
- (NSString *)icon;

/**
 *	@brief	获取认证类型
 *
 *	@return	认证类型
 */
- (NSInteger)verifyType;

/**
 *	@brief	获取称赞数
 *
 *	@return	称赞数
 */
- (NSInteger)likeCount;

/**
 *	@brief	获取省份／国家
 *
 *	@return	省份／国家
 */
- (NSString *)region;

/**
 *	@brief	获取评论内容
 *
 *	@return	评论内容
 */
- (NSString *)content;

/**
 *	@brief	获取评论时间
 *
 *	@return	评论时间
 */
- (NSTimeInterval)datetime;

/**
 *	@brief	获取楼层列表
 *
 *	@return	楼层列表
 */
- (NSArray *)floors;

/**
 *	@brief	获取是否称赞标识
 *
 *	@return	YES 表示称赞，NO 表示尚未称赞
 */
- (BOOL)liked;

/**
 *	@brief	获取评论状态
 *
 *	@return	－2 驳回 －1 垃圾评论 1 审核通过
 */
- (NSInteger)status;

@end
