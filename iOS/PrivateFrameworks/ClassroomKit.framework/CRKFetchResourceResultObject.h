//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSData;

@interface CRKFetchResourceResultObject : CATTaskResultObject
{
    NSData *_resourceData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *resourceData; // @synthesize resourceData=_resourceData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

