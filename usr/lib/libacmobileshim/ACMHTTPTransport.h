/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACFHTTPTransport.h>

@interface ACMHTTPTransport : ACFHTTPTransport {

	unsigned long long _identifier;

}

@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)didStart;
-(void)updateBackgroundTask;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)didEnd;
@end
