//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class NSMutableArray, UIBezierPath;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingBezierPathPointFIFO : UIKBHandwritingPointFIFO
{
    UIBezierPath *_path;
    CDUnknownBlockType _emissionHandler;
    NSMutableArray *_prevPoints;
}

@property(retain, nonatomic) NSMutableArray *prevPoints; // @synthesize prevPoints=_prevPoints;
@property(copy) CDUnknownBlockType emissionHandler; // @synthesize emissionHandler=_emissionHandler;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)clear;
- (void)flush;
- (void)addPoint:(struct)arg1;
- (id)initWithFIFO:(id)arg1;

@end

