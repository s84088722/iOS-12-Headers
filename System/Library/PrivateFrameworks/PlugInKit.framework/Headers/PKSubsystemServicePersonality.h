/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:16 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, NSUUID, NSDictionary, NSXPCConnection;


@protocol PKSubsystemServicePersonality <NSObject>
@property (readonly) NSString * identifier; 
@property (readonly) NSString * version; 
@property (readonly) NSURL * url; 
@property (readonly) NSUUID * uuid; 
@property (readonly) NSDictionary * bundleInfoDictionary; 
@property (readonly) NSDictionary * plugInDictionary; 
@property (readonly) NSXPCConnection * connection; 
@required
-(NSDictionary *)plugInDictionary;
-(NSString *)identifier;
-(NSUUID *)uuid;
-(NSString *)version;
-(NSURL *)url;
-(NSXPCConnection *)connection;
-(NSDictionary *)bundleInfoDictionary;

@end
