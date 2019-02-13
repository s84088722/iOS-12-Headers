//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSArray, TIKeyboardCandidate;

@interface TIAutocorrectionList : NSObject <NSSecureCoding>
{
    _Bool _containsProactiveTriggers;
    TIKeyboardCandidate *_autocorrection;
    NSArray *_predictions;
    NSArray *_emojiList;
    NSArray *_proactiveTriggers;
}

+ (id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(_Bool)arg2;
+ (id)listWithPredictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3;
+ (id)listWithPredictions:(id)arg1 proactiveTriggers:(id)arg2;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2;
+ (id)listWithAutocorrection:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool containsProactiveTriggers; // @synthesize containsProactiveTriggers=_containsProactiveTriggers;
@property(readonly, nonatomic) NSArray *proactiveTriggers; // @synthesize proactiveTriggers=_proactiveTriggers;
@property(readonly, nonatomic) NSArray *emojiList; // @synthesize emojiList=_emojiList;
@property(readonly, nonatomic) NSArray *predictions; // @synthesize predictions=_predictions;
@property(readonly, nonatomic) TIKeyboardCandidate *autocorrection; // @synthesize autocorrection=_autocorrection;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldAcceptTopCandidate;
@property(readonly, nonatomic) NSArray *candidates;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(_Bool)arg2;
- (id)initWithCandidates:(id)arg1;
- (id)initWithAutocorrectionAlternativeProactiveTrigger:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
- (id)initWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;

@end

