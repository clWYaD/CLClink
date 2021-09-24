#
#  Be sure to run `pod spec lint CL_ShanYanSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = "CLLink"
  s.version      = "1.0.0.0"
  s.summary      = "短链"
  s.description  = "短链"

  s.homepage     = "http://sdk.253.com/"
  s.license      = { :type => "LGPL" }
  s.author             = { "CLSDK" => "wangyd@253.com" }
  s.social_media_url   = "https://www.253.com"
  s.platform     = :ios, "9.0"

  s.source       = { :git => "https://github.com/clWYaD/CLClink.git", :tag => s.version.to_s }

  s.vendored_frameworks =  'framework/*.{framework}'
  s.resource = 'framework/*.{bundle}'

  s.requires_arc = true
  s.pod_target_xcconfig = { 
        'FRAMEWORK_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/CLLink',
        'OTHER_LDFLAGS' => '$(inherited) -undefined dynamic_lookup -ObjC'
      }

end
