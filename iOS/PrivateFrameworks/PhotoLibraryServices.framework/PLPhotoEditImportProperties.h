//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPhotoEditImportProperties : NSObject
{
    long long _baseEXIFOrientation;
    double _baseDuration;
}

+ (id)importPropertiesWithEXIFOrientation:(long long)arg1 duration:(double)arg2;
+ (id)importPropertiesWithEXIFOrientation:(long long)arg1;
@property(readonly, nonatomic) double baseDuration; // @synthesize baseDuration=_baseDuration;
@property(readonly, nonatomic) long long baseEXIFOrientation; // @synthesize baseEXIFOrientation=_baseEXIFOrientation;

@end

