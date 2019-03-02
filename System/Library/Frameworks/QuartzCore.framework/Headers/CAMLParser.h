/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL, NSError;

@interface CAMLParser : NSObject {

	CAMLParserDataRef _data;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLParserDelegate> delegate; 
@property (readonly) NSError * error; 
@property (readonly) id result; 
+(id)parser;
+(id)parseContentsOfURL:(id)arg1 ;
-(BOOL)parseBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)parseString:(id)arg1 ;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)parserError:(id)arg1 ;
-(void)setElementValue:(id)arg1 ;
-(id)attributeForKey:(id)arg1 remove:(BOOL)arg2 ;
-(id)elementValue;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(id)willLoadResourceFromURL:(id)arg1 ;
-(void)parserWarning:(id)arg1 ;
-(id)objectById:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(BOOL)parseData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CAMLParserDelegate>)arg1 ;
-(id<CAMLParserDelegate>)delegate;
-(id)result;
-(NSURL *)baseURL;
-(NSError *)error;
@end
