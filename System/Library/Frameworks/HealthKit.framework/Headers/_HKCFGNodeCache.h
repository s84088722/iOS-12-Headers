/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _HKCFGNodeCache : NSObject {

	NSMutableDictionary* _cache;

}
-(id)nodesForPosition:(unsigned long long)arg1 nonTerminal:(id)arg2 withLengthAllowance:(unsigned long long)arg3 ;
-(void)cacheNodes:(id)arg1 forPosition:(unsigned long long)arg2 nonTerminal:(id)arg3 lengthAllowance:(unsigned long long)arg4 ;
-(id)init;
@end
