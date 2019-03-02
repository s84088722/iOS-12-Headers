/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.vvservice/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMAP/IMAP-Structs.h>
@class IMAPService, NSMutableData;

@interface IMAPServiceBodyLoadMonitor : NSObject {

	IMAPService* _service;
	CFDictionaryRef _loadContextsByLibraryId;
	NSMutableData* _headerData;

}

@property (retain) NSMutableData * headerData;              //@synthesize headerData=_headerData - In the implementation block
+(id)_headersToPreserve;
-(void)progressiveMimeParser:(id)arg1 finishedMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 beganDataForMimePart:(id)arg2 ;
-(void)progressiveMimeParser:(id)arg1 failedWithError:(id)arg2 ;
-(NSMutableData *)headerData;
-(id)initForService:(id)arg1 ;
-(BOOL)progressiveBodyLoadHasStartedForRecord:(void*)arg1 ;
-(void)lengthsOfBodyLoadForRecord:(void*)arg1 expected:(unsigned*)arg2 current:(unsigned*)arg3 ;
-(void)bodyLoadStartedForRemoteUid:(unsigned)arg1 inStore:(id)arg2 data:(id)arg3 section:(id)arg4 ;
-(void)bodyLoadContinuedForRemoteUid:(unsigned)arg1 inStore:(id)arg2 data:(id)arg3 section:(id)arg4 ;
-(void)bodyLoadEndedForRemoteUid:(unsigned)arg1 inStore:(id)arg2 data:(id)arg3 section:(id)arg4 ;
-(void)_activityCompleted:(id)arg1 ;
-(id)contextForLibraryId:(int)arg1 create:(BOOL)arg2 ;
-(int)_libraryIdForRemoteUid:(unsigned)arg1 inStore:(id)arg2 ;
-(void)setHeaderData:(NSMutableData *)arg1 ;
-(id)_createHeaderDictionaryForData:(id)arg1 ;
-(void)_postDataAvailableWithUserInfo:(id)arg1 ;
-(void)dealloc;
@end
