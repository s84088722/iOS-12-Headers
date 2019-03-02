/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:50 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSCKExportOperation;

@interface NSCKExportedObject : NSManagedObject

@property (nonatomic,retain) NSNumber * changeTypeNum; 
@property (nonatomic,retain) NSNumber * typeNum; 
@property (nonatomic,retain) NSString * ckRecordName; 
@property (nonatomic,retain) NSString * zoneName; 
@property (assign,nonatomic) long long changeType; 
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,retain) NSCKExportOperation * operation; 
-(long long)changeType;
-(void)setChangeType:(long long)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
@end
