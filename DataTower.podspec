#
# Be sure to run `pod lib lint DataTower.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ROIQueryCore'
  s.version          = '1.3.2'
  s.summary          = 'This is a ios frameWork for LovinJoy Data Tower.'
  s.description      = <<-DESC
                    DataTower.framework provides a quick way to record your project acttion
                       DESC

  s.homepage         = 'https://github.com/lovinjoy/datatower.ai-core-ios'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'admin' => 'admin@ironmeta.com' }
  s.source           = { :git => 'https://github.com/lovinjoy/datatower.ai-core-ios.git', :tag => 'v1.3.2' }
  s.ios.vendored_frameworks = 'DTFramework/DataTower.framework'
  s.ios.deployment_target = '11.0'
  s.dependency 'SQLite.swift', '~> 0.13.3'
    
  s.swift_version = '5.0'
  
end
