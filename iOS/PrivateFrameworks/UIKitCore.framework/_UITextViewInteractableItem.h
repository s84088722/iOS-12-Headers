//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIRotatingAlertControllerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, UITextView, UIWindow, _UIRotatingAlertController;

__attribute__((visibility("hidden")))
@interface _UITextViewInteractableItem : NSObject <_UIRotatingAlertControllerDelegate>
{
    _UIRotatingAlertController *_linkInteractionAlertController;
    _Bool _interactionIsFinished;
    UITextView *_textView;
    NSString *_localizedTitle;
    NSArray *_actions;
    NSDictionary *_defaultAction;
    UIWindow *_windowForActionSheetPresentation;
    struct _NSRange _range;
    struct _NSRange _subRange;
}

@property(retain, nonatomic) UIWindow *windowForActionSheetPresentation; // @synthesize windowForActionSheetPresentation=_windowForActionSheetPresentation;
@property(nonatomic) _Bool interactionIsFinished; // @synthesize interactionIsFinished=_interactionIsFinished;
@property(readonly, nonatomic) NSDictionary *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) struct _NSRange subRange; // @synthesize subRange=_subRange;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (void).cxx_destruct;
- (void)_cleanupWindowForActionSheetPresentation;
- (void)_cleanupSheet;
- (void)_handleActionAndFinish:(id)arg1;
- (void)sheet:(id)arg1 presentingViewControllerWillChange:(id)arg2;
- (struct CGRect)presentationRectInHostViewForSheet:(id)arg1;
- (struct CGRect)initialPresentationRectInHostViewForSheet:(id)arg1;
- (id)hostViewForSheet:(id)arg1;
- (void)_showActionSheet;
- (_Bool)allowHighlight;
- (_Bool)allowInteraction:(long long)arg1;
- (void)handleLongPress;
- (void)handleTap;
- (id)_actionSheet;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

