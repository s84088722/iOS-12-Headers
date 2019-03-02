/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:22 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFUnfairLock, NSDictionary;

@interface HMLocalization : NSObject {

	HMFUnfairLock* _lock;
	NSDictionary* _localizedStrings;

}

@property (nonatomic,readonly) NSDictionary * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
+(id)sharedManager;
-(NSDictionary *)localizedStrings;
-(id)getLocalizedOrCustomString:(id)arg1 ;
-(id)getLocalizedString:(id)arg1 ;
-(void)_updateLocalizedStrings;
-(id)init;
-(void)dealloc;
@end
