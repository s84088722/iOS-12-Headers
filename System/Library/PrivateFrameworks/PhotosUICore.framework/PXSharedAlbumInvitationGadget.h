//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUICore/PXSharedAlbumInvitationViewDelegate-Protocol.h>

@class NSString, PXFeedInvitationSectionInfo, PXGadgetSpec, PXSharedAlbumHeaderView, PXSharedAlbumInvitationView;
@protocol PXGadgetDelegate;

@interface PXSharedAlbumInvitationGadget : UIViewController <PXSharedAlbumInvitationViewDelegate, PXSettingsKeyObserver, PXGadget>
{
    _Bool _loadedContentData;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXFeedInvitationSectionInfo *_invitationSectionInfo;
    PXSharedAlbumHeaderView *_headerView;
    PXSharedAlbumInvitationView *_invitationView;
}

+ (void)preloadResources;
@property(nonatomic) _Bool loadedContentData; // @synthesize loadedContentData=_loadedContentData;
@property(retain, nonatomic) PXSharedAlbumInvitationView *invitationView; // @synthesize invitationView=_invitationView;
@property(retain, nonatomic) PXSharedAlbumHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PXFeedInvitationSectionInfo *invitationSectionInfo; // @synthesize invitationSectionInfo=_invitationSectionInfo;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1;
- (void)sharedAlbumInvitationView:(id)arg1 didAccept:(_Bool)arg2;
- (void)_attemptToNavigateToSharedAlbum:(id)arg1 hostingViewController:(id)arg2;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateInvitationView;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)uniqueGadgetIdentifier;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct NSObject *)contentViewController;
- (_Bool)hasLoadedContentData;
- (void)loadContentData;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic) struct CGRect visibleContentRect;

@end
