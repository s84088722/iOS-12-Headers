//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CorePDF/UIPDFAnnotation.h>

__attribute__((visibility("hidden")))
@interface UIPDFSquareOrCircleAnnotation : UIPDFAnnotation
{
    double _W;
    unsigned short _S;
    struct CGPDFArray *_D;
    double _SE;
    double _I;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)strokePath:(struct CGContext *)arg1 inRect:(struct CGRect)arg2;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;

@end

