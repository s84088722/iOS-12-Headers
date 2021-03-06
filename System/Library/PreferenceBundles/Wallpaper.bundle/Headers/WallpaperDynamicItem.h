/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:49:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Wallpaper/WallpaperItem.h>

@class NSString, NSDictionary;

@interface WallpaperDynamicItem : NSObject <WallpaperItem> {

	NSDictionary* _wallpaperDictionary;
	unsigned long long _variantIndex;

}

@property (nonatomic,readonly) long long itemType; 
@property (nonatomic,readonly) unsigned long long wallpaperID; 
@property (nonatomic,readonly) NSString * wallpaperName; 
@property (nonatomic,readonly) NSString * thumbnailImagePath; 
@property (nonatomic,readonly) NSString * fullsizeImagePath; 
@property (nonatomic,readonly) NSString * videoPath; 
@property (nonatomic,readonly) NSDictionary * dynamicVariant; 
-(NSString *)wallpaperName;
-(long long)itemType;
-(unsigned long long)wallpaperID;
-(NSString *)thumbnailImagePath;
-(NSString *)fullsizeImagePath;
-(NSDictionary *)dynamicVariant;
-(id)initWithDictionary:(id)arg1 index:(unsigned long long)arg2 ;
-(NSString *)videoPath;
@end

