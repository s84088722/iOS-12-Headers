//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKFaceCollectionObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceObserver-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, NTKFaceCollection;

@interface NTKComplicationControllerCache : NSObject <NTKFaceObserver, NTKFaceCollectionObserver>
{
    NSMutableDictionary *_controllers;
    NSMutableDictionary *_controllersToOwningFace;
    NSMapTable *_faceToLegacyControllers;
    NTKFaceCollection *_libraryCollection;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (void)_purge;
- (void)_updateComplicationsForFace:(id)arg1;
- (void)_removeComplicationsForFace:(id)arg1;
- (void)_addComplicationsForFace:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)setLibraryCollection:(id)arg1;
- (id)legacyControllerForComplication:(id)arg1 face:(id)arg2 slot:(id)arg3 create:(CDUnknownBlockType)arg4;
- (id)controllerForComplication:(id)arg1 family:(long long)arg2 face:(id)arg3 create:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

