//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface QLThumbnailVersion : NSObject <NSSecureCoding>
{
    NSDate *_modificationDate;
    unsigned long long _fileSize;
    NSString *_generatorID;
    NSString *_generatorVersion;
    NSData *_versionIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSData *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy) NSString *generatorVersion; // @synthesize generatorVersion=_generatorVersion;
@property(copy) NSString *generatorID; // @synthesize generatorID=_generatorID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, getter=isDefaultVersion) _Bool defaultVersion;
@property(readonly, getter=isAutomaticallyGenerated) _Bool automaticallyGenerated;
- (_Bool)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFPItem:(id)arg1 automaticallyGenerated:(_Bool)arg2;
- (id)initWithFileURL:(id)arg1 automaticallyGenerated:(_Bool)arg2;
- (void)getGeneratorID:(id *)arg1 version:(id *)arg2 forContentType:(id)arg3;
- (id)initWithFPItem:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3;
- (id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 versionIdentifier:(id)arg3 generatorID:(id)arg4 generatorVersion:(id)arg5;
- (id)init;

@end

