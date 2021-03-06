/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@interface KenBurnsCompositionItem : MovieCompositionItem
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_Mi11)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_Mi1)arg1 paddedFromTime:(SCD_Struct_Mi1)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_Mi11)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_Mi1)arg1 ;
@end

