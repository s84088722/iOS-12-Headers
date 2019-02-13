//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

#import <TemplateKit/NUIContainerStackViewDelegate-Protocol.h>
#import <TemplateKit/TLKTextAreaViewTesting-Protocol.h>

@class NSMutableArray, NSString, TLKRichTextField, TLKTitleContainerView;

@interface TLKTextAreaView : TLKStackView <NUIContainerStackViewDelegate, TLKTextAreaViewTesting>
{
    _Bool _disableAllObservers;
    TLKTitleContainerView *_titleContainer;
    NSMutableArray *_detailsFields;
    TLKRichTextField *_footnoteLabel;
    unsigned long long _style;
}

+ (id)footNoteLabelFont;
@property _Bool disableAllObservers; // @synthesize disableAllObservers=_disableAllObservers;
@property unsigned long long style; // @synthesize style=_style;
@property(retain) TLKRichTextField *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain) NSMutableArray *detailsFields; // @synthesize detailsFields=_detailsFields;
@property(retain) TLKTitleContainerView *titleContainer; // @synthesize titleContainer=_titleContainer;
- (void).cxx_destruct;
- (id)footnoteLabelString;
- (id)secondaryTitleLabelString;
- (id)titleLabelString;
- (id)textAreaLabelStrings;
- (id)detailsViews;
- (id)titleView;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (_Bool)noFootNote;
- (_Bool)noRichTextFields;
- (void)updateFootnote:(id)arg1;
- (void)internalTextFieldsInBatchUpdate:(_Bool)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)updateDetails:(id)arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(_Bool)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

