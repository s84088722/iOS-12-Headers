/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray;

@interface NSBlockOperation : NSOperation {

	id _private2;
	void* _reserved2;

}

@property (copy,readonly) NSArray * executionBlocks; 
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)executionBlocks;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)main;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
