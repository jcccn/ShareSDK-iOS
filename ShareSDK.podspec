Pod::Spec.new do |s|
  s.name     = 'ShareSDK'
  s.version  = '2.10.5'
  s.summary  = 'ShareSDK is a SNS share kit.'
  s.homepage = 'https://github.com/jcccn/ShareSDK-iOS'
  s.author   = { 'Chuncheng Jiang' => 'jccuestc@gmail.com' }
  s.license  = { :type => 'Copyright', :text => <<-LICENSE
                   Copyright © 2012-2014 mob All Rights Reserved 掌淘网络 版权所有
                 LICENSE
               }
  s.source   = { :git => 'https://github.com/jcccn/ShareSDK-iOS.git', :tag => '2.10.5' }
  s.platform     = :ios, '5.1.1'
  s.requires_arc = true

  s.default_subspec = 'Normal'

  ### Subspecs

  s.subspec 'Weibo' do |ws|
    ws.requires_arc = true
    ws.dependency 'ShareSDK/Core'
    ws.dependency 'ShareSDK/UI'
    ws.dependency 'ShareSDK/SinaWeibo'
    ws.dependency 'ShareSDK/TencentWeibo'
  end

  s.subspec 'Lite' do |ls|
    ls.requires_arc = true
    ls.dependency 'ShareSDK/Weibo'
    ls.dependency 'ShareSDK/Copy'
    ls.dependency 'ShareSDK/Mail'
    ls.dependency 'ShareSDK/WeChat'
    ls.dependency 'ShareSDK/QZone'
    ls.dependency 'ShareSDK/QQConnect'
  end

  s.subspec 'Frequent' do |fs|
    fs.requires_arc = true
    fs.dependency 'ShareSDK/Weibo'
    fs.dependency 'ShareSDK/WeChat'
    fs.dependency 'ShareSDK/QQConnect'
    fs.dependency 'ShareSDK/QZone'
    fs.dependency 'ShareSDK/Copy'
    fs.dependency 'ShareSDK/Mail'
    fs.dependency 'ShareSDK/UI/Flat'
  end

  s.subspec 'Normal' do |ns|
    ns.requires_arc = true
    ns.dependency 'ShareSDK/Lite'
    ns.dependency 'ShareSDK/EverNote'
    ns.dependency 'ShareSDK/YouDaoNote'
    ns.dependency 'ShareSDK/Pocket'
  end

  s.subspec 'International' do |is|
    is.requires_arc = true
    is.dependency 'ShareSDK/Normal'
    is.dependency 'ShareSDK/GooglePlus'
    is.dependency 'ShareSDK/Facebook'
    is.dependency 'ShareSDK/Twitter'
  end

  s.subspec 'Core' do |cs|
    cs.requires_arc = true
    cs.frameworks = 'SystemConfiguration', 'QuartzCore', 'CoreTelephony'
    cs.libraries  = 'icucore', 'z.1.2.5'
    cs.vendored_frameworks = 'ShareSDK/ShareSDK.framework', 'ShareSDK/Core/AGCommon.framework', 'ShareSDK/Core/ShareSDKCoreService.framework'
    cs.resources = ["ShareSDK/Core/Resource.bundle", "ShareSDK/Core/zh-Hans.lproj/*.strings"]
  end

  s.subspec 'UI' do |uis|
    uis.requires_arc = true
    uis.default_subspec = 'Full'

    uis.subspec 'Full' do |uifulls|
      uifulls.requires_arc = true
      uifulls.dependency 'ShareSDK/UI/Flat'
      uifulls.dependency 'ShareSDK/UI/iPadDefault'
      uifulls.dependency 'ShareSDK/UI/iPadSimple'
      uifulls.dependency 'ShareSDK/UI/iPhoneDefault'
      uifulls.dependency 'ShareSDK/UI/iPhoneSimple'
      uifulls.dependency 'ShareSDK/UI/iPhoneAppRecommend'
      uifulls.dependency 'ShareSDK/UI/ShareActionSheet'
    end
  
    uis.subspec 'Flat' do |uiflats|
      uiflats.requires_arc = true
      uiflats.vendored_frameworks = 'ShareSDK/UI/ShareSDKFlatShareViewUI.framework'
      uiflats.resources = 'ShareSDK/UI/ShareSDKFlatShareViewUI.bundle'
    end

    uis.subspec 'iPadDefault' do |uiipaddefaults|
      uiipaddefaults.requires_arc = true
      uiipaddefaults.vendored_frameworks = 'ShareSDK/UI/ShareSDKiPadDefaultShareViewUI.framework'
      uiipaddefaults.resources = 'ShareSDK/UI/ShareSDKiPadDefaultShareViewUI.bundle'
    end

    uis.subspec 'iPadSimple' do |uiipadsimples|
      uiipadsimples.requires_arc = true
      uiipadsimples.vendored_frameworks = 'ShareSDK/UI/ShareSDKiPadSimpleShareViewUI.framework'
      uiipadsimples.resources = 'ShareSDK/UI/ShareSDKiPadSimpleShareViewUI.bundle'
    end

    uis.subspec 'iPhoneDefault' do |uiiphonedefaults|
      uiiphonedefaults.requires_arc = true
      uiiphonedefaults.vendored_frameworks = 'ShareSDK/UI/ShareSDKiPhoneDefaultShareViewUI.framework'
      uiiphonedefaults.resources = 'ShareSDK/UI/ShareSDKiPhoneDefaultShareViewUI.bundle'
    end

    uis.subspec 'iPhoneSimple' do |uiiphonesimples|
      uiiphonesimples.requires_arc = true
      uiiphonesimples.vendored_frameworks = 'ShareSDK/UI/ShareSDKiPhoneSimpleShareViewUI.framework'
      uiiphonesimples.resources = 'ShareSDK/UI/ShareSDKiPhoneSimpleShareViewUI.bundle'
    end

    uis.subspec 'iPhoneAppRecommend' do |uiiphonerecommends|
      uiiphonerecommends.requires_arc = true
      uiiphonerecommends.vendored_frameworks = 'ShareSDK/UI/ShareSDKiPhoneAppRecommendShareViewUI.framework'
    end

    uis.subspec 'ShareActionSheet' do |uiactionsheets|
      uiactionsheets.requires_arc = true
      uiactionsheets.vendored_frameworks = 'ShareSDK/UI/ShareSDKShareActionSheet.framework'
    end

  end

  s.subspec 'Copy' do |copys|
    copys.requires_arc = true
    copys.dependency 'ShareSDK/Core'
    copys.frameworks = 'UIKit'
    copys.vendored_frameworks = 'ShareSDK/Connection/CopyConnection.framework'
  end

  s.subspec 'Mail' do |mails|
    mails.requires_arc = true
    mails.dependency 'ShareSDK/Core'
    mails.frameworks = 'UIKit', 'MessageUI'
    mails.vendored_frameworks = 'ShareSDK/Connection/MailConnection.framework'
  end

  s.subspec 'SMS' do |smss|
    smss.requires_arc = true
    smss.dependency 'ShareSDK/Core'
    smss.frameworks = 'UIKit', 'MessageUI'
    smss.vendored_frameworks = 'ShareSDK/Connection/SMSConnection.framework'
  end

  s.subspec 'SinaWeibo' do |sinaweibos|
    sinaweibos.requires_arc = true
    sinaweibos.dependency 'ShareSDK/Core'
    sinaweibos.source_files   = 'ShareSDK/Extend/SinaWeiboSDK/WeiboSDK.h'
    sinaweibos.vendored_frameworks = 'ShareSDK/Connection/SinaWeiboConnection.framework'
    sinaweibos.vendored_libraries = 'ShareSDK/Extend/SinaWeiboSDK/libSinaWeiboSDK.a'
    sinaweibos.resources = "ShareSDK/Extend/SinaWeiboSDK/WeiboSDK.bundle"
  end

  s.subspec 'TencentWeibo' do |tencentweibos|
    tencentweibos.requires_arc = true
    tencentweibos.dependency 'ShareSDK/Core'
    tencentweibos.frameworks = 'Social', 'Accounts'
    tencentweibos.source_files   = 'ShareSDK/Extend/TencentWeiboSDK/WeiboApi.h', 'ShareSDK/Extend/TencentWeiboSDK/WeiboApiObject.h'
    tencentweibos.vendored_frameworks = 'ShareSDK/Connection/TencentWeiboConnection.framework'
    tencentweibos.vendored_libraries = 'ShareSDK/Extend/TencentWeiboSDK/libTCWeiboSDK.a'
  end

  s.subspec 'WeChat' do |wechats|
    wechats.requires_arc = true
    wechats.dependency 'ShareSDK/Core'
    wechats.source_files   = 'ShareSDK/Extend/WeChatSDK/WXApi.h', 'ShareSDK/Extend/WeChatSDK/WXApiObject.h'
    wechats.vendored_frameworks = 'ShareSDK/Connection/WeChatConnection.framework'
    wechats.vendored_libraries = 'ShareSDK/Extend/WeChatSDK/libWeChatSDK.a'
  end

  s.subspec 'QZone' do |qzones|
    qzones.requires_arc = true
    qzones.dependency 'ShareSDK/Core'
    qzones.frameworks = 'Security'
    qzones.libraries  = 'stdc++', 'sqlite3'
    qzones.vendored_frameworks = 'ShareSDK/Connection/QZoneConnection.framework', 'ShareSDK/Extend/QQConnectSDK/TencentOpenAPI.framework'
    qzones.resources = "ShareSDK/Extend/QQConnectSDK/TencentOpenApi_IOS_Bundle.bundle"
  end

  s.subspec 'QQConnect' do |qqconnects|
    qqconnects.requires_arc = true
    qqconnects.dependency 'ShareSDK/Core'
    qqconnects.frameworks = 'Security'
    qqconnects.libraries  = 'stdc++', 'sqlite3'
    qqconnects.vendored_frameworks = 'ShareSDK/Connection/QQConnection.framework', 'ShareSDK/Extend/QQConnectSDK/TencentOpenAPI.framework'
    qqconnects.resources = "ShareSDK/Extend/QQConnectSDK/TencentOpenApi_IOS_Bundle.bundle"
  end

  s.subspec 'EverNote' do |evernotes|
    evernotes.requires_arc = true
    evernotes.dependency 'ShareSDK/Core'
    evernotes.vendored_frameworks = 'ShareSDK/Connection/EverNoteConnection.framework'
  end

  s.subspec 'YouDaoNote' do |youdaonotes|
    youdaonotes.requires_arc = true
    youdaonotes.dependency 'ShareSDK/Core'
    youdaonotes.vendored_frameworks = 'ShareSDK/Connection/YouDaoNoteConnection.framework'
  end

  s.subspec 'Pocket' do |pockets|
    pockets.requires_arc = true
    pockets.dependency 'ShareSDK/Core'
    pockets.vendored_frameworks = 'ShareSDK/Connection/PocketConnection.framework'
  end

  s.subspec 'GooglePlus' do |googlepluss|
    googlepluss.requires_arc = true
    googlepluss.dependency 'ShareSDK/Core'
    googlepluss.frameworks = 'Security', 'CoreMotion', 'CoreLocation', 'MediaPlayer', 'CoreText', 'AssetsLibrary'
    googlepluss.vendored_frameworks = 'ShareSDK/Connection/GooglePlusConnection.framework', 'ShareSDK/Extend/GooglePlusSDK/GoogleOpenSource.framework', 'ShareSDK/Extend/GooglePlusSDK/GooglePlus.framework'
    googlepluss.resources = "ShareSDK/Extend/GooglePlusSDK/GooglePlus.bundle"
  end

  s.subspec 'Facebook' do |fbs|
    fbs.requires_arc = true
    fbs.dependency 'ShareSDK/Core'
    fbs.vendored_frameworks = 'ShareSDK/Connection/FacebookConnection.framework'
  end

  s.subspec 'Twitter' do |tts|
    tts.requires_arc = true
    tts.dependency 'ShareSDK/Core'
    tts.vendored_frameworks = 'ShareSDK/Connection/TwitterConnection.framework'
  end

  s.subspec 'Comment' do |comments|
    comments.requires_arc = true
    comments.dependency 'ShareSDK/Core'
    comments.vendored_frameworks = 'Comment/Comment.framework'
    comments.resources = 'Comment/Comment.bundle'
  end


end
