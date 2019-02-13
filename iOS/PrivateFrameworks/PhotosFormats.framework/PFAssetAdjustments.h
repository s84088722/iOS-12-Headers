//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosFormats/NSCopying-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@interface PFAssetAdjustments : NSObject <NSCopying>
{
    NSDate *_adjustmentTimestamp;
    NSDictionary *_propertyListDictionary;
}

+ (id)fingerprintWithAssetAdjustmentFingerprintData:(id)arg1;
+ (id)fingerPrintForData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSDictionary *propertyListDictionary; // @synthesize propertyListDictionary=_propertyListDictionary;
- (void).cxx_destruct;
- (id)description;
- (_Bool)writeToURL:(id)arg1 atomically:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPropertyListDictionary:(id)arg1;
- (id)initWithURL:(id)arg1;
@property(nonatomic) NSDate *adjustmentTimestamp;
@property(readonly, nonatomic) unsigned int adjustmentRenderTypes;
@property(readonly, copy, nonatomic) NSString *editorBundleID;
@property(readonly, nonatomic) long long adjustmentBaseVersion;
@property(readonly, nonatomic) NSData *adjustmentData;
@property(readonly, copy, nonatomic) NSString *adjustmentFormatVersion;
@property(readonly, copy, nonatomic) NSString *adjustmentFormatIdentifier;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5 renderTypes:(unsigned int)arg6;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4 editorBundleID:(id)arg5;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3 baseVersion:(long long)arg4;

@end

