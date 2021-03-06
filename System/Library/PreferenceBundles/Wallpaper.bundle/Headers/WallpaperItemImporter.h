/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:49:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Wallpaper/Wallpaper-Structs.h>
@class NSObject, NSArray;

@interface WallpaperItemImporter : NSObject {

	NSObject*<OS_dispatch_queue> _importQueue;
	NSArray* _stillsItems;
	NSArray* _liveItems;
	NSArray* _dynamicItems;
	CGSize _referenceSize;

}
+(id)_pathForStillWallpapers;
+(id)_wallpaperFilesByIDAtPath:(id)arg1 ;
+(id)_defaultStillsOrdering;
+(id)_pathForLiveWallpapers;
+(id)_defaultLiveOrdering;
-(id)initWithScreenReferenceSize:(CGSize)arg1 ;
-(id)wallpaperItemsOfType:(long long)arg1 ;
-(void)importWallpapers;
-(BOOL)_importQueue_importStillItems;
-(BOOL)_importQueue_importLiveItems;
-(BOOL)_importQueue_importDynamicItems;
-(id)_wallpaperItemForFileList:(NSMutableArray*)arg1 withType:(long long)arg2 ;
-(id)_wallpaperItemsForFileLists:(id)arg1 withType:(long long)arg2 sortedIDs:(id)arg3 ;
-(id)init;
@end

