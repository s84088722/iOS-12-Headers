/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFDestinationPrivate, PDFPage;

@interface PDFDestination : NSObject <NSCopying> {

	PDFDestinationPrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFPage * page; 
@property (nonatomic,readonly) CGPoint point; 
@property (assign,nonatomic) double zoom; 
-(id)initWithDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 ;
-(const CFArrayRef)createArrayRef;
-(id)initWithPage:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)point;
-(int)type;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(long long)compare:(id)arg1 ;
-(PDFPage *)page;
-(id)document;
-(void)commonInit;
@end
