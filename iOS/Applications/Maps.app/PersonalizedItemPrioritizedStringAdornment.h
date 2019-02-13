//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PersonalizedItemAdornment.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PersonalizedItemPrioritizedStringAdornment : PersonalizedItemAdornment
{
    NSString *_value;
    NSString *_locale;
    unsigned long long _priority;
}

+ (id)adornmentWithString:(id)arg1 priority:(unsigned long long)arg2;
+ (id)adornmentWithString:(id)arg1 locale:(id)arg2 priority:(unsigned long long)arg3;
+ (id)defaultAdornment;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithString:(id)arg1 locale:(id)arg2 priority:(unsigned long long)arg3;
- (id)combineAdornment:(id)arg1;

@end

