//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedTransforming-Protocol.h>

@class NSString;

@interface FCFeedTransformationLimit : NSObject <FCFeedTransforming>
{
    unsigned long long _limit;
}

+ (id)transformationWithLimit:(unsigned long long)arg1;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (id)transformFeedItems:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

