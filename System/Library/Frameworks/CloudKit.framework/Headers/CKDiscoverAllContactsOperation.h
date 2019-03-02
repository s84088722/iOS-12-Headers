/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKDiscoverAllContactsOperation : CKOperation {

	/*^block*/id _discoverAllContactsCompletionBlock;
	NSMutableArray* _discoveredUserInfos;

}

@property (nonatomic,retain) NSMutableArray * discoveredUserInfos;              //@synthesize discoveredUserInfos=_discoveredUserInfos - In the implementation block
@property (nonatomic,copy) id discoverAllContactsCompletionBlock;               //@synthesize discoverAllContactsCompletionBlock=_discoverAllContactsCompletionBlock - In the implementation block
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)discoverAllContactsCompletionBlock;
-(NSMutableArray *)discoveredUserInfos;
-(void)setDiscoverAllContactsCompletionBlock:(id)arg1 ;
-(Class)operationInfoClass;
-(void)setDiscoveredUserInfos:(NSMutableArray *)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)init;
@end
