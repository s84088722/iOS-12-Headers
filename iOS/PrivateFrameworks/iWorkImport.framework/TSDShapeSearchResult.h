//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface TSDShapeSearchResult : NSObject
{
    _Bool _isExactMatch;
    id _identifier;
    NSString *_matchingKeyword;
    unsigned long long _priority;
    NSNumber *_score;
}

@property(copy, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool isExactMatch; // @synthesize isExactMatch=_isExactMatch;
@property(readonly, nonatomic) NSString *matchingKeyword; // @synthesize matchingKeyword=_matchingKeyword;
@property(readonly, nonatomic) id identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 matchingKeyword:(id)arg2 priority:(unsigned long long)arg3 score:(id)arg4;

@end

