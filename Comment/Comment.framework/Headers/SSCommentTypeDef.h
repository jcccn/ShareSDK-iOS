//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <ShareSDK/ShareSDK.h>

#ifndef Comment_SSCommentTypeDef_h
#define Comment_SSCommentTypeDef_h

@protocol ISSCTopic;
@protocol ISSCComment;

/**
 *	@brief	评论列表排序名称
 */
typedef enum
{
	SSCCommentListOrderNameLatest = 0, /**< 最新排序 */
	SSCCommentListOrderNameHot = 1 /**< 热门排序 */
}
SSCCommentListOrderName;

/**
 *	@brief	获取评论ID列表返回事件
 */
typedef void(^SSCGetCommentIdsResultEvent) (SSResponseState state, NSArray *commentIds, NSError *error);

/**
 *	@brief	获取评论信息返回事件
 */
typedef void(^SSCGetCommentInfoResultEvent) (SSResponseState state, NSArray *commentList, NSError *error);

/**
 *	@brief	获取主题信息返回事件
 */
typedef void(^SSCGetTopicResultEvent) (SSResponseState state, id<ISSCTopic> topic, NSError *error);

/**
 *	@brief	回复内容/评论返回事件
 */
typedef void(^SSCReplyResultEvent) (SSResponseState state, id<ISSCComment> comment, NSError *error);

/**
 *	@brief	称赞内容/评论返回事件
 */
typedef void(^SSCLikeResultEvent) (SSResponseState state, NSError *error);

/**
 *	@brief	分享内容/评论返回事件
 */
typedef void(^SSCShareResultEvent) (SSResponseState state, NSError *error);

/**
 *	@brief	评论列表页面返回事件，当点击页面工具栏的返回按钮时回调
 */
typedef void(^SSCCommentListPageBackEvent) ();

/**
 *	@brief	超过最大内容长度事件
 */
typedef void(^SSCContentOutOfMaxLengthEvent) ();

/**
 *	@brief	视图将要显示事件
 */
typedef void(^SSCViewWillDiplayEvent) (UIViewController *viewController);


#endif
