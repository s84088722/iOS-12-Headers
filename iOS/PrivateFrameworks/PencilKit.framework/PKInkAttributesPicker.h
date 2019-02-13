//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PencilKit/_PKInkAttributesPickerViewDelegate-Protocol.h>

@class NSString, PKInk, _PKInkAttributesPickerView;
@protocol PKInkAttributesPickerDelegate;

@interface PKInkAttributesPicker : UIViewController <UIPopoverPresentationControllerDelegate, _PKInkAttributesPickerViewDelegate>
{
    id <PKInkAttributesPickerDelegate> _delegate;
    _PKInkAttributesPickerView *_pickerView;
}

@property(retain, nonatomic) _PKInkAttributesPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) id <PKInkAttributesPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_inkAttributesPickerViewUserDidEndDraggingSlider:(id)arg1;
- (void)_inkAttributesPickerViewUserDidStartDraggingSlider:(id)arg1;
- (void)selectedInkDidChange:(id)arg1;
@property(nonatomic) unsigned long long displayMode;
- (void)setSelectedInk:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) PKInk *selectedInk;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithInk:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

