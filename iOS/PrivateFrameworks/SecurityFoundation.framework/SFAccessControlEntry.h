//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface SFAccessControlEntry : NSObject <NSCopying, NSSecureCoding>
{
    id _accessControlEntryInternal;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleID;
@property(nonatomic) _Bool canWrite;
@property(nonatomic) _Bool canRead;
@property(nonatomic, getter=isOwner) _Bool owner;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 owner:(_Bool)arg2 canRead:(_Bool)arg3 canWrite:(_Bool)arg4;

@end

