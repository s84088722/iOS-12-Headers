//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BrandAction : MapsAction
{
    unsigned long long _brandMUID;
    NSString *_brandName;
}

@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(nonatomic) unsigned long long brandMUID; // @synthesize brandMUID=_brandMUID;
- (void).cxx_destruct;
- (void)resolveBrandPOIsWithTraits:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithName:(id)arg1 muid:(unsigned long long)arg2;

@end

