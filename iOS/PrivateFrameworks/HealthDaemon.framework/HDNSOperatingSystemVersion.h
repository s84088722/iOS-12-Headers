//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDNSOperatingSystemVersion : NSObject
{
    CDStruct_f6aba300 _versionStruct;
}

+ (id)unknownVersion;
+ (id)versionWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;
@property CDStruct_f6aba300 versionStruct; // @synthesize versionStruct=_versionStruct;

@end

