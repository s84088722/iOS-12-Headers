//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface PXNodeRunner : NSObject
{
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (void)processGraphForRunNode:(id)arg1;
- (void)_processRunGraph:(struct NSArray *)arg1;
@property long long qualityOfService;
@property long long maxConcurrentRunNodeCount;
- (id)init;

@end

