/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStandardTaskServer.h>
#import <libobjc.A.dylib/HKElectrocardiogramSessionServerInterface.h>

@protocol OS_dispatch_queue;
@class HKElectrocardiogramSessionConfiguration, NSObject, NSString;

@interface HDElectrocardiogramSessionServer : HDStandardTaskServer <HKElectrocardiogramSessionServerInterface> {

	HKElectrocardiogramSessionConfiguration* _sessionConfiguration;
	NSObject*<OS_dispatch_queue> _queue;
	long long _sessionState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
+(id)requiredEntitlements;
+(Class)configurationClass;
+(BOOL)validateConfiguration:(id)arg1 error:(out id*)arg2 ;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(void)_queue_abortSensorSession;
-(void)_queue_startWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_abortWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_notifyClientDidEndWithEndReason:(long long)arg1 error:(id)arg2 ;
-(void)remote_startWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_abortWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_notifyClientDidDetectContactAtDate:(id)arg1 ;
-(void)_queue_notifyClientDidDetectEmergencyCallbackModeWithEndDate:(id)arg1 ;
-(id)exportedInterface;
@end
