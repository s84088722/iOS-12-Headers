//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DAreaGenerator : NSObject
{
    vector_7200ab52 mTop;
    vector_7200ab52 mBottom;
    tvec2_84d5962d mYLimits;
    float mZeroValue;
}

+ (id)generatorWithYLimits:(tvec2_84d5962d)arg1 zeroValue:(float)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clipLine:(const vector_7200ab52 *)arg1 into:(vector_7200ab52 *)arg2;
- (id)createGeometry:(const vector_7584168e *)arg1;
- (void)addRow:(const vector_7584168e *)arg1;
- (float)clampedZero;
- (void)dealloc;
- (id)initWithYLimits:(tvec2_84d5962d)arg1 zeroValue:(float)arg2;

@end

