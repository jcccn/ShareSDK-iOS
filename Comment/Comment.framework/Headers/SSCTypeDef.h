//
//  SSCTypeDef.h
//  Comment
//
//  Created by hanweitao on 16/1/5.
//  Copyright © 2016年 掌淘科技. All rights reserved.
//

#ifndef SSCTypeDef_h
#define SSCTypeDef_h


///#begin zh-cn
/**
 *	@brief	响应状态
 */
///#end
///#begin en
/**
 *	@brief	Response state.
 */
///#end
typedef enum
{
    SSCResponseStateBegan = 0, /**< 开始 */
    SSCResponseStateSuccess = 1, /**< 成功 */
    SSCResponseStateFail = 2, /**< 失败 */
    SSCResponseStateCancel = 3 /**< 取消 */
}
SSCResponseState;

typedef enum
{
    SSCAuthStateBegan = 0, /**< 开始 */
    SSCAuthStateSuccess = 1, /**< 成功 */
    SSCAuthStateFail = 2, /**< 失败 */
    SSCAuthStateCancel = 3 /**< 取消 */
}
SSCAuthState;


///#begin zh-cn
/**
 *	@brief	分享类型
 */
///#end
///#begin en
/**
 *	@brief	Platform type.
 */
///#end
typedef enum
{
    CShareTypeSinaWeibo = 1,         /**< 新浪微博 */
    CShareTypeTencentWeibo = 2,      /**< 腾讯微博 */
    CShareTypeDouBan = 5,            /**< 豆瓣社区 */
    CShareTypeQQSpace = 6,           /**< QQ空间 */
    CShareTypeRenren = 7,            /**< 人人网 */
    CShareTypeKaixin = 8,            /**< 开心网 */
    CShareTypePengyou = 9,           /**< 朋友网 */
    CShareTypeFacebook = 10,         /**< Facebook */
    CShareTypeTwitter = 11,          /**< Twitter */
    CShareTypeEvernote = 12,         /**< 印象笔记 */
    CShareTypeFoursquare = 13,       /**< Foursquare */
    CShareTypeGooglePlus = 14,       /**< Google＋ */
    CShareTypeInstagram = 15,        /**< Instagram */
    CShareTypeLinkedIn = 16,         /**< LinkedIn */
    CShareTypeTumblr = 17,           /**< Tumbir */
    CShareTypeMail = 18,             /**< 邮件分享 */
    CShareTypeSMS = 19,              /**< 短信分享 */
    CShareTypeAirPrint = 20,         /**< 打印 */
    CShareTypeCopy = 21,             /**< 拷贝 */
    CShareTypeWeixiSession = 22,     /**< 微信好友 */
    CShareTypeWeixiTimeline = 23,    /**< 微信朋友圈 */
    CShareTypeQQ = 24,               /**< QQ */
    CShareTypeInstapaper = 25,       /**< Instapaper */
    CShareTypePocket = 26,           /**< Pocket */
    CShareTypeYouDaoNote = 27,       /**< 有道云笔记 */
    CShareTypePinterest = 30,        /**< Pinterest */
    CShareTypeFlickr = 34,           /**< Flickr */
    CShareTypeDropbox = 35,          /**< Dropbox */
    CShareTypeVKontakte = 36,        /**< VKontakte */
    CShareTypeWeixiFav = 37,         /**< 微信收藏 */
    CShareTypeYiXinSession = 38,     /**< 易信好友 */
    CShareTypeYiXinTimeline = 39,    /**< 易信朋友圈 */
    CShareTypeYiXinFav = 40,         /**< 易信收藏 */
    CShareTypeMingDao = 41,          /**< 明道 */
    CShareTypeLine = 42,             /**< Line */
    CShareTypeWhatsApp = 43,         /**< Whats App */
    CShareTypeKaKaoTalk = 44,        /**< KaKao Talk */
    CShareTypeKaKaoStory = 45,       /**< KaKao Story */
    CShareTypeAliPaySocial = 50,     /**< 支付宝 */
    CShareTypeOther = -1,            /**< > */
    CShareTypeAny = 99               /**< 任意平台 */
}
CShareType;

/**
 *  平台类型
 */
typedef NS_ENUM(NSUInteger, CSSDKPlatformType){
    /**
     *  未知
     */
    CSSDKPlatformTypeUnknown             = 0,
    /**
     *  新浪微博
     */
    CSSDKPlatformTypeSinaWeibo           = 1,
    /**
     *  腾讯微博
     */
    CSSDKPlatformTypeTencentWeibo        = 2,
    /**
     *  豆瓣
     */
    CSSDKPlatformTypeDouBan              = 5,
    /**
     *  QQ空间
     */
    CSSDKPlatformSubTypeQZone            = 6,
    /**
     *  人人网
     */
    CSSDKPlatformTypeRenren              = 7,
    /**
     *  开心网
     */
    CSSDKPlatformTypeKaixin              = 8,
    /**
     *  Facebook
     */
    CSSDKPlatformTypeFacebook            = 10,
    /**
     *  Twitter
     */
    CSSDKPlatformTypeTwitter             = 11,
    /**
     *  印象笔记
     */
    CSSDKPlatformTypeYinXiang            = 12,
    /**
     *  Google+
     */
    CSSDKPlatformTypeGooglePlus          = 14,
    /**
     *  Instagram
     */
    CSSDKPlatformTypeInstagram           = 15,
    /**
     *  LinkedIn
     */
    CSSDKPlatformTypeLinkedIn            = 16,
    /**
     *  Tumblr
     */
    CSSDKPlatformTypeTumblr              = 17,
    /**
     *  邮件
     */
    CSSDKPlatformTypeMail                = 18,
    /**
     *  短信
     */
    CSSDKPlatformTypeSMS                 = 19,
    /**
     *  打印
     */
    CSSDKPlatformTypePrint               = 20,
    /**
     *  拷贝
     */
    CSSDKPlatformTypeCopy                = 21,
    /**
     *  微信好友
     */
    CSSDKPlatformSubTypeWechatSession    = 22,
    /**
     *  微信朋友圈
     */
    CSSDKPlatformSubTypeWechatTimeline   = 23,
    /**
     *  QQ好友
     */
    CSSDKPlatformSubTypeQQFriend         = 24,
    /**
     *  Instapaper
     */
    CSSDKPlatformTypeInstapaper          = 25,
    /**
     *  Pocket
     */
    CSSDKPlatformTypePocket              = 26,
    /**
     *  有道云笔记
     */
    CSSDKPlatformTypeYouDaoNote          = 27,
    /**
     *  Pinterest
     */
    CSSDKPlatformTypePinterest           = 30,
    /**
     *  Flickr
     */
    CSSDKPlatformTypeFlickr              = 34,
    /**
     *  Dropbox
     */
    CSSDKPlatformTypeDropbox             = 35,
    /**
     *  VKontakte
     */
    CSSDKPlatformTypeVKontakte           = 36,
    /**
     *  微信收藏
     */
    CSSDKPlatformSubTypeWechatFav        = 37,
    /**
     *  易信好友
     */
    CSSDKPlatformSubTypeYiXinSession     = 38,
    /**
     *  易信朋友圈
     */
    CSSDKPlatformSubTypeYiXinTimeline    = 39,
    /**
     *  易信收藏
     */
    CSSDKPlatformSubTypeYiXinFav         = 40,
    /**
     *  明道
     */
    CSSDKPlatformTypeMingDao             = 41,
    /**
     *  Line
     */
    CSSDKPlatformTypeLine                = 42,
    /**
     *  WhatsApp
     */
    CSSDKPlatformTypeWhatsApp            = 43,
    /**
     *  KaKao Talk
     */
    CSSDKPlatformSubTypeKakaoTalk        = 44,
    /**
     *  KaKao Story
     */
    CSSDKPlatformSubTypeKakaoStory       = 45,
    /**
     *  支付宝好友
     */
    CSSDKPlatformTypeAliPaySocial        = 50,
    /**
     *  易信
     */
    CSSDKPlatformTypeYiXin               = 994,
    /**
     *  KaKao
     */
    CSSDKPlatformTypeKakao               = 995,
    /**
     *  印象笔记国际版
     */
    CSSDKPlatformTypeEvernote            = 996,
    /**
     *  微信平台,
     */
    CSSDKPlatformTypeWechat              = 997,
    /**
     *  QQ平台
     */
    CSSDKPlatformTypeQQ                  = 998,
    /**
     *  任意平台
     */
    CSSDKPlatformTypeAny                 = 999
};

#endif /* SSCTypeDef_h */
