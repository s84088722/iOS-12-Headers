//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NTKComplicationLayoutRule;

@interface _NTKComplicationStateLayout : NSObject
{
    NSMutableDictionary *_overrideRules;
    NTKComplicationLayoutRule *_defaultRule;
}

@property(retain, nonatomic) NTKComplicationLayoutRule *defaultRule; // @synthesize defaultRule=_defaultRule;
- (id)ruleForLayoutOverride:(long long)arg1;
- (void)setRule:(id)arg1 forLayoutOverride:(long long)arg2;
- (void)dealloc;

@end

