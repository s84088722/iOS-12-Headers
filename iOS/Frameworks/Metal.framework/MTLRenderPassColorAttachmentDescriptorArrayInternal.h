//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLRenderPassColorAttachmentDescriptorArray.h>

@class MTLRenderPassColorAttachmentDescriptorInternal, MTLRenderPassDepthAttachmentDescriptorInternal, MTLRenderPassStencilAttachmentDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLRenderPassColorAttachmentDescriptorArrayInternal : MTLRenderPassColorAttachmentDescriptorArray
{
    MTLRenderPassColorAttachmentDescriptorInternal *_color_descriptors[8];
    MTLRenderPassDepthAttachmentDescriptorInternal *_depth_descriptor;
    MTLRenderPassStencilAttachmentDescriptorInternal *_stencil_descriptor;
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)dealloc;

@end

