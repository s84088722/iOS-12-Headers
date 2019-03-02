/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLIntersiloUniverse.h>
@class CLSilo, CLServiceVendor;


@protocol CLIntersiloUniverse <NSObject>
@property (nonatomic,readonly) CLSilo * silo; 
@property (nonatomic,readonly) CLServiceVendor * vendor; 
@required
-(CLSilo *)silo;
-(CLServiceVendor *)vendor;

@end


@class CLSilo, CLServiceVendor, NSString;

@interface CLIntersiloUniverse : NSObject <CLIntersiloUniverse> {

	CLSilo* _silo;
	CLServiceVendor* _vendor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLSilo * silo;                         //@synthesize silo=_silo - In the implementation block
@property (nonatomic,readonly) CLServiceVendor * vendor;              //@synthesize vendor=_vendor - In the implementation block
+(id)newIsolatedUniverseWithOnlySilo:(id)arg1 ;
+(id)newSharedVendorUniverseWithSilo:(id)arg1 ;
-(CLSilo *)silo;
-(CLServiceVendor *)vendor;
-(id)initWithKey:(id)arg1 silo:(id)arg2 vendor:(id)arg3 ;
@end
