/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:28:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSITableDelegate
@required
-(void)executeStatementFromString:(id)arg1;
-(void)executeStatementFromString:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2;
-(id)statementFromString:(id)arg1;
-(void)executeStatement:(id)arg1 withResultEnumerationBlock:(/*^block*/id)arg2;
-(long long)lastInsertedRowID;
-(void)executeStatement:(id)arg1;
-(void)bindMatchingIds:(const CFArrayRef)arg1 range:(NSRange)arg2;
-(void)unbindMatchingIds;
-(void)bindMatchingIds:(const CFSetRef)arg1;
-(void)prepareForNumberOfMatchingIds:(unsigned long long)arg1;
-(void)unprepareMatchingIds;
-(void)bindMatchingIds:(const long long*)arg1 numberOfMatchingIds:(unsigned long long)arg2;

@end
