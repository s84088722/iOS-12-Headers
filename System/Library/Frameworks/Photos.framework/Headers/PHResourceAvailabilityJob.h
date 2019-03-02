/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSMutableArray, NSArray;

@interface PHResourceAvailabilityJob : PLDaemonJob {

	NSMutableArray* _requests;
	NSArray* _cancelledRequestIdentifiers;

}
-(void)addRequest:(id)arg1 ;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 connection:(id)arg2 ;
-(long long)daemonOperation;
-(BOOL)shouldRunOnDaemonSerialQueue;
-(void)cancelAll;
-(id)description;
-(void)run;
@end
