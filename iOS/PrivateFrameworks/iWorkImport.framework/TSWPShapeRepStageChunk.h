//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSWPShapeRepStageChunk : NSObject
{
    long long _stageIndex;
    NSArray *_storageRanges;
}

@property(retain, nonatomic) NSArray *storageRanges; // @synthesize storageRanges=_storageRanges;
@property(nonatomic) long long stageIndex; // @synthesize stageIndex=_stageIndex;
- (id)description;
- (void)dealloc;

@end

