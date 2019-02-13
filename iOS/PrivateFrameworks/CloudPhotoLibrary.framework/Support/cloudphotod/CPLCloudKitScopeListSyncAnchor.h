//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class CKServerChangeToken, NSData;

@interface CPLCloudKitScopeListSyncAnchor : NSObject <NSSecureCoding>
{
    CKServerChangeToken *_privateChangeToken;
    CKServerChangeToken *_sharedChangeToken;
}

+ (id)cloudKitScopeListSyncAnchorWithScopeListSyncAnchor:(struct NSData *)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CKServerChangeToken *sharedChangeToken; // @synthesize sharedChangeToken=_sharedChangeToken;
@property(readonly, nonatomic) CKServerChangeToken *privateChangeToken; // @synthesize privateChangeToken=_privateChangeToken;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSData *scopeListSyncAnchor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrivateChangeToken:(id)arg1 sharedChangeToken:(id)arg2;

@end

