//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SafariClearBrowsingDataInterval : NSObject
{
    NSString *_descriptionOfInterval;
    CDUnknownBlockType _dateAfterWhichDataShouldBeClearedBlock;
    NSString *_aggdIntervalKey;
}

@property(retain, nonatomic) NSString *aggdIntervalKey; // @synthesize aggdIntervalKey=_aggdIntervalKey;
@property(copy, nonatomic) CDUnknownBlockType dateAfterWhichDataShouldBeClearedBlock; // @synthesize dateAfterWhichDataShouldBeClearedBlock=_dateAfterWhichDataShouldBeClearedBlock;
@property(readonly) NSString *descriptionOfInterval; // @synthesize descriptionOfInterval=_descriptionOfInterval;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDescription:(id)arg1 dateAfterWhichDataShouldBeClearedBlock:(CDUnknownBlockType)arg2;

@end

