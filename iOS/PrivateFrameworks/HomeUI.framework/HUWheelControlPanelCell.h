//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUControlPanelCell.h>

#import <HomeUI/HUWheelControlViewDelegate-Protocol.h>

@class HUWheelControlView, NSArray, NSString, UILabel, UIView;

@interface HUWheelControlPanelCell : HUControlPanelCell <HUWheelControlViewDelegate>
{
    _Bool _wheelViewVisible;
    HUWheelControlView *_wheelView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIView *_separatorView;
    NSArray *_staticConstraints;
    NSArray *_dynamicConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSArray *dynamicConstraints; // @synthesize dynamicConstraints=_dynamicConstraints;
@property(retain, nonatomic) NSArray *staticConstraints; // @synthesize staticConstraints=_staticConstraints;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool wheelViewVisible; // @synthesize wheelViewVisible=_wheelViewVisible;
@property(retain, nonatomic) HUWheelControlView *wheelView; // @synthesize wheelView=_wheelView;
- (void).cxx_destruct;
- (void)wheelControlView:(id)arg1 didUpdateValue:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateConstraints;
@property(readonly, nonatomic, getter=isDisabled) _Bool disabled;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *titleText;
- (id)allControlViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

