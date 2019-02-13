//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCItemID, BRFieldCKInfo, BRMangledID, NSData, NSString;

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding>
{
    BRFieldCKInfo *_ckInfo;
    BRCItemID *_parentID;
    BOOL _state;
    BOOL _type;
    BOOL _mode;
    long long _birthtime;
    long long _lastUsedTime;
    long long _favoriteRank;
    NSString *_logicalName;
    NSString *_aliasTarget;
    _Bool _hiddenExt;
    NSData *_xattrSignature;
    NSData *_lazyXattr;
    NSData *_finderTags;
    NSString *_trashPutBackPath;
    BRCItemID *_trashPutBackParentID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) BRCItemID *trashPutBackParentID; // @synthesize trashPutBackParentID=_trashPutBackParentID;
@property(retain, nonatomic) NSString *trashPutBackPath; // @synthesize trashPutBackPath=_trashPutBackPath;
@property(readonly, nonatomic) NSString *aliasTarget; // @synthesize aliasTarget=_aliasTarget;
@property(retain, nonatomic) NSString *logicalName; // @synthesize logicalName=_logicalName;
@property(retain, nonatomic) NSData *finderTags; // @synthesize finderTags=_finderTags;
@property(retain, nonatomic) NSData *lazyXattr; // @synthesize lazyXattr=_lazyXattr;
@property(retain, nonatomic) NSData *xattrSignature; // @synthesize xattrSignature=_xattrSignature;
@property(nonatomic, getter=isHiddenExt) _Bool hiddenExt; // @synthesize hiddenExt=_hiddenExt;
@property(retain, nonatomic) BRCItemID *parentID; // @synthesize parentID=_parentID;
@property(nonatomic) long long favoriteRank; // @synthesize favoriteRank=_favoriteRank;
@property(nonatomic) long long lastUsedTime; // @synthesize lastUsedTime=_lastUsedTime;
@property(nonatomic) long long birthtime; // @synthesize birthtime=_birthtime;
@property(nonatomic) BOOL mode; // @synthesize mode=_mode;
@property(nonatomic) BOOL type; // @synthesize type=_type;
@property(nonatomic) BOOL state; // @synthesize state=_state;
@property(retain, nonatomic) BRFieldCKInfo *ckInfo; // @synthesize ckInfo=_ckInfo;
- (void).cxx_destruct;
- (_Bool)isEtagEqual:(id)arg1;
- (id)displayName;
- (_Bool)isWritable;
- (_Bool)isExecutable;
- (unsigned long long)diffAgainst:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)check:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (_Bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatInfo:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)description;
- (id)descriptionWithContext:(id)arg1 origName:(id)arg2;
@property(readonly, nonatomic) _Bool iWorkShareable;
@property(readonly, nonatomic) NSString *representableName;
- (void)_updateAliasTarget:(id)arg1;
- (id)_aliasTargetItemID;
@property(readonly, nonatomic) BRMangledID *_aliasTargetMangledID;

@end

