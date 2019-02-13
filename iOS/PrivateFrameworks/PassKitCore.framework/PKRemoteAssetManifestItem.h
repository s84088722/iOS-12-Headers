//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface PKRemoteAssetManifestItem : NSObject <NSSecureCoding>
{
    NSURL *_localURL;
    NSURL *_remoteURL;
    NSURL *_passURL;
    NSString *_sha1Hex;
    NSNumber *_size;
    NSDictionary *_manifest;
}

+ (id)sharedURLSession;
+ (id)itemWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id *)arg4;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *manifest; // @synthesize manifest=_manifest;
@property(copy, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(copy, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *sha1Hex; // @synthesize sha1Hex=_sha1Hex;
@property(copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(copy, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
- (void).cxx_destruct;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long itemType;
- (_Bool)isZipFile;
@property(readonly, nonatomic) __weak NSString *relativeLocalPath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id *)arg4;
- (void)downloadAssetWithCompletion:(CDUnknownBlockType)arg1;

@end

