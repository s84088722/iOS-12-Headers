/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTAccount;

@interface RTAccountManagerNotificationAccountChanged : RTNotification {

	RTAccount* _latestAccount;
	RTAccount* _oldAccount;

}

@property (nonatomic,readonly) RTAccount * latestAccount;              //@synthesize latestAccount=_latestAccount - In the implementation block
@property (nonatomic,readonly) RTAccount * oldAccount;                 //@synthesize oldAccount=_oldAccount - In the implementation block
-(RTAccount *)latestAccount;
-(id)initWithLatestAccount:(id)arg1 oldAccount:(id)arg2 ;
-(RTAccount *)oldAccount;
-(id)init;
@end

