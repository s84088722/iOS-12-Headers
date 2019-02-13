//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUILabelStackTemplateView.h>

#import <SiriUI/SiriUITemplateView-Protocol.h>

@class NSString, UIImageView;
@protocol SiriUIProfileTemplateModel, SiriUITemplatedView;

@interface SiriUIProfileTemplateView : SiriUILabelStackTemplateView <SiriUITemplateView>
{
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (long long)layoutStyle;
- (void)reloadData;
- (void)layoutImage;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SiriUIProfileTemplateModel> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <SiriUITemplatedView> templatedSuperview;

@end

