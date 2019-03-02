/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTSimLabel : NSObject <NSCopying, NSSecureCoding> {

	NSString* _unique_id;
	NSString* _text;

}

@property (nonatomic,retain) NSString * unique_id;              //@synthesize unique_id=_unique_id - In the implementation block
@property (nonatomic,retain) NSString * text;                   //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)unique_id;
-(void)setUnique_id:(NSString *)arg1 ;
-(id)initWithId:(id)arg1 andText:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
@end
