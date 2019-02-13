//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PSHeaderFooterView-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, PSSpecifier, UITextView;

@interface COSSoftwareUpdateCellFooterView : UIView <UITextViewDelegate, PSHeaderFooterView>
{
    NSString *_text;
    UITextView *_textView;
    PSSpecifier *_specifier;
}

@property(nonatomic) __weak PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

