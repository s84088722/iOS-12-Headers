//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PKOSVersionRequirement;

@interface PKOSVersionRequirementRange : NSObject
{
    PKOSVersionRequirement *_minimum;
    PKOSVersionRequirement *_maximum;
}

@property(readonly, nonatomic) PKOSVersionRequirement *maximum; // @synthesize maximum=_maximum;
@property(readonly, nonatomic) PKOSVersionRequirement *minimum; // @synthesize minimum=_minimum;
- (void).cxx_destruct;
- (_Bool)versionMeetsRequirements:(id)arg1 deviceClass:(id)arg2;
- (id)initWithMinimumVersion:(id)arg1 maximumVersion:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

