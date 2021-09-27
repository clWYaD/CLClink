
Pod::Spec.new do |s|

  s.name         = "CLLink"
  s.version      = "1.0.0.0"
  s.summary      = "短链"
  s.description  = "智能短链"

  s.homepage     = "http://sdk.253.com/"
  s.license      = { :type => "LGPL" }
  s.author             = { "CLSDK" => "wangyd@253.com" }
  s.social_media_url   = "https://www.253.com"
  s.platform     = :ios, "9.0"

  s.source       = { :git => "https://github.com/clWYaD/CLClink.git", :tag => s.version.to_s }

  s.vendored_frameworks =  'framework/*.{framework}'

  s.requires_arc = true
  s.pod_target_xcconfig = { 
        'FRAMEWORK_SEARCH_PATHS' => '$(inherited) $(PODS_ROOT)/CLLink',
        'OTHER_LDFLAGS' => '$(inherited) -undefined dynamic_lookup -ObjC'
      }

end
