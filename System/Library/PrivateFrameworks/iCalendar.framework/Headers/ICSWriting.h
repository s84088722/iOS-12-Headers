/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSWriting
@required
-(id)propertiesToIncludeForChecksumVersion:(int)arg1;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
-(id)parametersToIncludeForChecksumVersion:(int)arg1;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(id)ICSStringWithOptions:(unsigned long long)arg1;

@end

