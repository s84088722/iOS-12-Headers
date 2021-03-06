/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXClientXPCInterface.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSXPCListener, NSMutableDictionary;

@interface ATXServer : NSObject <ATXClientXPCInterface, NSXPCListenerDelegate> {

	NSString* _cacheFileBasePath;
	NSString* _machServiceName;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	NSMutableDictionary* _cacheFileDescriptors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)consumerSubTypesToUpdate;
+(id)sharedInstance;
-(void)sendFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 aprResponse:(id)arg4 engagementType:(unsigned long long)arg5 engagedBundleId:(id)arg6 bundleIdsShown:(id)arg7 reply:(/*^block*/id)arg8 ;
-(void)generateNewAppPredictionsForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 candidateIntentTypeIdentifiers:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)getAppPredictorAssetMappingDescriptionWithReply:(/*^block*/id)arg1 ;
-(id)initWithCacheFileBasePath:(id)arg1 machServiceName:(id)arg2 ;
-(void)updateAppPredictionsWithRefreshRate:(double)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

