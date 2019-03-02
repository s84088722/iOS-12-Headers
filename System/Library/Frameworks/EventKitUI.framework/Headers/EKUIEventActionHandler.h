/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKUIEventActionHandler : NSObject
+(id)sharedInstance;
-(void)donateInteractionForAction:(id)arg1 onEvent:(id)arg2 ;
-(void)donatePredictiveAction:(id)arg1 forEvent:(id)arg2 ;
-(id)_intentForAction:(id)arg1 onEvent:(id)arg2 ;
-(id)createEventIntentForEvent:(id)arg1 ;
-(id)createEventIntentForEvent:(id)arg1 withSuggestionsInfoUniqueKey:(id)arg2 ;
-(void)handleEventCreation:(id)arg1 ;
-(void)prepareForEventUpdate:(id)arg1 ;
-(void)handleEventUpdate:(id)arg1 ;
-(void)handleEventDeletion:(id)arg1 ;
-(void)removeInteractionsForCalendar:(id)arg1 ;
@end
