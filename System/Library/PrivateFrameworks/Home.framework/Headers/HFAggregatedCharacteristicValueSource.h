/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:39:51 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HFServiceDescriptor;


@protocol HFAggregatedCharacteristicValueSource <HFCharacteristicValueOperationBatching,NAIdentifiable,NSCopying>
@property (nonatomic,readonly) HFServiceDescriptor * primaryServiceDescriptor; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
@required
-(id)readValuesForCharacteristicTypes:(id)arg1;
-(id)writeValuesForCharacteristicTypes:(id)arg1;
-(id)readValuesForServiceStateRecipe:(id)arg1;
-(id)writeValuesForCharacteristicRecipes:(id)arg1;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)allCharacteristicsForCharacteristicType:(id)arg1;
-(HFServiceDescriptor *)primaryServiceDescriptor;
-(id)metadataForCharacteristicType:(id)arg1;
-(id)copyWithValueSource:(id)arg1;

@end

