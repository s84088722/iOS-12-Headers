//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPAddAPlaceTypeSelectionViewControllerDelegate-Protocol.h"
#import "RAPCategoryChooserDelegate-Protocol.h"
#import "RAPPhotoPickerViewControllerDelegate-Protocol.h"

@class NSString, RAPAddNewPlaceQuestion, RAPReport, UIViewController;

__attribute__((visibility("hidden")))
@interface RAPAddAPlaceReportComposer : NSObject <RAPCategoryChooserDelegate, RAPPhotoPickerViewControllerDelegate, RAPAddAPlaceTypeSelectionViewControllerDelegate>
{
    RAPAddNewPlaceQuestion *_question;
    RAPReport *_report;
    CDUnknownBlockType _completion;
    long long _presentationStyle;
    UIViewController *_initialViewController;
}

@property(retain, nonatomic) UIViewController *initialViewController; // @synthesize initialViewController=_initialViewController;
@property(nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) RAPReport *report; // @synthesize report=_report;
@property(retain, nonatomic) RAPAddNewPlaceQuestion *question; // @synthesize question=_question;
- (void).cxx_destruct;
- (void)clearCategorySelection;
- (void)setCategoryWithName:(id)arg1;
- (void)categoryChooserViewController:(id)arg1 didReceiveSelectedCategory:(id)arg2;
- (void)clearPhotoSelection;
- (void)didPickOrSkipPhotoWithSender:(id)arg1;
- (void)photoPickerDidSkip:(id)arg1;
- (void)photoPicker:(id)arg1 didTakeImage:(id)arg2;
- (void)addAPlaceTypeSelectionViewController:(id)arg1 didSelectCoordinateWithSender:(id)arg2;
- (void)displayAddressCorrectionsWithSender:(id)arg1;
- (void)displayPhotoPickerWithSender:(id)arg1;
- (id)addressCorrectionsViewController;
- (void)displayCategorySelectionWithSender:(id)arg1;
- (_Bool)shouldDisplayCategoryViewController;
- (id)typeSelectionViewController;
- (void)didTapOnCancel;
- (id)initWithReport:(id)arg1 question:(id)arg2 presentationStyle:(long long)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

