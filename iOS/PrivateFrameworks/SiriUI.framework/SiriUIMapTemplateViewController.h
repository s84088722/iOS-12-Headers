//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateViewController.h>

#import <SiriUI/SiriUIMapTemplateViewDelegate-Protocol.h>

@class NSString, SiriUIMapTemplateView;
@protocol SiriUIMapTemplateModel, SiriUIMapTemplateViewControllerDelegate;

@interface SiriUIMapTemplateViewController : SiriUIBaseTemplateViewController <SiriUIMapTemplateViewDelegate>
{
}

- (void)mapTemplateViewDidSelectMap:(id)arg1;
- (void)mapTemplateView:(id)arg1 didModifyPlacemark:(id)arg2;
- (void)prepareForDismissal;
- (Class)templateViewClass;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SiriUIMapTemplateViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <SiriUIMapTemplateModel> templateModel; // @dynamic templateModel;
@property(retain, nonatomic) SiriUIMapTemplateView *view; // @dynamic view;

@end

