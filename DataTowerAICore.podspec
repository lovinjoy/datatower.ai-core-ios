#
# Be sure to run `pod lib lint DataTower.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'DataTowerAICore'
  s.version          = '1.3.3-beta2'
  s.summary          = 'This is a ios frameWork for LovinJoy Data Tower.'
  s.description      = <<-DESC
                    DataTower.framework provides a quick way to record your project acttion
                       DESC

  s.homepage         = 'https://github.com/lovinjoy/datatower.ai-core-ios'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'admin' => 'admin@ironmeta.com' }
  s.source           = { :git => 'https://github.com/lovinjoy/datatower.ai-core-ios.git', :tag => 'v' + s.version.to_s}
  s.ios.vendored_frameworks = 'DataTowerAICore.framework'
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.frameworks = ["Foundation", "SystemConfiguration", "CoreGraphics", "Security","CoreTelephony"]
  s.libraries = ["sqlite3", "z"]
  s.requires_arc = true
  s.ios.deployment_target = '8.0'
  
end
