/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:43:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@class NSData;

@interface PQLNameInjectionBase : NSData {

	unsigned long long _length;
	char* _bytes;

}

@property (nonatomic,readonly) NSData * sql; 
-(NSData *)sql;
-(unsigned long long)length;
-(void)dealloc;
-(const void*)bytes;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 ;
@end

