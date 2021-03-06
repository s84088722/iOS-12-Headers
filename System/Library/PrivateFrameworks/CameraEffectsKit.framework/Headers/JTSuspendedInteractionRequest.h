/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface JTSuspendedInteractionRequest : NSObject {

	NSString* _tag;
	NSArray* _excludedChildViewControllers;

}

@property (nonatomic,retain) NSString * tag;                                      //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSArray * excludedChildViewControllers;              //@synthesize excludedChildViewControllers=_excludedChildViewControllers - In the implementation block
+(id)requestWithTag:(id)arg1 excludedViewControllers:(id)arg2 ;
-(void)setExcludedChildViewControllers:(NSArray *)arg1 ;
-(NSArray *)excludedChildViewControllers;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
@end

