Pod::Spec.new do |spec|
	spec.name         = 'AppLab-Client'
	spec.version      = '0.1.1'
	spec.summary      = 'Client library for apps published on the UCL App Lab'
	spec.platform		= :ios, "7.0"
  	spec.author = {
    	'UCL App Lab' => 'uclapplab@ucl.ac.uk'
  	}
  	
  	spec.homepage     = 'https://github.com/UCLDECIDE/AppLab-Client'
  	spec.license      = { :type => 'BSD', :file => 'LICENSE'  }
  	
  	spec.source = {
    	:git => 'https://github.com/UCLDECIDE/AppLab-Client.git',
	    :tag => spec.version.to_s
  	}
  	
  	spec.ios.vendored_frameworks = 'AppLab-Client-Library.framework'

  	spec.dependency	'UXCam'
  	spec.dependency	'UICKeyChainStore'
  	
  	spec.requires_arc = true
end