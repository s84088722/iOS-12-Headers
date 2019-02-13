//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceLocationMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSString *_city;
    long long _year;
}

@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) NSString *city; // @synthesize city=_city;
- (_Bool)canFallbackToDejunkAndDedupeForShowMore;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_potentialMemoriesWithCityNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end

