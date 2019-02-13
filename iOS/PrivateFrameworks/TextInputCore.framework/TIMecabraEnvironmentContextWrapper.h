//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface TIMecabraEnvironmentContextWrapper : NSObject
{
    int _textContentType;
    int _shuangpinType;
    NSString *_appContext;
    unsigned long long _candidateIndex;
    unsigned long long _candidateInternalIndex;
    unsigned long long _environmentCandidateCount;
    struct __Mecabra *_mecabraEngine;
    struct __MecabraContext *_mecabraContext;
    NSMutableArray *_temporaryCandidates;
    NSMutableArray *_environmentCandidates;
}

@property(retain, nonatomic) NSMutableArray *environmentCandidates; // @synthesize environmentCandidates=_environmentCandidates;
@property(nonatomic) int shuangpinType; // @synthesize shuangpinType=_shuangpinType;
@property(nonatomic) int textContentType; // @synthesize textContentType=_textContentType;
@property(retain, nonatomic) NSMutableArray *temporaryCandidates; // @synthesize temporaryCandidates=_temporaryCandidates;
@property(nonatomic) struct __MecabraContext *mecabraContext; // @synthesize mecabraContext=_mecabraContext;
@property(readonly, nonatomic) struct __Mecabra *mecabraEngine; // @synthesize mecabraEngine=_mecabraEngine;
@property(readonly, nonatomic) unsigned long long environmentCandidateCount; // @synthesize environmentCandidateCount=_environmentCandidateCount;
@property(nonatomic) unsigned long long candidateInternalIndex; // @synthesize candidateInternalIndex=_candidateInternalIndex;
@property(nonatomic) unsigned long long candidateIndex; // @synthesize candidateIndex=_candidateIndex;
@property(copy, nonatomic) NSString *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
- (void *)createMecabraCandidateFromString:(id)arg1;
- (void)setGeometryModel:(void *)arg1 modelData:(struct __CFArray *)arg2;
- (void)completelyCommitInlineCandidate:(void *)arg1;
- (void)partiallyCommitInlineCandidate:(void *)arg1;
- (_Bool)predictionCandidatesWithOptions:(unsigned long long)arg1 maxNumberOfCandidates:(unsigned long long)arg2;
- (_Bool)analyzeString:(id)arg1 options:(unsigned long long)arg2;
- (void)syncEnvironmentAndContextCandidates;
- (void)revertLearningForCandidate:(void *)arg1;
- (void)revertInlineCandidate;
- (void)removeCandidatesInRange:(struct _NSRange)arg1;
- (void)acceptInlineCandidates;
@property(readonly, nonatomic) NSArray *inlineCandidates;
@property(readonly, nonatomic) NSArray *environmentCandidateStrings;
- (void)declareEndOfSentence;
- (void)clearAll;
- (void)clearContext;
@property(readonly, nonatomic) NSArray *contextCandidateStrings;
@property(readonly, nonatomic) NSArray *contextCandidates;
@property(readonly, nonatomic) unsigned long long contextCandidateCount;
- (void)addEnvironmentCandidate:(void *)arg1 atIndex:(unsigned long long)arg2;
- (void)addContextStringCandidate:(void *)arg1;
- (void)addContextCandidate:(void *)arg1 accept:(_Bool)arg2;
- (void)dealloc;
- (id)initWithMecabraEngine:(struct __Mecabra *)arg1 language:(int)arg2;

@end

