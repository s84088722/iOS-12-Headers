/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:50:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface ACCHWComponentAuth : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(NSXPCConnection *)xpcConnection;
-(void)authenticateBatteryWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)init;
-(id)_init;
@end
