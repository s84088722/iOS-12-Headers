//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSCopying-Protocol.h>
#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface IXDataPromiseSeed : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    unsigned long long _creatorIdentifier;
    NSUUID *_uniqueIdentifier;
    unsigned long long _totalBytesNeededOnDisk;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long totalBytesNeededOnDisk; // @synthesize totalBytesNeededOnDisk=_totalBytesNeededOnDisk;
@property(retain, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(nonatomic) unsigned long long creatorIdentifier; // @synthesize creatorIdentifier=_creatorIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class clientPromiseClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

