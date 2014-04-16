Pod::Spec.new do |s|
  s.name     = 'ShareSDK'
  s.version  = '2.8.6'
  s.summary  = 'ShareSDK is a SNS share kit.'
  s.homepage = 'https://github.com/jcccn/ShareSDK-iOS'
  s.author   = { 'Chuncheng Jiang' => 'jccuestc@gmail.com' }
  s.license  = { :type => 'Copyright', :text => <<-LICENSE
                   © 2013 ShareSDK.cn , All Rights Reserved
                 LICENSE
               }
  s.source   = { :git => 'https://github.com/jcccn/ShareSDK-iOS.git', :tag => '2.8.6' }
  s.platform     = :ios, '5.0'
  s.requires_arc = true

  s.default_subspec = 'Normal'

  ### Subspecs

  s.subspec 'Normal' do |ns|
    ns.requires_arc = true
    ns.dependency 'ShareSDK/Core'
    ns.dependency 'ShareSDK/UI'
    ns.dependency 'ShareSDK/Copy'
    ns.dependency 'ShareSDK/Mail'
    ns.dependency 'ShareSDK/SMS'
    ns.dependency 'ShareSDK/SinaWeibo'
    ns.dependency 'ShareSDK/TencentWeibo'
    ns.dependency 'ShareSDK/WeChat'
    ns.dependency 'ShareSDK/QZone'
    ns.dependency 'ShareSDK/QQConnect'
    ns.dependency 'ShareSDK/EverNote'
    ns.dependency 'ShareSDK/YouDaoNote'
    ns.dependency 'ShareSDK/Pocket'
  end

  s.subspec 'International' do |is|
    is.requires_arc = true
    is.dependency 'ShareSDK/Normal'
    is.dependency 'ShareSDK/GooglePlus'
  end

  s.subspec 'Core' do |cs|
    cs.requires_arc = true
    cs.frameworks = 'SystemConfiguration', 'QuartzCore', 'CoreTelephony'
    cs.libraries  = 'icucore', 'z.1.2.5'
    cs.vendored_frameworks = 'ShareSDK/ShareSDK.framework', 'ShareSDK/Core/AGCommon.framework', 'ShareSDK/Core/ShareSDKCoreService.framework'
    cs.resources = ["ShareSDK/Core/Resource.bundle", "ShareSDK/Core/en.lproj/*.strings", "ShareSDK/Core/zh-Hans.lproj/*.strings"]
  end

  s.subspec 'UI' do |uis|
    uis.requires_arc = true
    uis.vendored_frameworks = ["ShareSDK/UI/*.framework"]
    uis.resources = ["ShareSDK/UI/*.bundle"]
  end

  s.subspec 'Copy' do |copys|
    copys.requires_arc = true
    copys.frameworks = 'UIKit'
    copys.vendored_frameworks = 'ShareSDK/Connection/CopyConnection.framework'
  end

  s.subspec 'Mail' do |mails|
    mails.requires_arc = true
    mails.frameworks = 'UIKit', 'MessageUI'
    mails.vendored_frameworks = 'ShareSDK/Connection/MailConnection.framework'
  end

  s.subspec 'SMS' do |smss|
    smss.requires_arc = true
    smss.frameworks = 'UIKit', 'MessageUI'
    smss.vendored_frameworks = 'ShareSDK/Connection/SMSConnection.framework'
  end

  s.subspec 'SinaWeibo' do |sinaweibos|
    sinaweibos.requires_arc = true
    sinaweibos.source_files   = 'ShareSDK/Extend/SinaWeiboSDK/WeiboSDK.h'
    sinaweibos.vendored_frameworks = 'ShareSDK/Connection/SinaWeiboConnection.framework'
    sinaweibos.vendored_libraries = 'ShareSDK/Extend/SinaWeiboSDK/libSinaWeiboSDK.a'
    sinaweibos.resources = "ShareSDK/Extend/SinaWeiboSDK/WeiboSDK.bundle"
  end

  s.subspec 'TencentWeibo' do |tencentweibos|
    tencentweibos.requires_arc = true
    tencentweibos.source_files   = 'ShareSDK/Extend/TencentWeiboSDK/WeiboApi.h'
    tencentweibos.vendored_frameworks = 'ShareSDK/Connection/TencentWeiboConnection.framework'
    tencentweibos.vendored_libraries = 'ShareSDK/Extend/TencentWeiboSDK/libTCWeiboSDK.a'
  end

  s.subspec 'WeChat' do |wechats|
    wechats.requires_arc = true
    wechats.source_files   = 'ShareSDK/Extend/WeChatSDK/WXApi.h', 'ShareSDK/Extend/WeChatSDK/WXApiObject.h'
    wechats.vendored_frameworks = 'ShareSDK/Connection/WeChatConnection.framework', 'ShareSDK/Extend/QQConnectSDK/TencentOpenAPI.framework'
    wechats.vendored_libraries = 'ShareSDK/Extend/WeChatSDK/libWeChatSDK.a'
  end

  s.subspec 'QZone' do |qzones|
    qzones.requires_arc = true
    qzones.frameworks = 'Security'
    qzones.libraries  = 'stdc++', 'sqlite3'
    qzones.vendored_frameworks = 'ShareSDK/Connection/QZoneConnection.framework'
  end

  s.subspec 'QQConnect' do |qqconnects|
    qqconnects.requires_arc = true
    qqconnects.frameworks = 'Security'
    qqconnects.libraries  = 'stdc++', 'sqlite3'
    qqconnects.vendored_frameworks = 'ShareSDK/Connection/QQConnection.framework', 'ShareSDK/Extend/QQConnectSDK/TencentOpenAPI.framework'
    qqconnects.resources = "ShareSDK/Extend/QQConnectSDK/TencentOpenApi_IOS_Bundle.bundle"
  end

  s.subspec 'EverNote' do |evernotes|
    evernotes.requires_arc = true
    evernotes.vendored_frameworks = 'ShareSDK/Connection/EverNoteConnection.framework'
  end

  s.subspec 'YouDaoNote' do |youdaonotes|
    youdaonotes.requires_arc = true
    youdaonotes.vendored_frameworks = 'ShareSDK/Connection/YouDaoNoteConnection.framework'
  end

  s.subspec 'Pocket' do |pockets|
    pockets.requires_arc = true
    pockets.vendored_frameworks = 'ShareSDK/Connection/PocketConnection.framework'
  end

  s.subspec 'GooglePlus' do |googlepluss|
    googlepluss.requires_arc = true
    googlepluss.frameworks = 'Security', 'CoreMotion', 'CoreLocation', 'MediaPlayer', 'CoreText', 'AssetsLibrary'
    googlepluss.vendored_frameworks = 'ShareSDK/Connection/GooglePlusConnection.framework', 'ShareSDK/Extend/GooglePlusSDK/GoogleOpenSource.framework', 'ShareSDK/Extend/GooglePlusSDK/GooglePlus.framework'
    googlepluss.resources = "ShareSDK/Extend/GooglePlusSDK/GooglePlus.bundle"
  end

end
