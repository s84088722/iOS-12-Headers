//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstallCoordination/IXOwnedDataPromiseSeed.h>

#import <InstallCoordination/NSCopying-Protocol.h>
#import <InstallCoordination/NSSecureCoding-Protocol.h>

@interface IXPromisedInMemoryDataSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>
{
}

+ (_Bool)supportsSecureCoding;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

