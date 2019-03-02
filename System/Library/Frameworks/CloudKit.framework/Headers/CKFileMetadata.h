/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CKFileMetadata : NSObject <NSSecureCoding> {

	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSNumber* _modTimeInSeconds;
	NSNumber* _fileSize;

}

@property (nonatomic,retain) NSNumber * deviceID;                      //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                        //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;                  //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,retain) NSNumber * modTimeInSeconds;              //@synthesize modTimeInSeconds=_modTimeInSeconds - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSNumber *)fileID;
-(NSNumber *)deviceID;
-(void)setDeviceID:(NSNumber *)arg1 ;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(NSNumber *)modTimeInSeconds;
-(void)setModTimeInSeconds:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSNumber *)fileSize;
@end
