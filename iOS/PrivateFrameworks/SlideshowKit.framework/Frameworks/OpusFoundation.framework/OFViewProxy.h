//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, OFUIViewController;

@interface OFViewProxy : UIView
{
    NSMutableArray *_layoutSteps;
    struct {
        struct CGRect _field1;
    } *_layoutInfo;
    OFUIViewController *_viewControllerProxy;
    _Bool _magicLayoutEnabled;
}

@property(nonatomic, getter=isMagicLayoutEnabled) _Bool magicLayoutEnabled; // @synthesize magicLayoutEnabled=_magicLayoutEnabled;
- (void)layoutSubviews;
- (void)addLayoutSteps:(id)arg1;
- (void)addLayoutStep:(id)arg1;
- (void)runMagicLayout;
- (void)setAnchorPoint:(struct CGPoint)arg1;
@property(nonatomic) OFUIViewController *viewControllerProxy; // @synthesize viewControllerProxy=_viewControllerProxy;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

@end

