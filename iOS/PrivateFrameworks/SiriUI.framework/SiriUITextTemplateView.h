//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUILabelStackTemplateView.h>

#import <SiriUI/SiriUITemplateView-Protocol.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol SiriUITemplatedView, SiriUITextTemplateModel;

@interface SiriUITextTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView>
{
    UIImageView *_chevronView;
    UILabel *_detailTextLabel;
    UIButton *_disclosureButton;
}

@property(retain, nonatomic) UIButton *disclosureButton; // @synthesize disclosureButton=_disclosureButton;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
- (void).cxx_destruct;
- (void)reloadData;
- (void)layoutDetailText;
- (void)removeTargetForDisclosure:(id)arg1 action:(SEL)arg2;
- (void)addTargetForDisclosure:(id)arg1 action:(SEL)arg2;
- (void)_setupDisclosureButton;
- (void)setupDisclosureIndicator;
- (void)layoutSubviews;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property __weak id <SiriUITextTemplateModel> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <SiriUITemplatedView> templatedSuperview;

@end

