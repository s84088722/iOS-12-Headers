//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface TextViewWithPlaceholderText : UITextView
{
    UILabel *_placeholderLabel;
}

@property(readonly, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)_updatePlaceholderVisibility;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

