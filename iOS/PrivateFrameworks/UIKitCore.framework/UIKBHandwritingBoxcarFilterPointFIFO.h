//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO
{
    NSMutableArray *_prevPoints;
    unsigned long long _width;
}

@property(nonatomic) unsigned long long width; // @synthesize width=_width;
@property(retain, nonatomic) NSMutableArray *prevPoints; // @synthesize prevPoints=_prevPoints;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)addPoint:(struct)arg1;
- (void)emitAveragedPoint;
- (id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2;

@end

