/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _UIStatusBarDisplayItemRelation : NSObject

@property (getter=isFulfilled,nonatomic,readonly) BOOL fulfilled; 
@property (nonatomic,readonly) NSArray * itemStates; 
+(id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2 ;
+(id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2 ;
+(id)anyRelationWithRelations:(id)arg1 ;
+(id)allRelationWithRelations:(id)arg1 ;
-(id)description;
-(id)type;
-(id)_ui_descriptionBuilder;
-(BOOL)isFulfilled;
-(NSArray *)itemStates;
@end

