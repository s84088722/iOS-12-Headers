//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EDReferenceCollection, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDConditionalFormatting : NSObject
{
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
    _Bool mApplyToDate;
}

+ (id)conditionalFormatting;
- (id)description;
- (_Bool)isApplyToDate;
- (void)addRange:(id)arg1;
- (id)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)rangeCount;
- (id)rules;
- (void)addRule:(id)arg1;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (unsigned long long)ruleCount;
- (void)dealloc;
- (id)init;

@end

