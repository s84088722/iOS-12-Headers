//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPReportComposerInitialMapPickingController.h"

@class RAPLabelCorrectionsQuestion, RAPMapFeaturePickerViewController;

__attribute__((visibility("hidden")))
@interface RAPReportComposerLabelCorrectionController : RAPReportComposerInitialMapPickingController
{
    RAPMapFeaturePickerViewController *_mapPicker;
    RAPLabelCorrectionsQuestion *_question;
}

@property(readonly, nonatomic) RAPLabelCorrectionsQuestion *question; // @synthesize question=_question;
- (void).cxx_destruct;
- (void)mapPickerDidCommit:(id)arg1;
- (void)present;
- (void)_instrumentSelectingLabel;
- (id)newInitialMapFeaturePickerWithSelection:(CDUnknownBlockType)arg1;
- (id)initWithOwner:(id)arg1 report:(id)arg2 question:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

