//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRScrollPositionObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface FRWebScrollPositionObject : FRScrollPositionObject <NSSecureCoding>
{
    NSString *_domPathIdentifier;
}

@property(copy, nonatomic) NSString *domPathIdentifier; // @synthesize domPathIdentifier=_domPathIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
