//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NUCanvas;
@protocol OS_dispatch_queue;

@interface NUAsyncCanvas : NSObject
{
    NUCanvas *_canvas;
    NSObject<OS_dispatch_queue> *_layoutQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // @synthesize layoutQueue=_layoutQueue;
@property(readonly, nonatomic) NUCanvas *canvas; // @synthesize canvas=_canvas;
- (void).cxx_destruct;
- (void)layoutInBounds:(struct CGRect)arg1 traitCollection:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)layoutInBounds:(struct CGRect)arg1 traitCollection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCanvas:(id)arg1 layoutQueue:(id)arg2;
- (id)initWithCanvas:(id)arg1;

@end

