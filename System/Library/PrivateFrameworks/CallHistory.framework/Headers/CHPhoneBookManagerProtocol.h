/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHPhoneBookManagerProtocol <NSObject>
@required
+(id)get;
-(id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3;
-(id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(BOOL)arg2;
-(id)getPersonsNameForContact:(id)arg1;
-(id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3;
-(BOOL)isABContactASuggestion;

@end

