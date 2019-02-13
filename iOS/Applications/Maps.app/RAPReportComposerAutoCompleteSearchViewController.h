//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPReportTableViewController.h"

#import "RAPInstrumentableTarget-Protocol.h"

@class NSString, RAPAutoCompleteSearchQuestion, RAPReportComposerCommentPart, RAPTableCollapsableCheckmarkSection, RAPTablePart, RAPTablePartSection;

__attribute__((visibility("hidden")))
@interface RAPReportComposerAutoCompleteSearchViewController : RAPReportTableViewController <RAPInstrumentableTarget>
{
    RAPAutoCompleteSearchQuestion *_question;
    RAPTableCollapsableCheckmarkSection *_searchIssueKindSection;
    RAPTablePart *_searchIssueKindPart;
    RAPReportComposerCommentPart *_commentPart;
    RAPTablePartSection *_commentSection;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) RAPTablePartSection *commentSection; // @synthesize commentSection=_commentSection;
@property(retain, nonatomic) RAPReportComposerCommentPart *commentPart; // @synthesize commentPart=_commentPart;
@property(retain, nonatomic) RAPTablePart *searchIssueKindPart; // @synthesize searchIssueKindPart=_searchIssueKindPart;
@property(retain, nonatomic) RAPTableCollapsableCheckmarkSection *searchIssueKindSection; // @synthesize searchIssueKindSection=_searchIssueKindSection;
@property(retain, nonatomic) RAPAutoCompleteSearchQuestion *question; // @synthesize question=_question;
- (void).cxx_destruct;
- (void)_instrumentSearchSelection;
- (id)tableParts;
- (void)didTapOnCancel;
@property(readonly, nonatomic) int analyticTarget;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithSearchQuery:(id)arg1 report:(id)arg2 question:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

