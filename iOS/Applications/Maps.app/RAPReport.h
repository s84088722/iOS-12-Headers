//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, RAPQuestion, RAPSubmitter;
@protocol MKMapServiceProblemReportTicket, RAPAppStateProtocol;

__attribute__((visibility("hidden")))
@interface RAPReport : NSObject
{
    _Bool _willUpdate;
    id <RAPAppStateProtocol> _reportContext;
    RAPSubmitter *_submitter;
    NSMapTable *_observers;
    NSString *_submissionID;
    id <MKMapServiceProblemReportTicket> _ticket;
    _Bool _canCreateSubmittableProblem;
    RAPQuestion *_initialQuestion;
    id <RAPAppStateProtocol> _context;
}

@property(readonly, nonatomic, getter=_context) id <RAPAppStateProtocol> context; // @synthesize context=_context;
@property(retain, nonatomic) RAPQuestion *initialQuestion; // @synthesize initialQuestion=_initialQuestion;
- (void).cxx_destruct;
- (void)recordManifestURLs:(id)arg1;
- (void)recordCurrentEnvironment:(id)arg1;
- (id)devicePushToken;
- (void)recordRAPSubmissionID:(id)arg1;
- (void)submitWithPrivacyRequestHandler:(CDUnknownBlockType)arg1 willStartSubmitting:(CDUnknownBlockType)arg2;
- (void)_anonymizeLocations:(id)arg1 traits:(id)arg2;
- (void)_anonymizeScreenshots:(id)arg1;
- (void)_anonymizePhotos:(id)arg1;
- (id)_navigationSettings;
- (id)_auxiliaryControlsRecording;
- (id)_placeContext;
- (id)_mapContext;
- (void)_invokeChangeHandlers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;
- (id)newSubmittableProblem;
- (void)_update;
- (void)updateIfNeeded;
- (void)_setNeedsUpdate;
- (void)_questionDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool canCreateSubmittableProblem; // @synthesize canCreateSubmittableProblem=_canCreateSubmittableProblem;
- (id)initWithContext:(id)arg1 submitter:(id)arg2;
- (id)init;

@end

