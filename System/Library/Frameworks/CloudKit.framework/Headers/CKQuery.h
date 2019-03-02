/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate, NSArray;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying> {

	NSString* _recordType;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;

}

@property (nonatomic,copy) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSString * recordType;                  //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRecordType:(NSString *)arg1 ;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 ;
-(NSString *)recordType;
-(id)CKPropertiesDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
@end
