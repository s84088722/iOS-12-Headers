/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTMapItem;

@interface RTInferredMapItem : NSObject {

	RTMapItem* _mapItem;
	double _confidence;
	unsigned long long _source;

}

@property (nonatomic,readonly) RTMapItem * mapItem;                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) unsigned long long source;              //@synthesize source=_source - In the implementation block
+(BOOL)hasKnownTypeItem:(id)arg1 ;
+(id)dedupeInferredMapItems:(id)arg1 ;
+(id)heaviestMapItemFrom:(id)arg1 closestToLocation:(id)arg2 distanceCalculator:(id)arg3 error:(id*)arg4 ;
+(double)consolidatedConfidenceFromConfidences:(id)arg1 ;
+(unsigned long long)consolidatedSourceFromInferredMapItems:(id)arg1 ;
-(RTMapItem *)mapItem;
-(id)initWithMapItem:(id)arg1 confidence:(double)arg2 source:(unsigned long long)arg3 ;
-(id)init;
-(id)description;
-(unsigned long long)source;
-(double)confidence;
@end
