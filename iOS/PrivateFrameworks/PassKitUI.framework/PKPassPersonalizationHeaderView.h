//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKTableHeaderView.h>

@interface PKPassPersonalizationHeaderView : PKTableHeaderView
{
    PKTableHeaderView *_tableHeaderView;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_configureForCurrentState;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithLogoImage:(id)arg1 description:(id)arg2;

@end

