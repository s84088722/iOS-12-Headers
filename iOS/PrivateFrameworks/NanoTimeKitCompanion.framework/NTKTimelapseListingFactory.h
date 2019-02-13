//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, NSMutableSet;

@interface NTKTimelapseListingFactory : NSObject
{
    CLKDevice *_device;
    NSMutableSet *_assetListings;
}

+ (id)sharedInstanceForDevice:(id)arg1;
- (void).cxx_destruct;
- (void)discardAssets;
- (void)setTimelapseListingHasAssets:(id)arg1;
- (id)posterImageWithTheme:(unsigned long long)arg1;
- (id)heroImageWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(struct CLLocationCoordinate2D)arg3;
- (id)listingWithTheme:(unsigned long long)arg1 date:(id)arg2 location:(struct CLLocationCoordinate2D)arg3;
- (id)_initLibraryForDevice:(id)arg1;

@end

