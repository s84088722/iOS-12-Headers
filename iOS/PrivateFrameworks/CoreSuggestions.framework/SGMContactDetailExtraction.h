//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactDetailExtraction : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 source:(struct SGMDocumentType_)arg2 signature:(struct SGMTypeSafeBool_)arg3 detail:(struct SGMContactDetailType_)arg4 outcome:(struct SGMContactDetailExtractionOutcome_)arg5 foundInSenderCNContact:(struct SGMContactDetailOwner_)arg6;
- (id)init;

@end

