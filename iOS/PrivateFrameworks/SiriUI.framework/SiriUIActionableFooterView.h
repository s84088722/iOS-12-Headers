//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUIReusableFooterView.h>

@class NSString, SiriUIKeyline, SiriUISnippetViewController, UIButton;
@protocol SiriUIActionableFooterViewDelegate;

@interface SiriUIActionableFooterView : SiriUIReusableFooterView
{
    UIButton *_button;
    SiriUIKeyline *_keyline;
    _Bool _hasKeyline;
    SiriUISnippetViewController *_snippetViewController;
    id <SiriUIActionableFooterViewDelegate> _delegate;
}

+ (double)defaultHeight;
@property(nonatomic) _Bool hasKeyline; // @synthesize hasKeyline=_hasKeyline;
@property(nonatomic) __weak id <SiriUIActionableFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)snippetViewController;
- (void).cxx_destruct;
- (struct UIEdgeInsets)edgeInsets;
- (void)_buttonTapped:(id)arg1;
- (void)setSnippetViewController:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

