/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PHResourceDownloadRequestOptions : NSObject {

	BOOL _treatLivePhotoAsStill;
	BOOL _dontAllowRAW;

}

@property (assign,nonatomic) BOOL treatLivePhotoAsStill;              //@synthesize treatLivePhotoAsStill=_treatLivePhotoAsStill - In the implementation block
@property (assign,nonatomic) BOOL dontAllowRAW;                       //@synthesize dontAllowRAW=_dontAllowRAW - In the implementation block
-(BOOL)treatLivePhotoAsStill;
-(BOOL)dontAllowRAW;
-(void)setTreatLivePhotoAsStill:(BOOL)arg1 ;
-(void)setDontAllowRAW:(BOOL)arg1 ;
-(id)description;
@end
