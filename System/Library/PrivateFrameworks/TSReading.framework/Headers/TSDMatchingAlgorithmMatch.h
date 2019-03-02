/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDMatchingAlgorithmMatch
@property (nonatomic,readonly) long long matchCost; 
@property (nonatomic,readonly) id incomingMatchObject; 
@property (nonatomic,readonly) id outgoingMatchObject; 
@required
-(long long)matchCost;
-(long long)compareToMatch:(id)arg1;
-(BOOL)conflictsWithMatch:(id)arg1;
-(id)incomingMatchObject;
-(id)outgoingMatchObject;

@end
