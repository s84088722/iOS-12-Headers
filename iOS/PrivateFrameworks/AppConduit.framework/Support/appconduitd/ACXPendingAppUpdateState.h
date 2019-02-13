//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface ACXPendingAppUpdateState : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_companionAppBundleID;
    double _creationTime;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, copy, nonatomic) NSString *companionAppBundleID; // @synthesize companionAppBundleID=_companionAppBundleID;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) _Bool hasExpired;
- (id)initWithCompanionBundleID:(id)arg1;

@end

