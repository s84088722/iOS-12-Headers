//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchToSharePredictions/NSSecureCoding-Protocol.h>

@class NSString;

@interface SGQPPrediction : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_query;
    long long _type;
    double _score;
    unsigned long long _phraseId;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long phraseId; // @synthesize phraseId=_phraseId;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool isPhrasePrediction; // @dynamic isPhrasePrediction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 prediction:(id)arg2 score:(double)arg3;
- (id)initWithType:(long long)arg1 prediction:(id)arg2 score:(double)arg3 phraseId:(unsigned long long)arg4;
- (id)initWithIdentifier:(id)arg1 type:(long long)arg2 prediction:(id)arg3 score:(double)arg4 phraseId:(unsigned long long)arg5;
- (id)init;
- (id)searchSuggestion;

@end

