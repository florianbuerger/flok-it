#
# Be sure to run `pod lint flok-it.podspec' to ensure this is a
# valid spec.
#
# Remove all comments before submitting the spec.
#
Pod::Spec.new do |s|
  s.name         = 'flok-it'
  s.version      = '0.1'
  s.license      = 'BSD'
  s.summary      = 'a collection of shared code among my projects'
  s.homepage     = 'http://github.com/floorjiann/flok-it'
  s.author       = { 'Florian Buerger' => 'florian@florianbuerger.com' }
  s.source       = { :git => 'http://github.com/floorjiann/flok-it.git', :tag => 'stable' }
  s.source_files = '/**/*.{h,m}'
  s.platform     = :ios
  s.requires_arc = true

  s.dependency 'CocoaLumberjack', '~> 1.3.1'
end
