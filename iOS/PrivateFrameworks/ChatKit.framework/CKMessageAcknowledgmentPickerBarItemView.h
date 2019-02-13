//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CKAcknowledgmentGlyphView, CKMessageAcknowledgmentDraftDescriptor, UIButton;
@protocol CKMessageAcknowledgmentPickerBarItemViewDelegate;

@interface CKMessageAcknowledgmentPickerBarItemView : UIView
{
    _Bool _selected;
    long long _messageAcknowledgmentType;
    id <CKMessageAcknowledgmentPickerBarItemViewDelegate> _delegate;
    CKAcknowledgmentGlyphView *_acknowledgmentGlyphView;
    UIButton *_itemButton;
    CKMessageAcknowledgmentDraftDescriptor *_draft;
}

@property(readonly, nonatomic) CKMessageAcknowledgmentDraftDescriptor *draft; // @synthesize draft=_draft;
@property(retain, nonatomic) UIButton *itemButton; // @synthesize itemButton=_itemButton;
@property(readonly, nonatomic) CKAcknowledgmentGlyphView *acknowledgmentGlyphView; // @synthesize acknowledgmentGlyphView=_acknowledgmentGlyphView;
@property(nonatomic) __weak id <CKMessageAcknowledgmentPickerBarItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long messageAcknowledgmentType; // @synthesize messageAcknowledgmentType=_messageAcknowledgmentType;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool displaySelected;
- (void)layoutSubviews;
- (void)itemButtonTapped:(id)arg1;
- (void)configureWithMessageAcknowledgmentDescriptor:(id)arg1 initiallySelected:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

