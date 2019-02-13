//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPReportTableViewController.h"

#import "RAPInstrumentableTarget-Protocol.h"
#import "RAPRouter-Protocol.h"

@class NSString, RAPAddAPlaceReportComposer, RAPReportComposerCommentPart, RAPReportComposerSearchSubcategorySection, RAPReportComposerWhichSearchSection, RAPSearchWhichOneQuestion, RAPTablePart, RAPTablePartSection;

__attribute__((visibility("hidden")))
@interface RAPReportComposerIncorrectSearchViewController : RAPReportTableViewController <RAPRouter, RAPInstrumentableTarget>
{
    RAPSearchWhichOneQuestion *_question;
    RAPTablePart *_search;
    RAPTablePart *_searchRequestPart;
    RAPReportComposerWhichSearchSection *_searchSection;
    RAPTablePart *_subcategoryPart;
    RAPReportComposerSearchSubcategorySection *_subcategorySection;
    RAPReportComposerCommentPart *_commentPart;
    RAPTablePartSection *_commentSection;
    RAPAddAPlaceReportComposer *_addAPlaceComposer;
}

- (void).cxx_destruct;
- (void)proceedToPlaceLocationCorrectionsQuestion:(id)arg1;
- (void)proceedToPlaceCorrectionsQuestion:(id)arg1;
- (void)proceedToSearchResultIncorrectQuestion:(id)arg1;
- (void)proceedToPlaceClosureQuestion:(id)arg1;
- (void)proceedToProblemNotListedQuestion:(id)arg1;
- (void)proceedToAddNewPlaceQuestion:(id)arg1;
- (void)proceedToNextQuestion:(id)arg1;
- (void)_instrumentSelectedSearch;
- (id)tableParts;
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
