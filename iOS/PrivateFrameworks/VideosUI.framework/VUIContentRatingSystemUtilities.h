//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIContentRatingSystemUtilities : NSObject
{
}

+ (id)_ratingSystemStringLookUpDictionary;
+ (id)_ratingSystemLookUpDictionary;
+ (_Bool)_isRatingSystemForTV:(long long)arg1;
+ (_Bool)_isRatingSystemForMusic:(long long)arg1;
+ (_Bool)_isRatingSystemForMovies:(long long)arg1;
+ (long long)ratingSystemKindForRatingSystem:(long long)arg1;
+ (id)stringForRatingSystem:(long long)arg1;
+ (long long)ratingSystemFromString:(id)arg1;

@end

