/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSXPCInterface;


@protocol FMNSXPCConnectionConfigurable <NSObject>
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) NSXPCInterface * remoteInterface; 
@property (nonatomic,readonly) NSXPCInterface * exportedInterface; 
@property (nonatomic,readonly) BOOL machService; 
@required
-(BOOL)machService;
-(NSXPCInterface *)remoteInterface;
-(unsigned long long)options;
-(NSXPCInterface *)exportedInterface;
-(NSString *)serviceName;

@end

