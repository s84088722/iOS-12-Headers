//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

#import <EventKitUI/EKUITintColorUpdateDelegate-Protocol.h>

@class NSObject, TintColorUpdateView;
@protocol EKUITintColorUpdateDelegate;

@interface EKUIVisualEffectView : UIVisualEffectView <EKUITintColorUpdateDelegate>
{
    TintColorUpdateView *_updateView;
    NSObject<EKUITintColorUpdateDelegate> *_tintColorDelegate;
}

@property(nonatomic) __weak NSObject<EKUITintColorUpdateDelegate> *tintColorDelegate; // @synthesize tintColorDelegate=_tintColorDelegate;
- (void).cxx_destruct;
- (void)subTintColorUpdatedToColor:(id)arg1;
- (void)viewTintColorDidChangeForView:(id)arg1 toColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

