/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHAssetPropertySet.h>
@class PHAsset;


@protocol PHAssetPropertySet <PHObjectPropertySet>
@property (nonatomic,__weak,readonly) PHAsset * asset; 
@required
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;
-(PHAsset *)asset;

@end


@class PHAsset, NSString;

@interface PHAssetPropertySet : NSObject <PHAssetPropertySet> {

	PHAsset* _asset;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;              //@synthesize asset=_asset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertiesToFetch;
+(BOOL)isToMany;
+(id)keyPathToPrimaryObject;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)propertiesToPrefetch;
+(id)entityName;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(PHAsset *)asset;
@end
