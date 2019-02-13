//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKObject;

__attribute__((visibility("hidden")))
@interface EKObjectValidationContext : NSObject
{
    _Bool _reachedMaxDepth;
    EKObject *_rootObject;
    unsigned long long _depth;
}

@property(nonatomic) _Bool reachedMaxDepth; // @synthesize reachedMaxDepth=_reachedMaxDepth;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly, nonatomic) EKObject *rootObject; // @synthesize rootObject=_rootObject;
- (void).cxx_destruct;
- (void)faultIfNeededForObject:(id)arg1;
- (id)initWithRootObject:(id)arg1;

@end

