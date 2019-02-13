//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlaceCardActionButtonControlling-Protocol.h"
#import "PlaceCardActionButtonControllingDelegate-Protocol.h"

@class MKMapItem, NSString;
@protocol PlaceCardActionButtonControlling, PlaceCardActionButtonControllingDelegate;

__attribute__((visibility("hidden")))
@interface PlaceCardSecondaryActionButtonController : NSObject <PlaceCardActionButtonControllingDelegate, PlaceCardActionButtonControlling>
{
    id <PlaceCardActionButtonControllingDelegate> _delegate;
    id <PlaceCardActionButtonControlling> _buttonController;
    MKMapItem *_mapItem;
}

@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) id <PlaceCardActionButtonControlling> buttonController; // @synthesize buttonController=_buttonController;
@property(nonatomic) __weak id <PlaceCardActionButtonControllingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)appStoreItemSelected:(id)arg1;
- (void)presentExtensionFlowController:(id)arg1;
- (void)updateActionButtonWithTitle:(id)arg1 subtitle:(id)arg2 canPresentFlow:(_Bool)arg3;
@property(readonly, nonatomic) int analyticActionForDisplayingSecondaryAction;
- (id)controllerForSecondaryAction;
- (void)extensionContentDidChange;
- (id)initWithMapItem:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

