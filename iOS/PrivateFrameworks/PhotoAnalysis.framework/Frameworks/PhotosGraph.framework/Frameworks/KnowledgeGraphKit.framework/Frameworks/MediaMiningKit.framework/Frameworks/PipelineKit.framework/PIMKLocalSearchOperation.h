//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PipelineKit/PIOperationSubclass.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface PIMKLocalSearchOperation : PIOperationSubclass
{
    NSObject<OS_dispatch_source> *_timer;
    id _ticket;
}

+ (id)operationWithMUIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)operationWithRegion:(id)arg1 categories:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (id)operationWithRegion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)operationWithQuery:(id)arg1 inRegion:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;

@end

