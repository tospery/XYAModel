#
# Be sure to run `pod lib lint XYAModel.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'XYAModel'
  s.version          = '0.0.3'
  s.summary          = 'XY Accelerator Model'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
						Model for XYAccelerator.
                       DESC

  s.homepage         = 'https://github.com/tospery/XYAModel'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'YangJianxiang' => 'tospery@gmail.com' }
  s.source           = { :git => 'https://github.com/tospery/XYAModel.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'

  s.source_files = 'XYAModel/**/*'
  s.frameworks = 'Foundation'
  s.dependency 'OCFrame/OCFCore', '1.1.4'
end
