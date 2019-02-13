//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUDevice.h>

@class NURenderer;

@interface NUDevice_iOS : NUDevice
{
    NURenderer *_renderer;
}

- (void).cxx_destruct;
- (id)_newOpenGLRendererWithOptions:(id)arg1;
- (id)_newMetalRendererWithOptions:(id)arg1;
- (id)_newRendererWithOptions:(id)arg1;
- (id)_newLowPriorityRenderer;
- (id)_newRenderer;
- (long long)_defaultSampleMode;
- (long long)_openGLVirtualScreen;
- (_Bool)hasOpenGLSupport;
- (unsigned long long)family;
- (id)debugDescription;
- (id)initWithName:(id)arg1;

@end

