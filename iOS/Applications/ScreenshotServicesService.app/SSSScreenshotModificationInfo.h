//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface SSSScreenshotModificationInfo : NSObject <NSSecureCoding>
{
    struct SSSCropInfo _cropInfo;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct SSSCropInfo cropInfo; // @synthesize cropInfo=_cropInfo;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

