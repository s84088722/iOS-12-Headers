//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface WLKRottenTomatoesRating : NSObject
{
    unsigned long long _freshness;
    NSNumber *_freshnessPercentage;
}

+ (unsigned long long)freshnessForString:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *freshnessPercentage; // @synthesize freshnessPercentage=_freshnessPercentage;
@property(readonly, nonatomic) unsigned long long freshness; // @synthesize freshness=_freshness;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFreshness:(unsigned long long)arg1 freshnessPercentage:(id)arg2;

@end

