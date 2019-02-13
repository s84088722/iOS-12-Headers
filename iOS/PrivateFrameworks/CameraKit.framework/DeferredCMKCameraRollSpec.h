//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/CMKCameraRollSpec.h>

@class DeferredFrameworkLoader;

@interface DeferredCMKCameraRollSpec : CMKCameraRollSpec
{
    _Bool _isPad;
    CMKCameraRollSpec *_spec;
    DeferredFrameworkLoader *_loader;
}

@property(nonatomic) _Bool isPad; // @synthesize isPad=_isPad;
@property(retain, nonatomic) DeferredFrameworkLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) CMKCameraRollSpec *spec; // @synthesize spec=_spec;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadAlbumViewController:(id)arg1 withAssetCollection:(id)arg2 fetchResultContainingAssetCollection:(id)arg3;
- (void)prepareAlbumViewControllerForReuse:(id)arg1 withAssetCollection:(id)arg2 inApplicationViewController:(id)arg3;
- (id)newAlbumNavigationControllerForAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 inApplicationViewController:(id)arg3;
- (void)ensureCMKCameraRollSpec;
- (id)initWithDeferredLoader:(id)arg1 isPad:(_Bool)arg2;

@end

