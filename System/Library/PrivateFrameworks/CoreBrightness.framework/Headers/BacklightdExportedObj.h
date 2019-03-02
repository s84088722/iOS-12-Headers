/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BacklightdXPCProtocol.h>

@class BrightnessSystemInternal, NSXPCConnection, NSString;

@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol> {

	unsigned long long _clientID;
	BOOL _clientIDSet;
	BrightnessSystemInternal* _server;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic) BrightnessSystemInternal * server;              //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reconnect;
-(void)clientSetPropertyWithKey:(id)arg1 property:(id)arg2 ;
-(void)clientCopyPropertyWithKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)registerNotificationForProperties:(id)arg1 ;
-(id)copyClientID;
-(BrightnessSystemInternal *)server;
-(void)setServer:(BrightnessSystemInternal *)arg1 ;
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end
