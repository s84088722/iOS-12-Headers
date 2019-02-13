//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOUserSessionSnapshot, NSArray, NSString;
@protocol GEOUsageKeypressEventProtocol;

@interface MKLocalSearchKeypressMetrics : NSObject
{
    NSString *_query;
    NSArray *_queryTokens;
    NSArray *_suggestionEntries;
    GEOUserSessionSnapshot *_userSessionSnapshot;
    id <GEOUsageKeypressEventProtocol> _customUsageCapturer;
}

@property(retain, nonatomic) id <GEOUsageKeypressEventProtocol> customUsageCapturer; // @synthesize customUsageCapturer=_customUsageCapturer;
@property(readonly, nonatomic) GEOUserSessionSnapshot *userSessionSnapshot; // @synthesize userSessionSnapshot=_userSessionSnapshot;
@property(readonly, nonatomic) NSArray *suggestionEntries; // @synthesize suggestionEntries=_suggestionEntries;
@property(readonly, copy, nonatomic) NSArray *queryTokens; // @synthesize queryTokens=_queryTokens;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)submitWithStatus:(unsigned long long)arg1;
- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3 usageCapturer:(id)arg4;
- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3;

@end

