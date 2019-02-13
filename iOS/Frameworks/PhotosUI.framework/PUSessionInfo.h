//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUPhotoSelectionManagerChangeObserver-Protocol.h>

@class NSOrderedSet, NSPointerArray, NSString, PHAssetCollection, PUPhotoSelectionManager;
@protocol PLAlbumProtocol;

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerChangeObserver>
{
    NSPointerArray *_observers;
    _Bool _selectingAssets;
    _Bool _selectingTargetAlbum;
    long long _status;
    PUPhotoSelectionManager *_photoSelectionManager;
    PHAssetCollection *_sourceAlbum;
    NSOrderedSet *_transferredAssets;
    struct NSObject *_targetAlbum;
    NSString *_targetAlbumName;
    NSString *_localizedPrompt;
    long long _promptLocation;
    CDUnknownBlockType _bannerGenerator;
    unsigned long long _selectionLimit;
}

@property(nonatomic) unsigned long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
@property(copy, nonatomic) CDUnknownBlockType bannerGenerator; // @synthesize bannerGenerator=_bannerGenerator;
@property(nonatomic) long long promptLocation; // @synthesize promptLocation=_promptLocation;
@property(copy, nonatomic) NSString *localizedPrompt; // @synthesize localizedPrompt=_localizedPrompt;
@property(retain, nonatomic) NSString *targetAlbumName; // @synthesize targetAlbumName=_targetAlbumName;
@property(retain, nonatomic) NSObject<PLAlbumProtocol> *targetAlbum; // @synthesize targetAlbum=_targetAlbum;
@property(copy, nonatomic) NSOrderedSet *transferredAssets; // @synthesize transferredAssets=_transferredAssets;
@property(retain, nonatomic) PHAssetCollection *sourceAlbum; // @synthesize sourceAlbum=_sourceAlbum;
@property(retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // @synthesize photoSelectionManager=_photoSelectionManager;
@property(readonly, nonatomic, getter=isSelectingTargetAlbum) _Bool selectingTargetAlbum; // @synthesize selectingTargetAlbum=_selectingTargetAlbum;
@property(readonly, nonatomic, getter=isSelectingAssets) _Bool selectingAssets; // @synthesize selectingAssets=_selectingAssets;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)removeSessionInfoObserver:(id)arg1;
- (void)addSessionInfoObserver:(id)arg1;
- (id)init;
- (_Bool)hasLocalTargetAlbum;
- (_Bool)hasTargetAlbum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

