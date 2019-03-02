/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHSettings.h>

@class PHImageManagerSettings, PHResourceDownloadSettings;

@interface PHRootSettings : PHSettings {

	PHImageManagerSettings* _imageManagerSettings;
	PHResourceDownloadSettings* _resourceDownloadSettings;

}

@property (nonatomic,readonly) PHImageManagerSettings * imageManagerSettings;                      //@synthesize imageManagerSettings=_imageManagerSettings - In the implementation block
@property (nonatomic,readonly) PHResourceDownloadSettings * resourceDownloadSettings;              //@synthesize resourceDownloadSettings=_resourceDownloadSettings - In the implementation block
+(id)sharedSettings;
+(id)settingsControllerModule;
-(PHResourceDownloadSettings *)resourceDownloadSettings;
-(PHImageManagerSettings *)imageManagerSettings;
-(id)parentSettings;
@end
