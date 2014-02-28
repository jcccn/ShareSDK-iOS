//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <ShareSDK/ShareSDK.h>
#import "ISSCContentFilter.h"
#import "ISSCCommentList.h"
#import "SSCommentTypeDef.h"
#import "UIViewController+Comment.h"
#import "SSCCommentListView.h"
#import "ISSCComment.h"
#import "SSCCommentViewController.h"

/**
 *	@brief	评论称赞模块
 */
@interface Comment : NSObject

#pragma mark - 评论、称赞、分享（含UI）

/**
 *	@brief	显示评论视图
 *
 *	@param 	contentId 	内容唯一标识
 *	@param 	title 	标题
 *	@param 	comment 	被评论的评论内容，如果为nil，则表示对主题进行评论
 *  @param  resultHandler       返回事件回调
 *  
 *  @return 评论视图控制器
 */
+ (SSCCommentViewController *)commentViewWithContentId:(NSString *)contentId
                                                 title:(NSString *)title
                                               comment:(id<ISSCComment>)comment
                                                result:(SSCReplyResultEvent)resultHandler;

/**
 *	@brief	创建评论列表页面
 *
 *	@param 	contentId 	内容唯一标识
 *	@param 	title 	标题
 *
 *	@return	评论列表页面视图控制器
 */
+ (SSCCommentListViewController *)commentListViewPageWithContentId:(NSString *)contentId
                                                             title:(NSString *)title;

/**
 *	@brief	创建复合评论列表视图
 *
 *	@param 	contentId 	内容唯一标识
 *  @param  title   标题
 *	@param 	menuItems 	菜单项集合
 *	@param 	frame 	显示范围
 *
 *	@return	评论列表视图
 */
+ (SSCCommentListView *)complexCommentListViewWithContentId:(NSString *)contentId
                                                      title:(NSString *)title
                                                  menuItems:(NSArray *)menuItems
                                                      frame:(CGRect)frame;

/**
 *	@brief	创建评论列表视图
 *
 *	@param 	cotentId 	内容唯一标识
 *  @param  title   标题
 *	@param 	order 	排序方法
 *  @param  frame   显示范围
 *
 *	@return	评论列表视图
 */
+ (SSCCommentListView *)commentListViewWithContentId:(NSString *)contentId
                                               title:(NSString *)title
                                               order:(NSComparator)order
                                               frame:(CGRect)frame;
/**
 *	@brief	创建评论工具栏
 *
 *	@param 	contentId 	内容唯一标识
 *  @param  title   标题
 *  @param  frame   显示范围
 *
 *	@return	评论工具栏
 */
+ (SSCCommentToolbar *)commentToolbarWithContentId:(NSString *)contentId
                                             title:(NSString *)title
                                             frame:(CGRect)frame;

/**
 *	@brief	显示分享菜单
 *
 *	@param 	contentId 	内容唯一标识
 *	@param 	title 	标题
 *	@param 	comment 	评论信息对象，非nil，表示对评论进行分享，如果为nil，则表示对内容进行分享。
 *	@param 	contentEntity 	分享内容实体。用于定义各个平台分享评论时的内容。
 *  @param  resultHandler  分享返回事件处理
 */
+ (id<ISSShareActionSheet>)showShareActionSheetWithContentId:(NSString *)contentId
                                                       title:(NSString *)title
                                                     comment:(id<ISSCComment>)comment
                                               contentEntity:(id<ISSContent>)contentEntity
                                                      result:(SSPublishContentEventHandler)resultHandler;


#pragma mark - 评论、称赞、分享（无UI）

/**
 *	@brief	一键分享内容
 *
 *  @param  shareList   分享列表（邮件、短信、微信、QQ、Pinterest、Google+、打印、拷贝除外）
 *  @param  contentId   内容标识
 *  @param  title       标题
 *  @param  comment     评论信息对象，非nil，表示对评论进行分享，如果为nil，则表示对内容进行分享。
 *	@param 	contentEntity 	分享内容实体。用于定义各个平台分享评论时的内容。
 *	@param 	resultHandler 	返回事件
 */
+ (void)oneKeyShareContentWithShareList:(NSArray *)shareList
                              contentId:(NSString *)contentId
                                  title:(NSString *)title
                                comment:(id<ISSCComment>)comment
                          contentEntity:(id<ISSContent>)contentEntity
                                 result:(SSPublishContentEventHandler)resultHandler;

/**
 *	@brief	对内容／评论进行分享
 *
 *  @param  type        分享类型
 *	@param 	contentId 	内容唯一标识
 *	@param 	title 	标题
 *	@param 	comment 	评论信息对象，非nil，表示对评论进行分享，如果为nil，则表示对内容进行分享。
 *  @param  contentEntity   分享内容实体。用于定义各个平台分享评论时的内容。
 *	@param 	resultHandler 	状态处理器，对于分享过程中的状态变更由此回调进行捕获
 */
+ (void)shareContentWithType:(ShareType)type
                   contentId:(NSString *)contentId
                       title:(NSString *)title
                     comment:(id<ISSCComment>)comment
               contentEntity:(id<ISSContent>)contentEntity
                      result:(SSPublishContentEventHandler)resultHandler;

#pragma mark - 其他

/**
 *	@brief	设置用户信息,对于第三方应用如果有自己的用户系统可以调用此接口传入相关用户信息。一旦设置则此用户将作为评论、称赞用户。
 *
 *	@param 	uid 	用户标识
 *	@param 	nickname 	昵称
 *	@param 	profileImage 	用户头像
 */
+ (void)setUserInfoWithId:(NSString *)uid
                 nickname:(NSString *)nickname
             profileImage:(NSString *)profileImage;


@end
