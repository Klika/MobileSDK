Pod::Spec.new do |s|
  s.name = 'SRSDK'
  s.version = "1.2.0"
  s.summary = 'SportRadar SDK.'
  s.license = {"type"=>"Sportradar", "file"=>"LICENSE.txt"}
  s.authors = {"Jure Zemljic"=>"j.zemljic@sportradar.com"}
  s.homepage = 'https://developer.sportradar.com'
  s.requires_arc = true
  s.source = { :git => "https://github.com/Klika/MobileSDK.git", :tag => s.version.to_s}

  s.platform = :ios, '7.0'
  s.ios.platform             = :ios, '7.0'
  s.ios.preserve_paths       = 'ios/SRSDK.framework'
  s.ios.public_header_files  = 'ios/SRSDK.framework/Versions/A/Headers/*.h'
  s.ios.resource             = 'ios/SRSDK.framework/Versions/A/Resources/**/*'
  s.ios.vendored_frameworks  = 'ios/SRSDK.framework'
end
