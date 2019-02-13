//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCLimitAwareFeedTransforming-Protocol.h>

@class NSString;
@protocol FCFeedPersonalizing;

@interface FCFeedTransformationPersonalizedDiversifiedLimit : NSObject <FCLimitAwareFeedTransforming>
{
    unsigned long long _limit;
    id <FCFeedPersonalizing> _feedPersonalizer;
}

+ (id)transformationWithPersonalizer:(id)arg1 limit:(unsigned long long)arg2;
+ (id)transformationWithPersonalizer:(id)arg1;
@property(retain, nonatomic) id <FCFeedPersonalizing> feedPersonalizer; // @synthesize feedPersonalizer=_feedPersonalizer;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1 withRespectToLimit:(unsigned long long)arg2;
- (id)transformFeedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

