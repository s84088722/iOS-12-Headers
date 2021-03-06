/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxBitmap : FxImage <NSCopying> {

	FxBitmapPriv* _bitmapPriv;

}
+(void)setGuaranteeMemoryCallback:(/*function pointer*/void*)arg1 ;
-(unsigned long long)rowBytes;
-(unsigned long long)_packedRowBytes;
-(id)initWithInfo:(SCD_Struct_PA79)arg1 andData:(void*)arg2 ;
-(id)initWithCopy:(id)arg1 andInfo:(SCD_Struct_PA79)arg2 andRowBytes:(unsigned long long)arg3 ;
-(id)initWithCopy:(id)arg1 ;
-(BOOL)_verifyImage;
-(id)initWithCopy:(id)arg1 andInfo:(SCD_Struct_PA79)arg2 ;
-(void*)dataPtrForPositionX:(unsigned long long)arg1 Y:(unsigned long long)arg2 ;
-(void)setRowBytes:(unsigned long long)arg1 ;
-(BOOL)_ownsData;
-(void*)dataPtr;
-(id)initWithInfo:(SCD_Struct_PA79)arg1 rowBytes:(unsigned long long)arg2 andData:(void*)arg3 ;
-(void)_setOwned:(BOOL)arg1 ;
-(void)_setOwnedDataPtr:(void*)arg1 ;
-(id)initWithInfo:(SCD_Struct_PA79)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

