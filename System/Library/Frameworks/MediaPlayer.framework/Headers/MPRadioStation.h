/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPRadioStation : NSObject <NSCopying, NSSecureCoding> {

	long long _uniqueIdentifier;
	NSString* _localizedName;
	NSString* _localizedDescription;
	NSString* _stationStringID;

}

@property (nonatomic,copy) NSString * stationStringID;                   //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,nonatomic) long long uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)stationStringID;
-(void)setStationStringID:(NSString *)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(long long)uniqueIdentifier;
-(void)setUniqueIdentifier:(long long)arg1 ;
-(NSString *)localizedName;
@end
