/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKTransitTicketDetailDataSource <NSObject>
@required
-(unsigned long long)numberOfLegs;
-(id)titleForLeg:(unsigned long long)arg1;
-(long long)transitTicketDetailNumberOfRowsForLeg:(unsigned long long)arg1;
-(id)transitTicketDetailTitleForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;
-(id)transitTicketDetailValueForRow:(unsigned long long)arg1 leg:(unsigned long long)arg2;

@end

