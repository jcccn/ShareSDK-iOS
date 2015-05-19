///#begin zh-cn
//
//  Created by ShareSDK.cn on 13-1-14.
//  官网地址:http://www.ShareSDK.cn
//  技术支持邮箱:support@sharesdk.cn
//  官方微信:ShareSDK   （如果发布新版本的话，我们将会第一时间通过微信将版本更新内容推送给您。如果使用过程中有任何问题，也可以通过微信与我们取得联系，我们将会在24小时内给予回复）
//  商务QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
///#end
///#begin en
//
//  Created by ShareSDK.cn on 13-1-14.
//  Website:http://www.ShareSDK.cn
//  Support E-mail:support@sharesdk.cn
//  WeChat ID:ShareSDK   （If publish a new version, we will be push the updates content of version to you. If you have any questions about the ShareSDK, you can get in touch through the WeChat with us, we will respond within 24 hours）
//  Business QQ:4006852216
//  Copyright (c) 2013年 ShareSDK.cn. All rights reserved.
//
///#end

#import <UIKit/UIKit.h>
#import "SSCommentTypeDef.h"
#import "SSCShareDesc.h"
#import "SSCViewDesc.h"

///#begin zh-cn
/**
 *	@brief	评论列表视图
 */
///#end
///#begin en
/**
 *	@brief	Comment List View
 */
///#end
@interface SSCCommentListView : UIView <UITableViewDataSource,
                                        UITableViewDelegate>

///#begin zh-cn
/**
 *	@brief	分享操作相关的设置
 */
///#end
///#begin en
/**
 *	@brief	Share description.
 */
///#end
@property (nonatomic,retain) SSCShareDesc *shareDesc;

///#begin zh-cn
/**
 *	@brief	视图描述
 */
///#end
///#begin en
/**
 *	@brief	View description
 */
///#end
@property (nonatomic,retain) SSCViewDesc *viewDesc;

///#begin zh-cn
/**
 *	@brief	初始化评论列表视图
 *
 *	@param 	contentId 	内容标识
 *  @param  title   标题
 *  @param  order   排序方法
 *	@param 	frame 	显示范围
 *
 *	@return	视图对象
 */
///#end
///#begin en
/**
 *	@brief	Initialize comment list view.
 *
 *	@param 	contentId 	Content id.
 *  @param  title   Title
 *  @param  order   Order method
 *	@param 	frame 	Display rect.
 *
 *	@return	Comment list view.
 */
///#end
- (id)initWithContentId:(NSString *)contentId
                  title:(NSString *)title
                  order:(NSComparator)order
                  frame:(CGRect)frame;

///#begin zh-cn
/**
 *	@brief	初始化复合评论列表视图
 *
 *	@param 	contentId 	内容标志
 *	@param 	title 	标题
 *	@param 	menuItems 	菜单项集合
 *	@param 	frame 	显示范围
 *
 *	@return	视图对象
 */
///#end
///#begin en
/**
 *	@brief	Initialize complex comment list view.
 *
 *	@param 	contentId 	Content id
 *	@param 	title 	Title
 *	@param 	menuItems 	Menu items.
 *	@param 	frame 	Display rect.
 *
 *	@return	comment list view.
 */
///#end
- (id)initWithContentId:(NSString *)contentId
                  title:(NSString *)title
              menuItems:(NSArray *)menuItems
                  frame:(CGRect)frame;

///#begin zh-cn
/**
 *	@brief	设置帐号来源，表示允许用户使用哪些平台进行登录授权来进行评论。默认为nil，表示使用ShareSDK中初始化的平台作为帐号来源。
 *
 *	@param 	platforms 	平台列表，由ShareType组成。
 */
///#end
///#begin en
/**
 *	@brief	Set account sources，Said platform which allows users to login using authorized to comment. The default is nil, that the use of ShareSDK initialized platform as the source account.
 *
 *	@param 	platforms 	Platform list，Composed by the ShareType。
 */
///#end
- (void)setAccountSources:(NSArray *)platforms;

///#begin zh-cn
/**
 *	@brief	设置是否允许切换帐号.
 *
 *	@param 	allowChangeAccount 	YES 表示允许切换帐号， NO 表示不允许切换帐号
 */
///#end
///#begin en
/**
 *	@brief	Set whether to allow switching accounts.
 *
 *	@param 	allowChangeAccount 	YES means allowed to switch accounts, NO means no switching accounts
 */
///#end
- (void)setAllowChangeAccount:(BOOL)allowChangeAccount;

///#begin zh-cn
/**
 *	@brief	设置评论列表表头视图
 *
 *	@param 	header 	表头视图
 */
///#end
///#begin en
/**
 *	@brief	Set header view.
 *
 *	@param 	header 	Header view.
 */
///#end
- (void)setHeaderView:(UIView *)headerView;

///#begin zh-cn
/**
 *	@brief	重新加载数据
 */
///#end
///#begin en
/**
 *	@brief	reload data.
 */
///#end
- (void)reloadData;

@end
