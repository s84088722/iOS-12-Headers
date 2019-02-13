//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/NSCopying-Protocol.h>
#import <CloudDocs/NSSecureCoding-Protocol.h>

@class NSString;

@interface BRMangledID : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_mangledIDString;
}

+ (id)_containerIDFromSharedContainerID:(id)arg1 validate:(_Bool)arg2;
+ (id)_ownerNameFromSharedMangledIDString:(id)arg1 validate:(_Bool)arg2;
+ (id)_containerIDFromSharedMangledIDString:(id)arg1 validate:(_Bool)arg2;
+ (id)_sharedMangledIDStringWithContainerID:(id)arg1 ownerName:(id)arg2 validate:(_Bool)arg3;
+ (id)_privateUnmangledContainerID:(id)arg1 validate:(_Bool)arg2;
+ (id)_privateMangledContainerID:(id)arg1 validate:(_Bool)arg2;
+ (id)_mangledIDStringFromZoneName:(id)arg1 ownerName:(id)arg2 validate:(_Bool)arg3;
+ (_Bool)validateMangledIDString:(id)arg1;
+ (_Bool)validateOwnerName:(id)arg1;
+ (_Bool)validateContainerID:(id)arg1;
+ (id)documentsMangledID;
+ (id)desktopMangledID;
+ (_Bool)supportsSecureCoding;
+ (id)cloudDocsMangledID;
@property(readonly, nonatomic) NSString *mangledIDString; // @synthesize mangledIDString=_mangledIDString;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *aliasTargetContainerString;
@property(readonly, nonatomic) NSString *ownerName;
@property(readonly, nonatomic) NSString *appLibraryOrZoneName;
@property(readonly, nonatomic) _Bool isDocumentsMangledID;
@property(readonly, nonatomic) _Bool isDesktopMangledID;
@property(readonly, nonatomic) _Bool isBRTestMangledID;
@property(readonly, nonatomic) _Bool isPassbookMangledID;
@property(readonly, nonatomic) _Bool isCloudDocsMangledID;
@property(readonly, nonatomic) _Bool isPrivate;
@property(readonly, nonatomic) _Bool isShared;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToMangledID:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAliasTargetContainerString:(id)arg1;
- (id)initWithMangledString:(id)arg1;
- (id)initWithAppLibraryName:(id)arg1;
- (id)initWithZoneName:(id)arg1 ownerName:(id)arg2;
- (id)initWithRecordZoneID:(id)arg1;

@end

