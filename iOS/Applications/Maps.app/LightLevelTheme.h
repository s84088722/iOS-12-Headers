//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LightLevelTheme : NSObject
{
}

+ (id)mapReplacementColor;
+ (id)directionsListDimmedHighlightedCellBackgroundColor;
+ (id)directionsListDimmedDividerColor;
+ (id)directionsListDividerColorWithDarkBackground:(_Bool)arg1;
+ (id)directionsListDividerColor;
+ (id)dimmedBackgroundColor;
+ (id)updateTextAttributesForDimmedState:(id)arg1 isCompact:(_Bool)arg2 isDimmed:(_Bool)arg3 isUIDark:(_Bool)arg4;
+ (id)mediumSmallTextAttributes:(_Bool)arg1 isDimmed:(_Bool)arg2 isUIDark:(_Bool)arg3;
+ (id)lightLargeTextAttributes:(_Bool)arg1 isDimmed:(_Bool)arg2 isUIDark:(_Bool)arg3;
+ (id)lightSmallTextAttributes:(_Bool)arg1 isDimmed:(_Bool)arg2 isUIDark:(_Bool)arg3;
+ (id)mediumLargeTextAttributes:(_Bool)arg1 isDimmed:(_Bool)arg2 isUIDark:(_Bool)arg3;
+ (id)calculatedTextColor:(_Bool)arg1 isDimmed:(_Bool)arg2 isUIDark:(_Bool)arg3;
+ (id)compactTextColor;
+ (id)dimmedTextColor;
+ (id)darkUITextColor;
+ (id)textColor;
+ (id)mapsLightFontOfSize:(double)arg1;
+ (id)mapsMediumFontOfSize:(double)arg1;

@end

