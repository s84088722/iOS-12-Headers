//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestMoment-Protocol.h>

@class CLSClueCollection, CLSInvestigationPhotoKitFeeder, NSDate, NSNumber, NSString, PGManager;

@interface PGGraphIngestMomentContainer : NSObject <PGGraphIngestMoment>
{
    CLSClueCollection *_clueCollection;
    CLSInvestigationPhotoKitFeeder *_feeder;
    NSNumber *_isInterestingNumber;
    NSNumber *_isSmartInterestingNumber;
    NSNumber *_contentScoreNumber;
    PGManager *_manager;
}

@property(retain, nonatomic) PGManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSNumber *contentScoreNumber; // @synthesize contentScoreNumber=_contentScoreNumber;
@property(retain, nonatomic) NSNumber *isSmartInterestingNumber; // @synthesize isSmartInterestingNumber=_isSmartInterestingNumber;
@property(retain, nonatomic) NSNumber *isInterestingNumber; // @synthesize isInterestingNumber=_isInterestingNumber;
@property(retain, nonatomic) CLSInvestigationPhotoKitFeeder *feeder; // @synthesize feeder=_feeder;
@property(retain, nonatomic) CLSClueCollection *clueCollection; // @synthesize clueCollection=_clueCollection;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) unsigned long long totalNumberOfPersons;
@property(readonly, nonatomic) unsigned long long numberOfItemsWithPeople;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
- (void)_computeScoresIfNeeded;
@property(readonly, nonatomic) double contentScore;
@property(readonly, nonatomic) _Bool isSmartInteresting;
@property(readonly, nonatomic) _Bool isInteresting;
- (id)initMomentContainerWithFeeder:(id)arg1 clueCollection:(id)arg2 manager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

