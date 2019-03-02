/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKCFaceCollectionGalleryCollection.h>
#import <libobjc.A.dylib/NTKPhotoAlbumObserverDelegate.h>

@class CLKDevice, NSString;

@interface NTKCPhotoFaceCollectionGalleryCollection : NTKCFaceCollectionGalleryCollection <NTKPhotoAlbumObserverDelegate> {

	CLKDevice* _device;
	NSString* _albumName;

}
-(id)initForDevice:(id)arg1 ;
-(id)newFace;
-(void)photoAlbumChanged:(id)arg1 ;
@end
