#
# Be sure to run `pod lib lint ApexAdxSdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ApexAdxSdk'
  s.version          = '2.2.6'
  s.summary          = 'A short description of ApexAdxSdk.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzysjx/ApexAdxSdk'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jinwanhuijiama@foxmail.com' => 'jinwanhuijiama@foxmail.com' }
  s.source           = { :git => 'https://github.com/hzysjx/ApexAdxSdk', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

    s.ios.deployment_target = '11.0'

  s.source_files = 'ApexAdxSdk/Classes/**/*'
  
    s.public_header_files = ['ApexAdxSdk/Classes/**/ApexAdxSdk_iOS.h', 'ApexAdxSdk/Classes/**/ApexAdxAdRequest.h', 'ApexAdxSdk/Classes/**/ApexAdxSplashAd.h', 'ApexAdxSdk/Classes/**/ApexAdxInterstitialAd.h', 'ApexAdxSdk/Classes/**/ApexAdxRewardedAd.h', 'ApexAdxSdk/Classes/**/ApexAdxSdk.h', 'ApexAdxSdk/Classes/**/ApexAdxBannerView.h', 'ApexAdxSdk/Classes/**/ApexAdxNativeAdView.h', 'ApexAdxSdk/Classes/**/ApexAdxNativeAd.h', 'ApexAdxSdk/Classes/**/ApexAdxNativeAdManager.h']
    s.vendored_libraries = 'ApexAdxSdk/Libraries/libApexAdxSdk-iOS.a'
  
   s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS-RC/GDTAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/BaiduAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/KSAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/CSJAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/GromoreAdapter','5.5.6'
  s.dependency 'ToBid-iOS-RC/AdScopeAdapter','5.5.6'
  s.static_framework = true
end
