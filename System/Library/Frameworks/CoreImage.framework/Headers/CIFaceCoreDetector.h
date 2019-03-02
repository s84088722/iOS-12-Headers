/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary, FCRFaceDetector;

@interface CIFaceCoreDetector : CIDetector {

	CIContext* context;
	NSMutableDictionary* featureOptions;
	BOOL _tracking;
	FCRFaceDetector* faceCoreDetector;

}

@property (nonatomic,retain) CIContext * context; 
@property (retain) FCRFaceDetector * faceCoreDetector; 
-(id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(CGAffineTransform*)arg3 ;
-(CGAffineTransform)ctmForImageWithBounds:(CGRect)arg1 orientation:(int)arg2 ;
-(void)setFaceCoreDetector:(FCRFaceDetector *)arg1 ;
-(id)createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(FCRFaceDetector *)faceCoreDetector;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(void)setContext:(CIContext *)arg1 ;
-(CIContext *)context;
@end
