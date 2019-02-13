//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilityUIService/AXUIAlert.h>

@protocol AXUIAlertStyleProvider;

@interface AXStyleProviderUIAlert : AXUIAlert
{
    double _dismissalGestureYOffset;
    struct CGPoint _backgroundViewDismissalOrigin;
    unsigned long long _alertType;
    id <AXUIAlertStyleProvider> _styleProvider;
}

@property(retain, nonatomic) id <AXUIAlertStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) unsigned long long alertType; // @synthesize alertType=_alertType;
- (void).cxx_destruct;
- (void)_appendParagraphWithText:(id)arg1 withTextColor:(id)arg2 font:(id)arg3 textAlignment:(long long)arg4 lineSpacing:(double)arg5 paragraphSpacingBefore:(double)arg6 toAttributedString:(id)arg7;
- (void)addToContainerView:(id)arg1;
- (void)_cancelDismissalWithPanGesture:(id)arg1;
- (void)_endDismissalWithPanGesture:(id)arg1;
- (void)_updateViewForDismissalPercentage:(double)arg1;
- (void)_updateDismissalWithPanGesture:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5;

@end

