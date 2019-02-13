//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PUSessionInfoObserver-Protocol.h>

@class NSString, PHCollectionList, PUAlbumListViewController, PUAlbumPickerSessionInfo, PUAlbumPickerViewControllerSpec, UINavigationController;

__attribute__((visibility("hidden")))
@interface PUAlbumPickerViewController : UIViewController <PUSessionInfoObserver>
{
    UINavigationController *_contentNavigationController;
    PHCollectionList *_collectionList;
    CDUnknownBlockType _completionHandler;
    PUAlbumPickerViewControllerSpec *_spec;
    PUAlbumPickerSessionInfo *_albumPickerSessionInfo;
    PUAlbumListViewController *__albumListViewController;
}

@property(retain, nonatomic, setter=_setAlbumListViewController:) PUAlbumListViewController *_albumListViewController; // @synthesize _albumListViewController=__albumListViewController;
@property(retain, nonatomic, setter=_setSessionInfo:) PUAlbumPickerSessionInfo *albumPickerSessionInfo; // @synthesize albumPickerSessionInfo=_albumPickerSessionInfo;
@property(retain, nonatomic, setter=_setSpec:) PUAlbumPickerViewControllerSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
@property(retain, nonatomic, setter=_setContentNavigationController:) UINavigationController *contentNavigationController; // @synthesize contentNavigationController=_contentNavigationController;
- (void).cxx_destruct;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (void)loadView;
- (void)dealloc;
- (id)initWithSpec:(id)arg1 sessionInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

