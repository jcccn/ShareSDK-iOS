//
//  SSCDefine.h
//  Comment
//
//  Created by hanweitao on 16/1/7.
//  Copyright © 2016年 掌淘科技. All rights reserved.
//

#ifndef SSCDefine_h
#define SSCDefine_h

#import "ISSCComment.h"
#import "SSCTypeDef.h"

/**
 *	@brief	评论列表刷新
 */
typedef void(^SSCCommentUpdateEvent) (id<ISSCComment> comment);

/**
 *	@brief	分享内容回调事件
 */
typedef void(^SSCPublishContentEventHandler) (CSSDKPlatformType type, SSCResponseState state, id statusInfo, id error, BOOL end);

/**
 *	@brief	授权回调事件
 */
typedef void(^SSCAuthEventHandler) (SSCAuthState state, id error);

/**
 *	@brief	获取用户信息回调事件
 */
typedef void(^SSCGetUserInfoEventHandler) (BOOL result, id userInfo, id error);

#endif /* SSCDefine_h */
