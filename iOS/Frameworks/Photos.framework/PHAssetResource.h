//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, PHPhotoLibrary;

@interface PHAssetResource : NSObject
{
    _Bool _locallyAvailable;
    _Bool _derivative;
    long long _resourceType;
    NSString *_assetLocalIdentifier;
    NSString *_uniformTypeIdentifier;
    NSString *_originalFilename;
    NSURL *_fileURL;
    NSURL *_privateFileURL;
    CDUnknownBlockType _privateFileLoader;
    PHPhotoLibrary *_photoLibrary;
    long long _pixelWidth;
    long long _pixelHeight;
    unsigned long long _fileSize;
}

+ (id)assetResourcesForAsset:(id)arg1;
+ (id)assetResourcesForLivePhoto:(id)arg1;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(_Bool)arg2;
+ (id)_managedAssetWithRelationshipsPrefetchedForAsset:(id)arg1 inLibrary:(id)arg2 error:(id *)arg3;
@property(nonatomic, setter=_setFileSize:) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic, getter=isDerivative) _Bool derivative; // @synthesize derivative=_derivative;
@property(nonatomic, getter=isLocallyAvailable, setter=_setIsLocallyAvailable:) _Bool locallyAvailable; // @synthesize locallyAvailable=_locallyAvailable;
@property(nonatomic, setter=_setPixelHeight:) long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(nonatomic, setter=_setPixelWidth:) long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(retain, nonatomic, setter=_setPhotoLibrary:) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(copy, nonatomic, setter=_setPrivateFileLoader:) CDUnknownBlockType privateFileLoader; // @synthesize privateFileLoader=_privateFileLoader;
@property(retain, nonatomic, setter=_setPrivateFileURL:) NSURL *privateFileURL; // @synthesize privateFileURL=_privateFileURL;
@property(retain, nonatomic, setter=_setFileURL:) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic, setter=_setOriginalFilename:) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(copy, nonatomic, setter=_setUniformTypeIdentifier:) NSString *uniformTypeIdentifier; // @synthesize uniformTypeIdentifier=_uniformTypeIdentifier;
@property(copy, nonatomic, setter=_setAssetLocalIdentifier:) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_resourceType;
- (void).cxx_destruct;
- (id)description;
- (long long)analysisType;
@property(readonly, nonatomic, getter=isLibraryAssetResource) _Bool libraryAssetResource;
- (id)initWithResourceType:(long long)arg1;

@end

