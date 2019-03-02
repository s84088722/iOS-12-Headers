/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSArray;

@interface AVGlobalOperationQueue : NSObject {

	NSOperationQueue* _operationQueue;

}

@property (copy,readonly) NSArray * unfinishedOperations; 
+(id)defaultQueue;
-(NSArray *)unfinishedOperations;
-(void)enqueueOperation:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end
