//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupingResult.h>

@class NSDictionary, NSSet;

@interface CHBottomUpStrokeGroupingResult : CHStrokeGroupingResult
{
    NSSet *_nontextCandidates;
    NSDictionary *_substrokesByStrokeIdentifier;
}

@property(readonly, retain, nonatomic) NSDictionary *substrokesByStrokeIdentifier; // @synthesize substrokesByStrokeIdentifier=_substrokesByStrokeIdentifier;
@property(readonly, retain, nonatomic) NSSet *nontextCandidates; // @synthesize nontextCandidates=_nontextCandidates;
- (void)dealloc;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 substrokesByStrokeIdentifier:(id)arg4 nontextCandidates:(id)arg5;

@end

