/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxMatrix44 : NSObject {

	double _mat[4][4];

}
-(double*)matrix;
-(void)setMatrix:(double)arg1 ;
-(id)initWithMatrix44Data:(double)arg1 ;
-(BOOL)_planarInverseZ;
-(id)initWithColorMatrix44Data:(double)arg1 ;
-(id)initWithFxMatrix:(id)arg1 ;
-(void)setToIdentity;
-(CGPoint)transform2DPoint:(CGPoint)arg1 ;
-(FxPoint3D)transform3DPoint:(FxPoint3D)arg1 ;
-(void)transpose;
-(BOOL)invert;
-(id)init;
-(id)description;
@end

