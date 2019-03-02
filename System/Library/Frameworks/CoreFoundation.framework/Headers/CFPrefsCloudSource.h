/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/CFPrefsPlistSource.h>

@interface CFPrefsCloudSource : CFPrefsPlistSource {

	const char* _configPath;
	const char* _storeName;
	BOOL _enabled;

}
-(id)createSynchronizeMessage;
-(id)initWithDomain:(CFStringRef)arg1 user:(CFStringRef)arg2 byHost:(BOOL)arg3 containerPath:(CFStringRef)arg4 containingPreferences:(id)arg5 ;
-(void)alreadylocked_updateObservingRemoteChanges;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 sourceDictionary:(CFDictionaryRef)arg2 ;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConfigurationPath:(CFStringRef)arg1 ;
-(void)setStoreName:(CFStringRef)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
@end
