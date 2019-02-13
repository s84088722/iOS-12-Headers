//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IPAAdjustmentVersion : NSObject
{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    NSString *_platform;
}

+ (id)versionFromArchivalRepresentation:(id)arg1;
+ (id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2;
+ (id)versionForMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;
+ (id)validatePlatformString:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(readonly, nonatomic) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToAdjustmentVersion:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setMinorVersion:(unsigned long long)arg1;
- (long long)compare:(id)arg1;
- (id)archivalRepresentation;
- (id)initWithMajor:(unsigned long long)arg1 minor:(unsigned long long)arg2 platform:(id)arg3;

@end

